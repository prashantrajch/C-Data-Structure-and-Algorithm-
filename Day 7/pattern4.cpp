#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number  ";
    cin >> num;
    int i = 1;

    // while (i <= num)
    // {
    //     // this method use to reverse the loop n to 1;
    //     // int j = num;
    //     // while (j >= 1)
    //     // {
    //     //     cout << j;

    //     //     j = j - 1;
    //     // }

    //     // this method use to formula (num - j + 1)
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout<< num - j + 1;

    //         j = j + 1;
    //     }
    //     cout << endl;

    //     i = i + 1;
    // }

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            cout<< num - j + 1;
        }
        cout<<endl;
    }

    
}