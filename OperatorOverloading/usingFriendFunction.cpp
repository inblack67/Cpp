#include <iostream>
using namespace std;

class Complex
{
  public:

  int real, img;

  

  Complex(int real=0, int img=0)
  {
    this->real = real;
    this->img = img;
  }

  ostream & operator<<(ostream &o, Complex &c1);

  friend Complex operator+(Complex x, Complex y);
  
  void display()
  {
    cout<<"real = "<<real<<" img = "<<img<<endl;
  }

};

Complex operator+(Complex x, Complex y)
{
  Complex t;
  t.real = x.real + y.real;
  t.img = x.img + y.img;
  return t;
}

ostream & operator<<(ostream &o, Complex &c1)
{
  o<<c1.real<<" "<<c1.img<<endl;
  return o;
}


int main()
{
  Complex c1(3,7);
  Complex c2(4,8);
  Complex c3;

  c3 = c1+c2;

  cout<<c1;

  return 0;
}