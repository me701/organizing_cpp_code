// Main program to demonstrate functions, namespaces, and organization.

#include <iostream>

#include "mysqrt.hh"
#include "mypow.hh"

int main()
{
  double x = 3.0;
  double s = mymath::sqrt(x);
  std::cout << s << " " << pow(x, 2) << std::endl;
  return 0;
}
