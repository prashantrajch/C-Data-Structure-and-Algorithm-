#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number:- ";
    cin>>num;

    int row = 1;

    while(row <= num){
        char ch = 'A' +  row - 1;
        int col = 1;
        while(col <= row){
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;

        row = row + 1;
    }


return 0;
}