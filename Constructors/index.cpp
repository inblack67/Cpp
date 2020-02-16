#include<iostream>
using namespace std;

class Rectangle
{
  int length, breadth;
  int *p;

  public:

  Rectangle()     // default
  {
    length = 2;
    breadth = 4;
    p = new int[5];
  }

  Rectangle(int length, int breadth)      // parameterized
  {
    this->length = length;
    this->breadth = breadth;
  }

  Rectangle(Rectangle &rect)      // copy
  {
    this->length = rect.length;
    this->breadth = rect.breadth;
  }

  // Rectangle(Rectangle &rect)      // deep copy
  // {
  //   this->length = rect.length;
  //   this->breadth = rect.breadth;
  //   p = new int[5];
  // }

  int getLength()
  {
    return this->length;
  }

  int getBreadth()
  {
    return this->breadth;
  }

  int area()
  {
    return getLength()*getBreadth();
  }

  int perimeter();
};

int Rectangle::perimeter()
{
  return (2*(getLength()+getBreadth()));
}

int main()
{
  Rectangle rect(1,2);

  Rectangle rect2(rect);

  cout<<"Area = "<<rect.area()<<endl;
  cout<<"Perimeter = "<<rect.area()<<endl;

  cout<<"Area = "<<rect2.area()<<endl;
  cout<<"Perimeter = "<<rect2.area()<<endl;

  return 0;
}