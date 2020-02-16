#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s1[100], s2[100];
  cout<<"Enter the string"<<endl;
  cin.getline(s1,30);
  cout<<"Enter another string"<<endl;
  cin.getline(s2,30);

  // strlen()
  // cout<<"Length of first entered string = "<<strlen(s1)<<endl;
  // cout<<"Length of second entered string = "<<strlen(s2)<<endl;

  // strcpy() / n
  char s3[100];
  // strcpy(s3,s1);
  // strncpy(s3,s1,3);
  // cout<<"s3 = "<<s3<<endl;

  // strcat / n
  char s4[100];
  strcat(s2,s1);
  strcat(s3,s2);
  strcat(s4,s3);
  cout<<"Final Result = "<<s4<<endl;

  return 0;
}