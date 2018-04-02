#include<iostream>
#include<cmath>
 double f(double x);
double derivada(double x, double h);
int main ()
{
  double x;
  double h;
  std::cout<<"Escribe un numero para evaluar y un h"<<std::endl;
  std::cin>>x>>h;
  std::cout<<derivada(x,h)<<std::endl;
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

    
  
