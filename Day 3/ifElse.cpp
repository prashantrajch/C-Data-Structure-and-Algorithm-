#include <iostream>
using namespace std;

int main()
{
    // let if else learn
    // int marks;
    // cout << "Enter a marks to get a grade \t";
    // cin >> marks;
    // if (marks >= 90 &&  marks <= 100)
    // {
    //     cout << "A+";
    // }
    // else if (marks <= 90 &&  marks >= 80)
    // {
    //     cout <<  "A";
    // }
    // else if (marks <= 80 && marks >= 70)
    // {
    //     cout << "B+";
    // }
    // else if (marks <= 70 && marks >= 60 )
    // {
    //     cout << "B";
    // }
    // else if (marks <= 60 && marks >= 50)
    // {
    //     cout << "C";
    // }
    // else if(marks <= 50 && marks >= 40)
    // {
    //     cout << "D";
    // }
    // else if(marks <= 40 && marks >= 30){
    //     cout << "E";
    // }
    // else if(marks >= 0 && marks <= 21){
    //     cout << "F";
    // }
    // else{
    //     cout << "Invalid";
    // }

    int ch;

    cout << "Enter any letter and number to find the is lowercase, uppercase or number are not" << endl;
    ch = cin.get();
    if (ch >= 97 && ch <= 122)
    {
        cout << "This is lowercase";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "This is upperCase";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "This is number";
    }
    else
    {
        cout << "You entered the out of syllabus";
    }
}