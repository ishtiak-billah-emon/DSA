/*
    Given 2N+2 numbers. every number is coming twice ( even times) except two numbers. find those two numbers.

    Concept:
    
    1)  Xor of two unique number will be > 0 
        So there will be at least 1 set Bit
        5 ^ 7 = 2;  010

    2)  So a bit is set when it is present exactly one of two numbers.
            101
            111
        -----------
            010
    3) find position of any set bit ( Best way is finding from Lsb)
        and check it with all numbers if set bit found at that position then  make an array of those numbers.

            3 3 6 6 2 2 7

    4) Find the unique number of the new array. This is the first unique number
                
                7
   5) do Xor with the first ans . 
            5 ^ 7 ^ 7 = 5
     we will found the second unique number

*/

#include<iostream>
#include<vector>
using namespace std;
int uniqueNo(vector<int>a)
{
    int n = a.size();
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans^=a[i];
    }
    return ans;
}

int findSetBit(int a)
{
    int i = 0;
    int pos = -1;
    while(a!=0)
    {
        if((a & 1)!=0)
        {
            pos = i;
            break;
        }

        a = a>>1;
        i++;

    }
    return pos;

}

int makingSet(int x , vector<int>arr)
{
    vector<int>newSet;    
     int n = arr.size();
       
            for(int i = 0 ; i<n ;i++)
            {
                if( (( arr[i]>>x) & 1) !=0 ) 
                {
                    newSet.push_back(arr[i]);
                }
            }
  
        // printing new vector
        // for(auto it : newSet)
        // {
        //     cout<<it<<" ";
        // }

    int Xor = 0;
    int sz = newSet.size();
    for(int i = 0;i<sz;i++)
    {
        Xor^=newSet[i];
    }
    return Xor;



}

int main()
{
    vector<int>v= {3,4,3,5,6,2,7,2,6,4};

    int a = uniqueNo(v); 

    int pos = findSetBit(a); 
   
    int firstNo = makingSet(pos,v); 

    int secondNo = firstNo ^ a;

    cout<<secondNo<<" "<<firstNo<<endl;

 
   
    
    
}