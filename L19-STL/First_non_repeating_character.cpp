#include<bits/stdc++.h>
using namespace std;

char firstNonRepeatingCharacter(string str) {

        
   unordered_map < char , int > m;

   for(int i = 0 ; i<str.size();i++)
   {
       m[str[i]]++;
   }


    for(int i = 0; i<str.size();i++)
    {
        if(m[str[i]] == 1)
        {
            return str[i];
        }
    }

    return str[0];

}

int main()
{
    int t;cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        char x = firstNonRepeatingCharacter(str);
        cout<<x<<endl;

    }
    
    



}