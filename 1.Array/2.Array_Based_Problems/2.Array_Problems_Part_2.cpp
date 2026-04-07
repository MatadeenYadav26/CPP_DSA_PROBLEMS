#include <iostream>
using namespace std;

// void printArray(int arr[],int size) {
//     for(int i = 0; i < size ; i++){
//         cout<<arr[i]<<" , ";
//     }
//     cout<<endl;
// }
// Array Creation and Array Initialization:-

// array in function
    void printArray(int arr[],int size){
        for(int i= 0 ; i < size ; i++){
            cout<< arr[i] << " ,";
        }    cout<< endl;
    }

// function to print twice of original value

void printTwice(int arr[],int size){
    for(int i = 0 ; i <= size-1 ; i++){
            cout<<(2*arr[i])<<" ,";
    }
}

void oddEven(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        int number = arr[i];
        if (number % 2 == 0){
            cout<<"Even"<<" ";
        }
        else{
            cout<<"Odd"<<" ";
        }
    }
}

void countZeroesOnes (int arr[],int size){
    int totalZero = 0;
    int totalOne = 0;
    for(int i = 0 ; i < size ; i++){
        int number = arr[i];

        if( number == 0){
            totalZero++;
        }
        else if (number == 1){
            totalOne++;
        }
    }
    cout<<"Total Zero : "<<totalZero << endl;
    cout<<"Total One : "<<totalOne;
}

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
    // char arr[10];
    // cout<<"Enter vaue of n: "<<endl;
    // int n ;
    // cin>>n;

    // for(int i = 0 ; i <n ; i++){
    //     cout<< "Taking input for indexes: "<< i <<endl;
    //     cin >> arr[i];
    // }


    // cout<<"Printing the array: "<<endl;
    // for(int i = 0; i<n;i++){
    //     cout<< arr [i] << " , ";
    // }
    // cout<< endl;

    // Passing arrays into functions:


    // int arr[10] = {11,12,13,14,15};
    int arr[10] = {1,1,0,1,0};
    int size = 5;
    // int capacity = 10;


    // function call;

    // printArray(arr,size);
    // printTwice(arr,size);
    // oddEven(arr,size);
    countZeroesOnes(arr,size);


    return 0;
}
