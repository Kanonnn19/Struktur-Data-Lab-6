#include <iostream>
using namespace std;
main(){
    int arr [3] [3] [4];
    int klpt = 2;

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                arr[i][j][k] = klpt;
                klpt += 2; 
            }
        }
    }
    for (int i = 0; i < 3; i++){
        cout << "Label ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << " "; 
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}