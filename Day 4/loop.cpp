#include <iostream>
using namespace std;

int main()
{
    // sum of the first 10 natural number
    int s = 0;
    for (int i = 0; i <= 10; i++)
    {
        cout << i;
        s += i;
    }

    cout << "\nThe total natural number is:-  " << s;
    cout << "\n";

    int i = 0;

    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << "\n";
    do
    {
        cout << i << " " ;
        i--;
    } while (i > 0);
}