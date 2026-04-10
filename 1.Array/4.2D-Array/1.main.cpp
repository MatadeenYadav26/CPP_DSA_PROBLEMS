#include <iostream>
#include <limits.h>

using namespace std;

void printRowWise(int arr[][2],int rowSize , int colSize){
    for(int row = 0 ; row<rowSize ; row++){
        for(int col = 0 ; col<colSize; col++){
            cout<< arr[row][col]<<" ,";
        }
        cout<<endl;
    }
}

void printColWise(int arr[][2],int rowSize , int colSize){
    for(int col = 0 ; col < colSize; col++){
        for(int row = 0 ; row < rowSize ; row++){
            cout<<arr[row][col]<<" ,";
        }
        cout<<endl;
    }
}

void printRowWiseSum(int arr[][2] , int n , int m){

    // outeer loop : for rows;
    // inner loop  : for columns;

    for(int row = 0; row<n ; row++){
        // har ek row k liye start me sum = 0 ;
        int sum = 0 ;
        for(int col=0; col<m ; col++){
            sum = sum + arr[row][col];
        }
        // now you have row sum ready : Print now :-
        cout<<"Row - "<<row<<" :"<<sum<< endl;
    }
}

void printColWiseSum(int arr [][2], int n , int m){

    // outer loop : column 
    // inner loop : row
    
    for(int col= 0; col < m ; col++){
// har row k liye summ = 0 k liye start karna hai;
        int sum = 0;
        for(int row = 0 ; row < n  ; row++){
            sum += arr [row][col];
        }
        // now you have the column sum ready print it.
        cout<<"Col - "<<col<<" :"<<sum<< endl;
    }

}

pair <int,int> searchIn2DArray(int arr[][2] , int n ,int m , int target){
    //row-wise search

    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < m ; col++){
            if( arr[row][col] == target){
                return {row,col};
            }
        }
    }
    // agar mai yaha tak pahuch gya toh means 2d array me kahi bhi target nahi tha
    // iska matlab return -1,-1;
    return{-1,-1};
}


int getMinFrom2DArray(int arr[][2] , int n , int m ) {

    // row wise traversal to get int:

    int mini = INT8_MAX;
    for(int row = 0 ; row<n ; row++){
        for(int col = 0 ; col<m ; col++){
            mini = min(mini, arr[row][col]);
        }
    }
    return mini;

}


int getMaxFrom2DArray(int arr[][2] , int n , int m ) {

    // row wise traversal to get int:

    int maxi = INT8_MIN;
    for(int row = 0 ; row<n ; row++){
        for(int col = 0 ; col<m ; col++){
            maxi = max(maxi, arr[row][col]);
        }
    }
    return maxi;

}

int main () {

    // Creation of Array:
    //declaration:
    // int arr[3][2];

    // initialisation:
    int arr [3][2] = {
        {1,2},
        {3,4},
        {5,6}
        };

    // access:

    // cout<<arr[2][0];

    // Input:

    // int arr [3][2];
    // for(int i = 0; i<3;i++){
    //     for(int j =0; j<2; j++){
    //         cout<<"Enter value of rowindex"<< i << "and ColIndex: "<< j << endl;
    //         cin>> arr[i][j];
    //         cout<<endl;
    //     }
    // }

    // // Printing:

    // for(int i = 0 ; i<3 ; i++){
    //     for( int j = 0 ; j<2 ; j++){
    //         cout<< arr[i][j]<<" , ";
    //     }
    //     cout << endl;
    // }


    // printRowWise(arr,3,2); 
    // printColWise(arr,3,2); 
    // printRowWiseSum(arr,3,2);
    // printColWiseSum(arr,3,2);
    // pair <int,int> ans = searchIn2DArray(arr,3,2,6);
    // cout<<ans.first<<" "<<ans.second<<endl;
    // cout << getMinFrom2DArray(arr , 3 , 2);
    cout << getMaxFrom2DArray(arr , 3 , 2);

    return 0;
}
