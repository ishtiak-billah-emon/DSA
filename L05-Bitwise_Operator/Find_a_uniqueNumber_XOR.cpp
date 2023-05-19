
/*Given an array a of n integers. All integers are present in even count except one
  Find that one integer which has odd count in O(N)
  time complexity and O(1) space.
*/
#include<bits/stdc++.h>
using namespace std;

int uniqueNo(vector<int>a)
{
    int n = a.size();

    int Xor = 0;

    for(int i = 0 ;i<n;i++)
    {
        Xor =  Xor ^ a[i];
    }
    return Xor;
}
int main()
{
   vector<int>a = {1,3,5,4,3,1,5};
   cout<<uniqueNo(a)<<endl;
    
    
}