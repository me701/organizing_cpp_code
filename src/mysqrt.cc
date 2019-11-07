#include "myabs.hh"

namespace mymath
{
  
/**
  Use Newton's method to find the square root s of x.

  Let 
    s**2 - x = f(s) = 0
  Then Newton's method gives the update
    s = s - f(s)/f'(s) = s - (s**2 - x)/(2*s)
  Repeat until converged.
*/
double sqrt(const double x)
{
  double s = x;
  while (abs(s*s - x) > 1e-14)
  {
    s -= (s*s-x)/(2*s);
  }
  return s;
}

}

