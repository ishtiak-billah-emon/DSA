//https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;

void bruteforce(int a[], int n)
{
// time -> O(2*N) -> O(N)
// space O(N) = taking a new array

    int newArray[n]={0};

    for(int i = 0 ,j=0; i<n;i++)
    {
       if(a[i]!= 0)
       {
            newArray[j]=a[i];
            j++;
       }
       
    }


     for(int i = 0 ;i<n;i++)
     {
        a[i] = newArray[i];
     }

     for(int i = 0 ;i<n;i++)
     {
        cout<<a[i]<<" ";
     }cout<<endl;

}

void zerosToEnd(int arr[], int n) {
    // O(N)
    // No extra space . modified the given array
    
  //finding first zero occurrence
  int k = 0;
  while (k < n) {
    if (arr[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;

    }

    j++;

  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main()
{
    int n;cin>>n;
    int a[n]={0};
    
 

    for(int i =  0; i<n;i++)
    {
        cin>>a[i];
    }
   
 //   bruteforce(a,n);
      zerosToEnd(a,n);


  
}