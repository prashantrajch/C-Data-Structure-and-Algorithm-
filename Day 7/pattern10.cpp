#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:- ";
    cin>>num;

    // it is my appoarch 
    // reverse the loop
    // int row = 1;
    // while( row <= num){
    //     int col = row;
    //     while(col >=1){
    //         cout<<col<<" ";
    //         col = col - 1;
    //     }
    //     cout<<endl;

    //     row++;
    // }

    // 2 approach by using formula ( row - col + 1)
    int row = 1;
    while(row <= num){
        int col = 1;
        while(col <= row){
            cout<<row - col + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
}