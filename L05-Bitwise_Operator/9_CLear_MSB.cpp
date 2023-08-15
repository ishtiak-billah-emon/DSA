#include<iostream>
using namespace std;
void printBinary(int n)
{
    while( n!=0)
    {
        int bit = n & 1;
        n = n>>1;
        cout<<bit;
    }
}
int clearMSB(int n ,int m)
{
    n = (n & m);
    return n;
    
}
int main()
{
    int n,i;
    cin>>n>>i;

    int m = (1<<(i))-1; 
    

    int ans = clearMSB(n,m);
    printBinary(ans);
    

}