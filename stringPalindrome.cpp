
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int
main ()
{

  string s1, s2;
  int count = 0;

  cout << "Enter a string:";
  cin >> s1;
  cout<<"length: "<<s1.length();
 
  int n1 = s1.length();
 

cout<<"s2: "<<s2<<endl;
int h= n1-1;
int l=0;
int c=0;
while(h>l)
{
    if(s1[l++] != s1[h--])
    {
        c=1;
        break;
    }
  
}

if(c==0)
{
    cout<<"Strings are palindrome";
}
else
    cout<<"Not palindrome";
  return 0;
}
