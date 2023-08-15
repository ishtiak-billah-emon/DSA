#include<bits/stdc++.h>
using namespace std;
/*  MAP:

 1) Common usecase : count frequency ofvarious object
 2) data type 
             1) key
             2) value

 3) keys are unique and sorted
 4) Use tree ( red black tree) for inbuilt implementation 
 5) Declare :

    map < key data type ,  value data type > m;

    map < string , int > m;

    m.insert({"hi",4});    // inserting key and values
    m.clear() = clear map
    m[key]  = value of element with key     O(logN)
    find() = find iterator serch for key if not found returns end value.
*/    

/*  
        Unordered Map:
        
        1) Print answer in random order
        2) Use Hash for inbuilt implementation
        3) O(1) 
        4)  unordered_map<pair<int,int>,string>m // error
            pair has no inbuilt hash function. Thats why unordered_map can't
            work with pair. 
        5)


*/

/*
        Multimap

        1) Same implementaion as map
        2) Multimap is similar to a map with the addition that multiple elements can have the same keys.
           Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. 
        3) multimap keeps all the keys in sorted order

             pair<int,int> insert( keyvalue , multimapvalue ) – Adds a new element to the multimap

       

	multimap<int, int> gquiz1; // empty multimap container

	// insert elements in random order
	gquiz1.insert(pair<int, int>(1, 40));
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(6, 10));

	// printing multimap gquiz1
	multimap<int, int>::iterator itr;
	cout << "\nThe multimap gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// adding elements randomly,
	// to check the sorted keys property
	gquiz1.insert(pair<int, int>(4, 50));
	gquiz1.insert(pair<int, int>(5, 10));

	// printing multimap gquiz1 again

	cout << "\nThe multimap gquiz1 after adding extra "
			"elements is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	multimap<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the multimap gquiz2
	cout << "\nThe multimap gquiz2 after assign from "
			"gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// remove all elements up to
	// key with value 3 in gquiz2
	cout << "\ngquiz2 after removal of elements less than "
			"key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	// lower bound and upper bound for multimap gquiz1 key =
	// 5
	cout << "gquiz1.lower_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
		<< endl;
	cout << "gquiz1.upper_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
		<< endl;




*/
int main()
{
    map < int , int > m;

    cout<<m.size()<<endl; // 0

    cout<<m[15]<<endl; // not found m[15]. instantly create the element and the value  will be 0;

    cout<<m.size()<<endl; // 1  it created m[15]=0;



    // checking frequency
        m[5]++;
          m[5]++;
            m[5]++;
              m[5]++;
               m[4]++;

              cout<<m[5]<< " "<<m[4]<<endl;

            // Time complexity depends on keys

            //   m.insert( {6,7}); // O(log(n));

            //   m["ggg"]="hi";  string size * log(n);
              
            
             // printing // traversing 
    
    
            for( auto &e : m)
            {
                cout<<e.first<<" "<<e.second<<endl;
            }
            

            map < int , int > ::iterator it;

            for( it = m.begin();  it != m.end(); it++)  //  it < m.end() will not work
            {
                cout<<(*it).first<<" "<<(*it).second<<endl;
            }

            //Tips :
            //       (*it).first == it -> first
            //       (*it).second == it -> second
}