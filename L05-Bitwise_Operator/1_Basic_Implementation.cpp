#include<iostream>
using namespace std;
int main()
{
    int a = 4; // 100
    int b = 6; // 110

    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" ~a "<<(~a)<<endl;
    // 0000......000100
    //               +1
    // 0000000000000101
    //--------------------
    //               -5
    cout<<" a^b "<<(a^b)<<endl;

    // Left shift and right shift

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(21<<1)<<endl;
    cout<<(21<<2)<<endl;

    //
    cout<<INT_MAX<<endl;
    int num = (1<<31)-1; // overflow
    cout<<num<<endl;

    unsigned int x = (1<<32)-1;
    cout<<x<<endl;
   


}
