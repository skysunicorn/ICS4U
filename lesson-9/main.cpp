#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Set level: ";
    int l;
    cin >> l;
    int a[l][l];
    for (int i = 0; i < l; i++){
        for (int j = 0; j < l; j++){
            a[i][j] = 0;
        }
    }
    int c = 0;
    int i = 0;
    int j = 0;
    int dd[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int d = 0;
    while (c < l * l){
        c++;
        a[i][j] = c;
        if ((i + dd[d][0] >= l) || (i + dd[d][0] < 0) || (j + dd[d][1] >= l) || (j + dd[d][1] < 0) || (a[i + dd[d][0]][j + dd[d][1]])){
            d = (d + 1) % 4;
        }
        i += dd[d][0];
        j += dd[d][1];
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < l; j++){
            cout << std::setw(6) << a[i][j];
        }
        cout << endl << endl;
    }
    
    return 0;
}