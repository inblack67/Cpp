#include <iostream>
using namespace std;

int main()
{
  char s1[10] = "Hello";
  char s2[] = "Hello";
  char s3[] = {'H', 'e', 'l', 'l', 'o'};
  char s4[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char s5[] = {65, 66, 67, 68, 0};    // '\0' = 0
  char s7[] = {65, 66, 67, 68, 0,69,70,71}; // wont resolve after 0
  // char *s6 = "Hello";   // depricated, use string class instead

  cout<<s7<<endl;
  return 0;
}