#include <iostream>

using namespace std;

void add(double, double);

void substract(double, double);

void multiply(double, double);

void divide(double,double);

void add(double x, double y){
    double answer = x + y;
    cout << x << " + " << y << " = " << answer << endl;
}

void substract(double x, double y){
    double answer = x - y;
    cout << x << " - " << y << " = " << answer << endl;
}

void multiply(double x, double y){
    double answer = x * y;
    cout << x << " * " << y << " = " << answer << endl;
}

void divide(double x, double y){
    if(y != 0){
        double answer = x / y;
        cout << x << " / " << y << " = " << answer << endl;
    }
    else{
        cout << "cannot divide by 0" << endl;
    }
}

int main(){
    double n1, n2;
    char op = '0';
    cout << "input an expression:" << endl;
    cin >> n1 >> op >>n2;
    double answer;
    if(op != '0'){
        switch (op){
            case '+':
                add(n1, n2);
                break;
            case '-':
                substract(n1, n2);
                break;
            case '*':
                multiply(n1, n2);
                break;
            case '/':
                divide(n1, n2);
                break;
        }
    }

    return 0;
}