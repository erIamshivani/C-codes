
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    
    string s1, s2;
     int count=0;
    
    cout<<"Enter 2 strings:";
    cin>>s1;
    cin>>s2;
    
    int n1= s1.length();
    int n2= s2.length();
    
    if(n1!=n2)
    {
        count=1;
         goto label1;
    }
       
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());
    
   
    for(int i=0;i<n1;i++)
    {
        if(s1[i] != s2[i])
        {
            count=1;
           // 
            break;
        }
        
    }
    label1:    if(count==0)
    {
        cout<<"\nStrings are Anagrams";
    }
     else
    {
        cout<<"\nNot Anagrams";
    }
    return 0;
}
