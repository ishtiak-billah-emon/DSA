#include<iostream>
using namespace std;

void power_of_two(int n)
{
    if((n & (n-1))==0)
    {
        cout<<"N is a power of Two"<<endl;
    }else{
        cout<<"N is not a power of Two"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    power_of_two(n);
}