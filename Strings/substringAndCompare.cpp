#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s[100] = "Programming";
  char sub[50] = "p";
  // cout<<strstr(s,sub)<<endl; cout cannot display null

  cout<<strchr(s,'g')<<endl;
  cout<<strrchr(s,'g')<<endl;     // from RHS

  cout<<strcmp(s,sub)<<endl;

  
  return 0;
}