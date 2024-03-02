#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:- ";
    cin>>num;

    // first approach
    // int row = 1;
    // char ch = 'A';
    // while(row <= num){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<ch<<" ";
    //         ch++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // second appraoch
    // int row = 1;
    // while(row <= num){
    //     int col = 1;
    //         char start = 'A' + row - 1;
    //     while(col <= row){
    //         cout<<start<<" ";
    //         start = start + 1;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }

    // third approach by using the formula ("A" + row + col - 2)
    for(int row = 1; row<= num; row++){
        for(int col = 1; col <= row; col++){
            char start = 'A' + row + col - 2;
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }


}