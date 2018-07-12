/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Check if string has only letters

#include <iostream>
#include<string>
using namespace std;

int
main ()
{
  int count = 0;
  string s = "HiThis10shiva112ni!!?.";
  for (int i = 0; i < s.length (); i++)
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
	  continue;
	}
      else
	{
	  count++;
	}
    }

  cout << "String has " << count << " no.s";


  return 0;
}
