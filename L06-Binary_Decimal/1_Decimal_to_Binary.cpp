#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
/*Process 1:
        1) Divide the number by 2
        2) Store the reminder in answer array
        3) repeat the process until number = 0
        4) Reverse the answer

 Process 2: ***
        1) if we do (&1) with any bit, the bit remain same;
         1 & 1= 1
         0 & 1 = 0;

         so we can use this to convert decimal to binary

         2) to reverse the digit we can use 
            ans = (digit * pow(10.i) + ans) 
            formula where initially ans =0 ; i =0;

            1,2,3 -> 321

            1 * 10^0 + 0  =  1;
            2 * 10^1 + 1  = 21;
            3 * 10^3 + 21 = 321;

            we know binary form are reversed because the highest weight on the left and lowest on the right.

            print ans.

*/

// first approach
int a[31];

int  conversion(int n)
{
 
   int i = 0;
    while(n!=0)
    {
        int rem  = n%2;
        
       a[i]=rem;
       i++;
       n/=2;
        
    }

  return a[31];
}

void print()
{
    for(int i = 31 ;i>=0;i--)
    {
        cout<<a[i]<< " ";
    }
}

// 2nd approach

int binaryConversion(int n)
{
    int ans =0,i=0;
    while (n!=0)
    {
        int bit = n&1;
        ans= (bit * pow(10,i)+ans);
        i++;
        n=n>>1;
    }
    return ans;
    
}

int main()
{
    int n;
    cin>>n;
 //    conversion(n);
 //   print();
    if(n>0)
    {
        int ans = binaryConversion(n);
        cout<<ans<<endl;
    }
    else{
        int ans = binaryConversion(-n);
        int newans = (~ans);
        newans = newans+1;
        cout<<newans<<endl;
    }
 

   
}