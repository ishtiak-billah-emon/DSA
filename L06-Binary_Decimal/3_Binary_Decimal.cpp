#include <iostream>
#include <math.h>
using namespace std;

int binaryTodecimal(int n)
{
        int sum = 0;
        int i =0;
    while(n!=0)
    {
        int digit = n%10;
        sum += digit* pow(2,i);
        i++;
        n/=10;

    }

    return sum;
}

int main()
{
  int n;
  cin>>n;

  int ans = binaryTodecimal(n);
  cout<<ans<<endl;
}