// question:
//https://bit.ly/3Ioexjh 

#include<bits/stdc++.h>
using namespace std;

        int first_occurrence(vector<int> a, int n,int key)
        {
            int low = 0; 
            int high = n-1;
            int mid =  low + ( high - low)/2;
            int pos = -1;

            while(low <= high)
            {
                if(a[mid] == key)
                {
                    high = mid - 1;
                    pos = mid;
                }

                else if( a[mid] > key )
                {
                    high = mid - 1; 
                }
                else{
                    low = mid + 1; 
                }

                mid = low  + (high - low)/2;
            }
            
             return  pos;
        }



        int last_occurrence (vector<int>a, int n ,int key)
        {
            int low = 0; 
            int high = n-1;
            int mid =  low + ( high - low)/2;
            int pos = -1;

            while(low <= high)
            {
                if(a[mid] == key)
                {
                    pos = mid;
                    low = mid + 1;
                    
                    
                }

                else if( a[mid] > key )
                {
                    
                    high  = mid - 1; 
                }
                else{

                    low = mid + 1;
                }

                mid = low  + (high - low)/2;
            }
           return pos;
        } 


pair<int, int> firstAndLastPosition(vector<int>& a, int n, int key)
{
    // Write your code here

        pair < int , int > p;

        p.first = first_occurrence(a, n, key);
        p.second = last_occurrence(a,n,key);
        
        return p;
}

int main()

{
    int n, k ; cin>>n>>k;

    vector < int > v;
    int e;

  for(int i = 0 ; i< n; i++)
  { 
    cin>>e;
    v.push_back(e);    
  }


  pair< int , int > p = firstAndLastPosition(v,  n,  k);

  cout<<p.first<<" "<<p.second<<" ";
    

}
