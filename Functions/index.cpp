#include <iostream> 
using namespace std; 

int globalVar = 69;

template <class t>

t minFun(t x, t y)
{
  return x<y ? x : y;
}


int add(int x, int y=0, int z=0)      // right to left only
{
  return x+y+z;
}

void swapByPassingAdress(int *x, int *y)     // pass by address
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void swapByPassingReference(int &x, int &y)     // pass by reference
{
  int temp = x;
  x = y;
  y = temp;
}

int * returnByAddress(int size)
{
  int *p = new int[size];

  for(int i=0; i<size; i++)
  {
    p[i] = i+1;
  }

  return p;
}

void global()
{
  int globalVar = -1;
  cout<<"Global -> "<<::globalVar<<endl;    // :: 
}

int main() 
{ 
  // int a = 7, b = 4;
  // swapByPassingReference(a,b);
  // cout<<"a = "<<a<<" b = "<<b<<endl;

  global();

  int * result = returnByAddress(5);
  for(int i=0; i<5; i++)
  {
    cout<<result[i]<<endl;
  }

  // cout<<minFun(3.5,4.6)<<endl;
  // cout<<add(5,6,1)<<endl;

  return 0; 
}
