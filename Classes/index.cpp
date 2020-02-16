#include<iostream>
using namespace std;

class Rectangle
{
  int length, breadth;

  public:

  Rectangle()
  {
    length = 2;
    breadth = 4;
  }

  void setLength(int length)
  {
    this->length = length;
  }

  void setBreadth(int breadth)
  {
    this->breadth = breadth;
  }

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
  Rectangle rect;
  Rectangle *p = new Rectangle();

  p->setLength(10);
  p->setBreadth(10);

  cout<<p->area()<<endl;

  cout<<"Area = "<<rect.area()<<endl;
  cout<<"Perimeter = "<<rect.perimeter()<<endl;

  return 0;
}