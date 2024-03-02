#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:- ";
    cin>>num;
    // first approach
    // int row = 1;
    // while(row <= num){
    //     int count = row;
    //     int col = 1;
    //     while(col <= row){
    //         cout<<count<<" ";
    //         count++;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // second approach
    int row = 1;
    while(row <= num){
        int j = row;
        while(j <= (row * 2) - 1){
            cout<<j<<" ";
            j = j + 1;
        }
        cout<<endl;

        row++;
    }

    // for(int row = 1; row <= num; row++){
    //     int count = row;
    //     for(int j = 1; j <= row; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    return 0;
}