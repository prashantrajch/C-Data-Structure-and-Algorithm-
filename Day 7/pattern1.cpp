#include<iostream>
using namespace std;

int main(){
    // first pattern using while loop
    int num;
    cout<<"Enter the number to print the pattern"<<endl;
    cin>>num;
    int i = 1;
    // while(i <= num){
    //     int j = 1;
    //     while(j<=num){
    //         cout<<"* ";

    //         j++;
    //     }
    //     cout<<endl;
    //     i = i +1;
    // }
    // first pattern using do while loop
    // do{
    //     int j = 1;
    //     do{
    //         cout<<"* ";
    //         j = j + 1;
    //     }while(j <= num);
    //     cout<<endl;
    //     i++;
    // }while(i <= num);
    
    // first pattern using for loop
    for(; i <= num; i++){
        for(int j = 1; j <= num; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}