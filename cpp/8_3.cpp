#include <iostream>
using namespace std;

void repit_char(char c, int count)
{
  for (int i = 0; i < count; i++)
  {
    cout << c;
  }
}

void pic(int n, int i = 0, bool upside = true)
{
  if (i < n / 2 && upside)
  {
    repit_char('*', i + 1);
    repit_char('.', n - (i * 2));
    repit_char('*', i + 1);
    cout << endl;
    return pic(n, i + 1);
  }
  if (i > -1)
  {
    repit_char('*', i + 1);
    repit_char('.', n - (i * 2));
    repit_char('*', i + 1);
    cout << endl;
    return pic(n, i - 1, false);
  }
}

int main()
{
  int n;
  cin >> n;
  pic(n);
  return 0;
}