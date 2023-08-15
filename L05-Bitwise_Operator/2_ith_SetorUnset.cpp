// Check whether ith bit set or unset
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;

    if((n & (1<<i))==0)
    {
        cout<<"Not set"<<endl;

    }
    else{
        cout<<"Set"<<endl;
    }
}