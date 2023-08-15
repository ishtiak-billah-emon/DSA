    #include<bits/stdc++.h>
    using namespace std;


    void  printVec( vector< pair < int , int > > v)
    {
            for(int i = 0 ;  i< v.size(); i++)
            {
                cout<<v[i].first<< " "<< v[i].second<<endl;
            
            }
            // As this is a pair of vector so have to print first and second.
    } 
 

    pair < int , int >f()
    {
        return {10,11};
    }


    int main()
    {
        // pair is a way of creating composite data type with 2 different data type. (To maintain a relationship)

        // Useful to return multiple value from function

        
        /*
        // Initailize 

        1)   make_pair( 5, "hello world");

        2)   pair < string ,int  > p = {" hello " , 6}

        Access:

                .first
                .second
                cout<<p1.first<<" "<<p1.second<<endl;

        */
    /* Examples:
                pair < int , string > p;      p  = make_pair( 100 , " GG");   // p = { 100 , " GG"};

                pair < string ,int  > p1 = {" hello " , 6};

                pair < int , pair < int , string > > p2 ; // A pair of int and ( a pair of int and string)  // Nested

                pair < vector < int > , string > p3 ; // A pair of ( vector of int ) and a string          //  Nested


            cout<<p.first<<" "<<p.second<<endl;

            cout<<p1.first<<" "<<p1.second<<endl;

            */

                // Nesting 

                vector < pair < int , int > > v ={ {1,2} , {3,4},  { 5, 6}};  // Making a vector of pair 
                printVec (v);


                    



                pair <int ,int > c = f();
                cout<<c.first<<" "<<c.second<<endl;






    }