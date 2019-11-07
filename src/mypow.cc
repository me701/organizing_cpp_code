// namespace mymath
// {

double pow(const double x, const int n)
{
  double xn = 1;
  for (int i = 0; i < n; ++i)
  {
    xn *= x;
  }
  return xn;
}

// }
