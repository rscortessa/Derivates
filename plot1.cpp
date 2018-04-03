#include<iostream>
#include<cmath>
 double f(double x);
double derivada(double x, double h);
int main ()
{
  double x;
  double h;
  for(double ii=0;ii<20;ii+=0.1)
    {
      x=ii;
      h=0.0001;	
      
      std::cout<<derivada(x,h)<<std::endl;
    }
  return 0;
}
double derivada(double x, double h)
{
  double deriv;
  deriv=(f(x+(h/2))-f(x-(h/2)))/h;
  return deriv;
}

double f(double x)
{
  return std::sin(x);
}
