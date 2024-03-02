#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    int row = 1;
    while (row <= num)
    {
        int col = 1;
        char ch = 'A';
        while (col <= num)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    // for (int i = 1; i <= num; i++)
    // {
    //         char ch = 'A';
    //     for (int j = 1; j <= num; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    return 0;
}