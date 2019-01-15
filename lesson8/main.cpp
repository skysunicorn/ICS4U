#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "input your age: ";
    cin >> age;
    if (0<=age<3){
        cout << "Baby" << endl;
    }
    else if (3<=age<7){
        cout << "Child" << endl;
    }
    else if (7<=age<12){
        cout << "School" << endl;
    }
    else if (12<=age<18){
        cout << "Teenager" << endl;
    }
    else if (age >= 18){
        cout << "Adult" << endl;
    }
    else if (age == 100){
        cout << "Wow~" << endl;
    } 
    else{
        cout << "not born yet" << endl;
    }
    
    return 0;
}