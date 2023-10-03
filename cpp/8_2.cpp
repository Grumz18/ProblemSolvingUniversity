#include <iostream>
#include <string>

using namespace std;

int F(string s, int a = 0, int count = 0)
{
  if (a < s.length())
  {
    int elem = int(s[a]);
    if ((elem > 47) && (elem < 59))
    {
      int b = int(s[a]) - 48;
      return F(s, a + 1, count + b);
    }
    else
    {
      return F(s, a + 1, count);
    }
  }
  else
  {
    return count;
  }
}

int main()
{
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  if (F(str1) == F(str2))
  {
    cout << "В строках суммы цифр равны";
  }
  else if (F(str1) > F(str2))
  {
    cout << "В первой строке сумма цифр больше";
  }
  else
  {
    cout << "Во второй строке сумма цифр больше";
  }
}