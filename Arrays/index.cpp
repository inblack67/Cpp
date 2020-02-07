#include <iostream>
#include <math.h>
using namespace std;

int linearSearch(int A[], int n, int x)
{
  for(int i=0 ; i<n; i++)
  {
    if(A[i] == x)
    {
      cout<<"Found at "<< i <<endl;
      return 1;
    }
  }

  return -1;
}


int main()
{
  int A[] = {1,2,3,4,5};
  int n = sizeof(A)/sizeof(A[0]); // calc size of an array
  cout<<linearSearch(A,n,6)<<endl;

  return 0;
}