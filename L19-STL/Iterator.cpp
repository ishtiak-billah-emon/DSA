#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
        Iterators are used to point at the memory addresses of STL containers.
        They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.

        Operations of iterators :-

            1. begin() :- This function is used to return the beginning position of the container.

            2. end() :- This function is used to return the after end position of the container.
    
    */

   // example 1
        vector < int > v = {1,2,3,4,5,6};

        vector < int > :: iterator it;   // Declaring iterator to a vector

            for( it = v.begin();  it<v.end() ; it++ )
            {
               
                cout<<(*it)<<" ";

            }cout<<endl;

// example 2
            vector < pair < string , int > > vp;

            vp.push_back(make_pair("Hello " , 1));
                vp.push_back(make_pair("Hi" , 2));
                    vp.push_back(make_pair("Hola" , 3));
                        vp.push_back(make_pair("annyeong " , 4));

           auto ptr = vp.begin();

           for( ptr= vp.begin() ; ptr < vp.end(); ptr++)
           {
                cout<< (*ptr).first <<" "<< (ptr->second)<<endl;
           }
           
        // Shorthand 

        for(auto  &e : v)
        {
            cout<<e<<" ";

        }cout<<endl;

        for(auto & i : vp)
        {
            cout<<i.first<<" "<<i.second<<endl;
          
        }

        
}