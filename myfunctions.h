/*
 * myfunctions.h
 *
 *  Created on: 2018年2月21日
 *      Author: wyy
 */

#ifndef MYFUNCTIONS_H_
#define MYFUNCTIONS_H_

#include <iostream>
#include <string>
using namespace std;

int myadd(int, int, int);

int myadd(int x, int y, int z){
	return x+y+z;
}

void show_arr(int, int, int);

template<class T>
void show_arr(T& arr, int b = 0, int e = -1){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	cout << "totally " << e - b  << " elements:" <<endl;
	for (int i = b; i < e; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int sum(int, int, int);

template<class T>
int sum(T& arr, int b = 0, int e = -1){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
    int s = 0;
    for (int i = b; i < e; i++){
        s+=arr[i];
    }
    return s;
}


int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int sum(int, int, int);

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int, int, int, int);

int sum(int a, int b, int c, int d){
    return a + b + c + d;
}

int sum(int, int, int, int, int);

int sum(int a, int b, int c, int d, int e){
    return a + b + c + d + e;
}

int max(int, int, int);

template<class T>
int max(T& arr, int b = 0, int e = -1){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	int maximum = arr[0];
	for (int i = b; i < e; i++){
		if (maximum < arr[i]){
			maximum = arr[i];
		}
	}
	return maximum;
}

int min(int, int, int);

template<class T>
int min(T& arr, int b = 0, int e = -1){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	int minimum = arr[0];
	for (int i = b; i < e; i++){
		if (minimum > arr[i]){
			minimum = arr[i];
		}
	}
	return minimum;
}

void sort(int, int, int, string);

template<class T>
int sort(T& arr, int b = 0, int e = -1, string a = "election"){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	if (a == "buble"){
		int temp;
		for (int i = b; i < e; i++){
			for (int j = b; j < e - 1; j++){
				if (arr[j] > arr[j+1]){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	else if (a == "election"){
		int min, temp;
		for (int i = b; i < e - 1; i++){
			min = i;
			for (int j = i + 1; j < e; j++){
				if (arr[j] < arr[min]){
					min = j;
				}
			}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	else if (a == "insertion"){
		int temp,j;
		for(int i = b + 1; i < e; i++){
			temp=arr[i];
			j=i-1;
			while((temp<arr[j]) && (j>=0)){
				arr[j+1]=arr[j];
				j=j-1;
			}
			arr[j+1]=temp;
		}
	}
}

void reverse(int, int, int);

template<class T>
int reverse(T& arr, int b = 0, int e = -1){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	int temp;
	for (int i = b; i < e/2; i++){
		temp = arr[i];
		arr[i] = arr[e-1-i];
		arr[e-1-i] = temp;

	}
}

int find(int, int, int, int, string);

template<class T>
int find(T& arr, int item, int b = 0, int e = -1, string a = "sequence"){
	if (e == -1){
		e = sizeof(arr) / sizeof(arr[0]);
	}
	cout << "finding " << item;
	int index = -1;
	if (a == "sequence"){
		cout << " using sequence search... ";
		for (int i = b; i < e; i++){
			if (arr[i] == item){
				index = i;
				break;
			}
		}
	}
	else if (a == "binary"){
		cout << " using binary search... ";
		int m;
		e = e - 1;
		while (b <= e){
			m = (b + e)/2;
			if (item == arr[m]){
				index = m;
				break;
			}
			else if(item > arr[m]){
				b = m + 1;
			}
			else{
				e = m -1;
			}
		}
	}
	return index;
}

int factorial(int);

int factorial(int a){
	if (a > 1){
		return a*factorial(a-1);
	}
	else{
		return 1;
	}
}

void swap(int*, int*);

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

#endif /* MYFUNCTIONS_H_ */
