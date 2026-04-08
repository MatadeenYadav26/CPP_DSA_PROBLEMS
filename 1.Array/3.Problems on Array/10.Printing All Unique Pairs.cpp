#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        // start from next element
        for(int j = i + 1; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }

    return 0;
}
