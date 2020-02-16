#include <iostream>
using namespace std;

int main()
{
  char s[10];
  char s2[20];
  cout<<"Enter your name"<<endl;

  // cin>>s; // after space, it will treat as new string and terminate

  cin.get(s,10);
  cin.ignore();
  cin.get(s2,20);
  // cin.getline(s,50);
  cout<<s<<endl;
  cout<<s2<<endl;
  return 0;
}