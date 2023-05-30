#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    
}
int main()
{
    // what is vector?

    /* It is a dynamic sized array. Number of elements can be increased or decreased.
       Contiguous memory allocation. So that accessed and traversed by using iterators.
       Simply understand :
                Vector is dynamic sized array 

       # Creating a vector

         vector < data type > name ;

         vector < int > vec;   // an empty integer vector

         vector < int > vec(10); // size 10 declared with all 0;

         vector < char > vec(10,'h') // vector with all 'h'  

    */

            vector < int > v;
           
            vector < int > vec(5); // 5 size vector vec with 0 0 0 0 0

            vector < int > va[50]; // this is an array of 50 vector 


   // functions of vector:
   /*
        push_back(x)  = insert value x to the end of the vector . O(1);
        pop_back()    =  erase last element.   O(1);
        clear()       =  erase all the elements   O(n);
        size()        =  return current size of vector. O(1)
        []operator    = can be used to access elements like an array
            ex: cout<< v[0] // Not recommended

        front()       = to get the first element
        back()        = to get the last element

   */
            v.push_back(5);
               v.push_back(6);
                    v.push_back(7);

                cout<<v[0]<<" "<< v[1] <<" "<< v[2]<<endl;  // Not recommended

                v.pop_back(); 
                  v.push_back(10);

                cout<<v[0]<<" "<< v[1] <<" "<< v[2]<<endl; 

                cout<<"size : "<<v.size()<<endl;

             //   v.clear(); // erasing whole vector

                cout<< "capacity before : "<<v.capacity()<<endl;

                // Now capacity is 4.

                 v.push_back( 60);
                 v.push_back(77);
                 
                 cout<< "capacity after adding some element : "<<v.capacity()<<endl;

                //  so the capacity has increased by double . 2/4/8/16......
                


    // We can copy a vector to another vector 
    /*
        vector < int > v2 = vec; //  O(n) time complexity
        v2 is a copy of vector vec;
        V2 and Vec can modified separately it wont affect any of them
    */

    // pass by reference in function 
    // vector < int > &v 


    // Nesting

        vector < vector < int > > vv;  // This vector vv is storing vectors of integer

        int N; cin>>N;  // N is the number of vectors that I want to store in vector vv.

        for(int i =  0; i<N;i++)
        {
            int n ; cin>>n;  // size of vector

            vector <int>temp;  // We can not take input as a vector . Thats why made a temp vector and took i/p  

            for(int j  = 0 ; j< n; j++)
            {
                int x ; cin>>x;
                temp.push_back(x);
            }

            vv.push_back(temp); // stroing the temp vector in vector vv
        }

        

        for (int i = 0 ; i< vv.size();++i)
        {
            printVec(vv[i]);
        }
        

                
}