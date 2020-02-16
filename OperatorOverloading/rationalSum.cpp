#include <iostream>
using namespace std;

class Rational 
{
  int real, img;
  public:

  Rational(int r = 0, int i = 0)
  {
    real = r;
    img = i;
  }

  friend Rational operator+(Rational x, Rational y);

  void display()
  {
    cout<<"real = "<<real<<" img = "<<img<<endl;
  }

};

Rational operator+(Rational x, Rational y)
{
  Rational temp;
  temp.real = x.real + y.real;
  temp.img = x.img + y.img;
  return temp;
}



int main()
{
  Rational r1(10,20);
  Rational r2(30,40);
  Rational r3;
  r3 = r1+r2;

  r3.display();


  return 0;
}