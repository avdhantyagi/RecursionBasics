#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c, b;
    
    cin >> r >> c >> b;

    bool matrix[r][c];

    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
            matrix[i][j] = false;
        }
    }
    
    for (int i = 0; i < b; i++) {
        int r, bS, bE;
        cin >> r >> bS >> bE;

        for (int j = bS-1; j < bE; j++) {
            matrix[r-1][j] = true;
        }
    }

    int Free = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == true) {
                Free++;
            }
        }
    }
    cout << Free << endl;
    return 0;
}