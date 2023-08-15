// clear all set bit from ith to LSB

#include<iostream>
using namespace std;
void printBinary(int n)
{
    for(int i = 10; i>=0;--i)
    {
     cout<<((n >> i) & 1) <<" ";
    }cout<<endl;
}
void clearLSB(int n ,int m)
{
    n = (n & m);
    printBinary(n);
    
}
int main()
{
    int n,i;
    cin>>n>>i;

    int m = ~((1<<(i+1))-1);

    clearLSB(n,m);
  


}