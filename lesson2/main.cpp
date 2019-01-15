#include <iostream>

using namespace std;

int main(){
    cout << "inpiut your final score" << endl;
    int score;
    cin >> score;
    switch (score){
        case 0 ... 9:
            cout << "did you hand in a white test paper???" << endl;
            break;
        case 10 ... 19:
            cout << "may be studying does not suit you" << endl;
            break;
        case 20 ... 29:
            cout << "what the hell are you doing this semister" << endl;
            break;
        case 30 ... 39:
            cout << "how many minutes did you listen every class?" << endl;
            break;
        case 40 ... 49:
            cout << "sorry, you failed" << endl;
            break;
        case 50 ... 59:
            cout << "you passed with the lowest score" << endl;
            break;
        case 60 ... 69:
            cout << "you passed, you can do better"<< endl;
            break;
        case 70 ... 79:
            cout << "You got a C, try harder next time!" << endl;
            break;
        case 80 ... 89:
            cout << "You got a B, congratulations!" << endl;
            break;
        case 90 ... 99:
            cout << "Wow! You got an A ^_^" << endl;
            break;
        case 100:
            cout << "YOU ARE EXCELLENT!!!" << endl;
            break;
    }
    return 0;
}