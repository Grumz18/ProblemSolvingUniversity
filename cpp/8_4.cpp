#include <iostream>
#include <cmath>
using namespace std;

float F(float x)
{
  if (x < 0)
  {
    return 0;
  }
  else if (x == 1)
  {
    return 1;
  }
  else
  {
    return pow(x, 2) + 1;
  }
}

void F(float x, float &y)
{
  if (x < 0)
  {
    y = 0;
  }
  else if (x == 1)
  {
    y = 1;
  }
  else
  {
    y = pow(x, 2) + 1;
  }
}

int main()
{
  float a, b, h;
  cin >> a >> b >> h;
  float x = a, y;
  cout << "F(x) = " << F(x) << endl;
  cout << "x\tF(x)" << endl;
  while (x <= b)
  {
    F(x, y);
    cout << x << "\t" << y << endl;
    x += h;
  }
  return 0;
}