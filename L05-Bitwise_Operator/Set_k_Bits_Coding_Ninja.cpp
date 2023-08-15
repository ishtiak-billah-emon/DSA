#include<bits/stdc++.h>
using namespace std;

// void printBinary(int n)
// {
//     for(int i= 10; i>=0;--i)
//     {
//         cout<<((n>>i)&1);
//     }cout<<endl;
//}
int setKBits(int n,int k)
{

    /*23 -> 10000
        ->    111   10000-1
                        1111

                    
        ------------
            10111 (23)

     */

    n = n|  ((1<<k)-1);
    return n;
}
int main()
{
    int n,k;
    cin>>n>>k;
 //   printBinary(n);

    cout<<setKBits(n,k)<<endl;

}