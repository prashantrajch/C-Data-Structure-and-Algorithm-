#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number:- ";
    cin>>num;

    // int row = 1;
    // while(row <= num){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<row;
    //         col = col + 1;
    //     }

    //     cout<<endl;
    //     row = row + 1;
    // }

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<row;
        }
        cout<<endl;
    }

    return 0;
}