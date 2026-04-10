
// Vector Mode : 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<vector<int>> arr;

//     // row 1
//     arr.push_back({1, 2, 3});

//     // row 2
//     arr.push_back({4, 5});

//     // row 3
//     arr.push_back({6, 7, 8, 9});

//     // Printing
//     for(int i = 0; i < arr.size(); i++){
//         for(int j = 0; j < arr[i].size(); j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Array mode :

#include <iostream>
using namespace std;

int main() {

    int* arr[3];  // 3 rows

    // Har row ka alag size
    arr[0] = new int[3]{1, 2, 3};
    arr[1] = new int[2]{4, 5};
    arr[2] = new int[4]{6, 7, 8, 9};

    int sizes[3] = {3, 2, 4}; // store sizes separately

    // Printing
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < sizes[i]; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
