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
        // first approach without using formula
        // char ch = 'A' + row - 1;
        // while (col <= num)
        // {
        //     cout << ch << " ";
        //     ch++;
        //     col++;
        // }

        // second approach with using formula( "A" + row + col - 2)
        while(col <= num){
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout << endl;

        row++;
    }

    return 0;
}