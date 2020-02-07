#include <iostream>
using namespace std;

class Operation
{
  public:

  void decimalToBinary(int x)
  {
    int n = x;
    int binary[32];
    int i=0;
    while(n)
    {
      binary[i] = n%2;
      n/=2;
      i++;
    }

    for(int j = i-1; j>=0; j--)
    {
      cout<<binary[j];
      
    }
    cout<<endl;
  }

};


int main()
{
  Operation opr;
  opr.decimalToBinary(32);
  return 0;
}