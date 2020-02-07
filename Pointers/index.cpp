#include <iostream>
using namespace std;

void display()
{
  cout<<"hello hell"<<endl;
}

int max(int x, int y)
{
  return x>y?x:y;
}

int main()
{
  void (*fp) ();    // function pointer
  int (*fp2) (int,int);
  fp = display;  
  fp2 = max;

  (*fp)();
  int result = (*fp2)(3,4);
  cout<<"Max is = "<<result<<endl;


  return 0;
}