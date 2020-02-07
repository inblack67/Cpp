#include <iostream>
#include <math.h>
using namespace std;

int isArmstrongNumber(int n, int d)   // d = number of digits
{
  int remainder;
  int m = n;
  int armstrong = 0;

  while (m)
  {
    remainder = m % 10;
    armstrong += pow(remainder,d);
    m /= 10;
  }

  if(armstrong == n)
  {
    return 1;
  }

  return -1;
}

int isPallindrome(int n)
{
  int reverse=0, remainder;
  int m = n;
  while (m)
  {
     remainder = m % 10;
     reverse = (reverse * 10) + remainder;
    m/=10;
  }

  if(reverse == n)
  {
    return 1;
  }
  return -1;
}


int main()
{
  cout<<"isPallindrome? "<<isPallindrome(111)<<endl;
  cout<<"isArmstrong? "<<isArmstrongNumber(1634,4)<<endl;
  return 0;
}