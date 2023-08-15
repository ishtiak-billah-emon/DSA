#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /* If we do left shift by 1 then it is multiply by 2
       x<<n ->  (x * 2^n)
     */
    cout<<(n<<1)<<endl;


     /* If we do right shift by 1 then it is divided by 2
       x>>n ->  (x / 2^n)
     */

    cout<<(n>>1)<<endl;
}