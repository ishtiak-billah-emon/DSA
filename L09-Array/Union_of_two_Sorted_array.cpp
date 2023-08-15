#include<bits/stdc++.h>
using namespace std;

    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       set < int > s;
       
       // O(n logsz) // sz is the approximate size of the set;
       for(int i = 0 ;i<n ;i++)
       {
           s.insert(arr1[i]);
       }
       
        // O(m logsz) // sz is the approximate size of the set;
            for(int i = 0 ;i<m ;i++)
       {
           s.insert(arr2[i]);
       }
       
       vector< int > v;
      
    // the below part taking the complexity of  O (n + m) maximum.
    // because if all the element are different in both array then all N and M needed to be inserted in the vector
       for( auto e : s)
       {
          v.push_back(e);
       }
       return v;
       
       // T.c  -> O(nlogs + mlogs) + O(n+m);
       // S.c -> O(n + m)  + O(n+m) // this n + m is to return the ans;
    }


   vector<int> twoPointer(int arr1[],int arr2[],int n,int m)
    {
        int i = 0 , j = 0;

        vector < int > v;

        /*
                time complexity -> O(n + m)
                space Complexity -> O(n + m) not for solving the array for returning.
        */
        while(i < n && j< m)
        {
            if( arr1[i] <= arr2[j]   )
            {
                if( v.size() == 0 || v.back() != arr1[i] )
                {
                  v.push_back(arr1[i]);
                }
               
                i++;
            }
          
            else{
                    if( v.size() == 0 || v.back() != arr2[j] )
                    {
                             v.push_back(arr2[j]);
                    }
                j++;
            }
        }

    /*
        what if the first array  1 2 3 4 5 6 finished but the second array has some remaining value ? 
         ( vice-versa )

         thats why we have to check if there are any other elements or not

    */
        while (i < n)
        {
          if( v.size() == 0 || v.back() != arr1[i] )
                {
                  v.push_back(arr1[i]);
                }
               
                i++;
        }

        while (j < m)
        {
           if( v.size() == 0 || v.back() != arr2[j] )
                    {
                             v.push_back(arr2[j]);
                    }
                j++;
        }
        
        

    

        return v;
    }
int main()
{
    int n,m; cin>>n;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;
    int b[m];

    for(int i = 0; i<m;i++)
    {
        cin>>b[i];
    }

  // vector < int > ans = findUnion( a, b,n,m);
   vector < int > ans = twoPointer(a,b,n,m);

   for(auto e : ans)
   {
        cout<<e<<" ";
   }cout<<endl;



}