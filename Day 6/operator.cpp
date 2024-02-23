#include<iostream>
using namespace std;
int main(){
    // Arithmetic operators
    /* 1. Binary operators                                 ++a (Pre Incrementer)
         +,-,*,/,%(use for reminader)                      a++ (Post Incrementer) */ 
    /* 2. Unary Operator
          ++,-- */
      int a = 10,b = 10,c,d; /* >>>> */   c = ++a; d = b++; /* >>>> */  cout<<c<<"\t" << d << endl; 
                          //0      0     1    1 
      int i = 0;   /* >>>> */ i = i++ - --i + ++i - i--;  /* >>>> */cout<<i<<endl;

      int e = 1; int j=2, k = 3; /* >>>> */  int m = e-- - j-- - k--; 
            cout<<e<<endl; cout<<j<<endl; cout<<k<<endl; cout<<m<<endl;
     /* Relational Operators 
        ==, !=, <, >, <=, <= */
    int num = 5;
    if (num > 10){cout<< "More than 10"<< endl;}
    else if(num < 10){cout<< "Less than 10"<< endl;}else{ cout<<"Equal to 10"<<endl;}
   /* Logical Operator
     &&, ||, !*/
    int n;
    cin>>n;
    if(n%2 ==0 && n%3 ==0){cout<<"Divisible by both"<<endl; }
    else if(! (n % 2 == 0)){cout<<"Not Divisible by 2"<<endl;}
    else if( n%2 ==0 || n%3 == 0){cout<< "Divisible any one 2 and 3"<<endl; }
    else{cout<< "Divisible by none"<<endl;}
    /*  Bitwise Operator
        &, |, ^, ~, <<, >> 
        a << n -----> a * 2^n 
        a >> n -----> a / 2^n*/
        int add = 4, sub = 1;
        int l = add << sub;
        cout<< l<<endl;

        /* Miscellaneous Operators
         sizeof, condition?x:Y, cast, comma(,) &(address), *(Pointer)*/

         cout<< sizeof(i)<<endl;
         n > 10 ? cout<<"n is greater"<<n <<endl: cout<<"lest than "<<n <<endl;
         char al = 'A';
         cout<< (int) al<<endl;
    

return 0;

}