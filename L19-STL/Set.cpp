#include<bits/stdc++.h>
using namespace std;
/*  
 # collection of elements

 set < key > name;

 name.insert(x);

 name.find() - to access values retuns iterator

 # sorted oreder

Time Complexity: logN

*/
int main()
{

    set < int > s;

    s.insert(55);
    s.insert(11);
    s.insert(12);
    s.insert(5);
    s.insert(1);
    s.insert(12);

// FIND()
//------------------------------

   auto it =  s.find(1);// O( logN ) 
   
   // set < int > :: iterator
   // Not exist .end() iterator will come

   if(  it != s.end() )
   {
        cout<<(*it)<<endl;
   }
    else{
        cout<<"Not Found"<<"\n";
    }


// ERASE () -- can take both iterator and value
//----------------------------------------------   

  s.erase(it); // 1 will be removed it = 1

  s.erase(11); // erase 11 

// print

for(auto e: s)
{
    cout<<e<<" ";
}cout<<endl;


}
