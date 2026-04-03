#include <iostream>
using namespace std;

// void printArray(int arr[],int size) {
//     for(int i = 0; i < size ; i++){
//         cout<<arr[i]<<" , ";
//     }
//     cout<<endl;
// }
// Array Creation and Array Initialization:-

int main(){
    // int arr[10];//array declaration.// gives output of only garbage value.
    // int arr[5]={1,2,3,4,5};
    // int arr[5] ={1,2}; 
    // int arr[5] = {0};
    // int arr[5] = {1};
    // int arr[] = {10,20,30,40,50};

    // printArray(arr,5);

    // Using loop:

    // int arr[5] ={10,20,30,40,50};

    // for(int i = 0 ; i < 5 ; i++){
    //     cout<< arr[i]<<" ";
    // }

    // int arr[5] = {12,34,123,76,43};
    // int size = 5;
    // for(int i = 0 ; i < size ; i++) {
    //     cout<<arr[i]<<" ";
    // };

    // int i = 0;
    // if(arr[i] == i[arr]){
    //     cout<<"True";
    // }


    // declare:
    // int arr[10];
    // cout<< "Enter the value of n , (n= number of values to take input for)" << endl;
    // int n ;
    // cin>> n ;

    // for(int i = 0 ; i < n ; i++){
    //     cout<< "Taking input for index " << i << endl;
    //     cin>>arr[i];
    // }

    // cout<<"printing the array:"<<endl;
    // for(int i=0 ; i<n;i++){
    //     cout << arr[i] << ",  ";
    // }
    // cout<< endl;        

// Task:
    char arr[10];
    cout<<"Enter vaue of n: "<<endl;
    int n ;
    cin>>n;

    for(int i = 0 ; i <n ; i++){
        cout<< "Taking input for indexes: "<< i <<endl;
        cin >> arr[i];
    }

    cout<<"Printing the array: "<<endl;
    for(int i = 0; i<n;i++){
        cout<< arr [i] << " , ";
    }
    cout<< endl;
        

    return 0;
}
