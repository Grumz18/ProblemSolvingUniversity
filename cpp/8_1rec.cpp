#include <iostream>

using namespace std;

bool isComposite(int n, int i = 2)
{
  if (n <= 2)
    return (n == 2);
  if (n % i == 0)
    return false;
  if (i * i > n)
    return true;
  return isComposite(n, i + 1);
}

void displayPrimes(int a, int b)
{
  for (int i = a; i <= b; i++)
  {
    if (isComposite(i))
    {
      cout << i << " ";
    }
  }
}

int countPrimes(int a, int b)
{
  int count = 0;
  for (int i = a; i <= b; i++)
  {
    if (isComposite(i))
    {
      count++;
    }
  }
  return count;
}

int sumPrimes(int a, int b)
{
  int sum = 0;
  for (int i = a; i <= b; i++)
  {
    if (isComposite(i))
    {
      sum += i;
    }
  }
  return sum;
}

void displayPreviousPrime(int a)
{
  for (int i = a - 1; i >= 2; i--)
  {
    if (isComposite(i))
    {
      cout << i << endl;
      return;
    }
  }
  cout << "No previous prime";
}

int main()
{
  int a, b;
  cout << "a" << endl
       << "b" << endl;
  cin >> a >> b;
  isComposite(a);
  cout << "Все простые числа на указанном промежутке :";
  displayPrimes(a, b);
  cout << endl;
  int c = countPrimes(a, b);
  cout << "Количество :" << c << endl;
  int s = sumPrimes(a, b);
  cout << "Сумма :" << s << endl;
  cout << "Предыдущее по отношению к а: ";
  displayPreviousPrime(a);
  return 0;
}