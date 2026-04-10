#include <iostream>
using namespace std;

int main () {

    // Creation of Array:
    //declaration:
    // int arr[3][2];

    // initialisation:
    // int arr [3][2] = {
    //     {1,2},
    //     {4,5},
    //     {7,9}
    //     };

    // access:

    // cout<<arr[2][0];

    // Input:

    int arr [3][2];
    for(int i = 0; i<3;i++){
        for(int j =0; j<2; j++){
            cout<<"Enter value of rowindex"<< i << "and ColIndex: "<< j << endl;
            cin>> arr[i][j];
            cout<<endl;
        }
    }

    // Printing:

    for(int i = 0 ; i<3 ; i++){
        for( int j = 0 ; j<2 ; j++){
            cout<< arr[i][j]<<" , ";
        }
        cout << endl;
    }





    return 0;
}
