#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    a = a ^ b;
    b = b ^ a ;// b ^ ( a ^ b) =  b ^ a ^ b = a  ; b = a
    a = a ^ b; // a ^ ( b ^ a) = a ^ b ^ a = b; a = b;

    cout<<a<<" "<<b;

}
