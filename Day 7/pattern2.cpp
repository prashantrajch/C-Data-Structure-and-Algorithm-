#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to print a pattern"<<endl;
    cin>>num;
    // secord patter using while loop

    // int i = 1;
    // while(i <= num){
    //     int j = 1;
    //     while(j <= num){
    //         cout<<i;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // secord patter using do while loop
// int i = 1;
//     do{
//         int j = 1;
//         while(j <= num){
//             cout<<i;
//             j = j + 1;
//         }
//         cout<<endl;

//         i++;
//     }while( i <= num);


    // secord patter using for loop

    for(int i = 1; i<=num; i++){
        for(int j=1; j <= num; j++){
            cout<<i;
        }
        cout<<endl;
    }
}