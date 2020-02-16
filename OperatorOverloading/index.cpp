#include <iostream>
using namespace std;

class Complex
{
  int real, img;

  public:

  Complex(int real=0, int img=0)
  {
    this->real = real;
    this->img = img;
  }

  Complex add(Complex x)
  {
    Complex temp;
    temp.real = real + x.real;
    temp.img = img + x.img;
    return temp;
  }
  
  void display()
  {
    cout<<"real = "<<real<<" img = "<<img<<endl;
  }


};

int main()
{
  Complex c1(3,7);
  Complex c2(4,8);
  Complex c3;

  c3 = c1.add(c2);
  c3.display();

  return 0;
}