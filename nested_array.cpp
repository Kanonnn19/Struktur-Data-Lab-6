#include <iostream>
using namespace std;
int main(){
    int nilai[3][4] = {
        {20, 30, 40, 50},
        {60, 70, 80, 90},
        {100, 110, 120, 130}
    };
    for (int i= 0; i < 3; i++){
        for ( int j = 0; j < 4; j++ ){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}