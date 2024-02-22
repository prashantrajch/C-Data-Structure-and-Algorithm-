#include <iostream>
using namespace std;

int main()
{
    // this code is for switch statement learn
    int day;

    cout << "Enter a number then comes out a day:-  ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;

    default:
        cout << "Invalid";
        break;
    }
    cout<< "\n";

    int a, b;
    char choose;
    cout << "Enter the two number:-  ";
    cin >> a >> b;
    cout << "a> Add"<<endl;
    cout << "b> Subtract"<<endl;
    cout << "c> Multiply"<<endl;
    cout << "d> Divide \n";
    cin>>choose;
    switch (choose)
    {
    case 'a':
        cout << a + b;
        break;
    case 'b':
        cout << a - b;
        break;
    case 'd':
        cout << a / b;
        break;
    case 'c':
        cout << a * b;
        break;

    default:
        cout << "Invalid";
        break;
    }
}