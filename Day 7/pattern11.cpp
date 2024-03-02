#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:  ";
    cin >> num;
    // int row = 1;
    // while (row <= num)
    // {
    //     int col = 1;
    //     while (col <= num)
    //     {
    //         char start = 'A' + row - 1;
    //         cout << start << " ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}