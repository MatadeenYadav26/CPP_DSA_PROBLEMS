#include <iostream>
using namespace std;

void boundaryTraversal(int arr[][4], int n, int m){

    // 🔹 Special case: agar sirf 1 row hai
    if(n == 1){
        for(int i = 0; i < m; i++){
            cout << arr[0][i] << " ";
        }
        return;
    }

    // 🔹 Special case: agar sirf 1 column hai
    if(m == 1){
        for(int i = 0; i < n; i++){
            cout << arr[i][0] << " ";
        }
        return;
    }

    // 🔹 1. Top Row (left → right)
    for(int i = 0; i < m; i++){
        cout << arr[0][i] << " ";
    }

    // 🔹 2. Right Column (top → bottom, skip first row)
    for(int i = 1; i < n; i++){
        cout << arr[i][m-1] << " ";
    }

    // 🔹 3. Bottom Row (right → left, skip last column)
    for(int i = m-2; i >= 0; i--){
        cout << arr[n-1][i] << " ";
    }

    // 🔹 4. Left Column (bottom → top, skip first & last row)
    for(int i = n-2; i > 0; i--){
        cout << arr[i][0] << " ";
    }
}

int main(){

    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    boundaryTraversal(arr, 3, 4);

    return 0;
}
