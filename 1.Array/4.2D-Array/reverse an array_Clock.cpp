#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;

    // 🔹 Step 1: Transpose (rows ↔ columns)
    // matlab matrix[i][j] ko matrix[j][i] se swap karna
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // 🔹 Step 2: Har row ko reverse karo
    // kyuki transpose ke baad bas rows flip karni hoti hai
    for(int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while(start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    // 🔹 Print result
    cout << "Clockwise Rotation:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}