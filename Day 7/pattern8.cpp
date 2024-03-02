#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number:- ";
    cin >> num;

    int count = 1;
    // int row = 1;
    // while(row <= num){
    //     int col = 1;
    //     while( col <= row){
    //         cout<<count<<" ";
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout<< endl;
    }

    return 0;
}