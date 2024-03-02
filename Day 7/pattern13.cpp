#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:- ";
    cin>>num;

    int row = 1;
    // this is create by variable
    char start = 'A';
    while (row <= num)
    {
        int col = 1; 
        while(col <= num){
            cout<<start<<" ";
            start = start + 1;
            col++;
        }

        cout<<endl;
        row++;
    }


    
}