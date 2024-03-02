#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number  ";
    cin >> num;

    int count = 1;
    // using by while loop
    // int i = 1;
    // while(i <= num){
    //     int j = 1;
    //     while(j <= num){
    //         cout<<count <<" ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}