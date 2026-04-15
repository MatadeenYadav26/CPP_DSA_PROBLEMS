#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;

    // 🔹 Step 1: Transpose (same as before)
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // 🔹 Step 2: Har column ko reverse karo
    // yahan rows nahi, columns reverse honge
    for(int col = 0; col < n; col++) {
        int top = 0, bottom = n - 1;
        while(top < bottom) {
            swap(matrix[top][col], matrix[bottom][col]);
            top++;
            bottom--;
        }
    }

    // 🔹 Print result
    cout << "Anti-Clockwise Rotation:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}