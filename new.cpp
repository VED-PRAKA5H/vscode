#include <iostream>
#include "math.h"
#include <string>
using namespace std;

int main()
{
    int a;
    string b;
    cout<< "hello world\nenter a number to find squareroot!";
    cin>>a;
    cout<<"what is your name";
    cin>>b;
    cout<<b<<"! sqrt of "<<a<<" is "<< sqrt(a);
    return 0;
}