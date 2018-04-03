#include<iostream>
#include<cmath>
 double f(double x);
double derivada(double x, double h);
double richardson(double x, double h);
int main ()
{
  double x;
  double h;
  std::cout<<"Escribe un numero para evaluar y un h"<<std::endl;
  std::cin>>x>>h;
  std::cout<<richardson(x,h)<<std::endl;
  return 0;
}
double derivada(double x, double h)
{
  double deriv;
  deriv=(f(x+(h/2))-f(x-(h/2)))/h;
  return deriv;
}
double richardson(double x, double h)
{
  double h2=h/2;
  double richardson;
  richardson=(4/3)*derivada(x,h2)-(1/3)*derivada(x,h);
  return richardson;
}
double f(double x)
{
  return std::sin(x);
}

    
  
