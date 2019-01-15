#include <iostream>
using namespace std;

int main(){
    string str_first, str_sec, str_third;
    cout << "What's your given name: ";
    cin >> str_first;
    cout << "What's your surname: ";
    cin >> str_sec;
    str_sec = " " + str_sec;
    str_first = str_first + str_sec;
    cout << "Welcome! " << str_first;
    
    return 0;
}