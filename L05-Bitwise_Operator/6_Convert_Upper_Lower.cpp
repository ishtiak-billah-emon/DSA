#include<iostream>
using namespace std;

void lowerToupper(char c)
{
   // c = c & ~(1<<5);
    

    /*
     (~ (1<<5)) is not available in ascii.
     but we need a binary number :
     ...0001011111
     to do and operation with char C.
     1011111 is the ascii of (_) .

    */
   c = c & '_';

   cout<<c<<endl;
}
void upperToLower(char c)
{
   // c = c | (1<<5);
   
    /* (1<<5) is the ascii value of space ' ' 
        so if we do or operation with a char and space then we will get lower case
    */ 
   c = c | ' ';
   
   cout<<c<<endl;
}


int main()
{
    char c;
    cin>>c;
    lowerToupper(c);
 //   upperToLower(c);


}