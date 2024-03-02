#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number:-  ";
    cin>>num;

    // by using while loop
    // int i = 1;
    // while(i <= num){
    //     int j = 1;
    //     while(j <= i){
    //         cout<<"* ";

    //         j = j + 1;
    //     }

    //     cout<<endl;
    //     i = i + 1;
    // }

    for(int i =1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}