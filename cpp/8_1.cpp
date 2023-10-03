#include <cmath>
#include <iostream>
#include <string>

using namespace std;

unsigned long isPrimalHandler(unsigned long a)
{
  int childA = a - 1;
  int count = 1;
  int ansCount = 0;
  int aCounta = 0;

  while (childA >= count)
  {
    for (int i = 1; i <= childA; i++)
    {
      if (childA % i == 0)
      {
        ansCount++;
      }
    }
    if (ansCount == 2)
    {
      aCounta = childA;
      break;
    }
    childA--;
    ansCount = 0;
    count++;
  }

  cout << "Предшествующее по отношению к " << a << " это " << aCounta << endl;

  bool answer = true;
  int countPrimeNumber = 0;

  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      countPrimeNumber++;
    }
  }

  if (countPrimeNumber > 0)
  {
    answer = false;
  }
  cout << "Является ли 'а' простым числом : ";
  return answer;
}

unsigned long isAtoBPrimalHandler(unsigned long a, unsigned long b)
{
  int countPrimeNumber = 0;
  int answerCount = 0;
  int sumCompositeNumber = 0;
  int childA = a;

  cout << "Простые числа на отрезке [" << a << " , " << b << "]" << endl;

  while (childA <= b)
  {
    for (int i = 2; i < childA; i++)
    {
      if (childA % i == 0)
      {
        countPrimeNumber++;
      }
    }
    if (countPrimeNumber == 0)
    {
      answerCount++;
      cout << "(" << childA << ")" << endl;
    }
    else
    {
      sumCompositeNumber += childA;
    }
    childA += 1;
    countPrimeNumber = 0;
  }
  cout << "Количество простых чисел на отрезке [" << a << " , " << b << "] = "
       << answerCount << endl;
  cout << "Сумма составных чисел на отрезке [" << a << " , " << b << "] = "
       << sumCompositeNumber << endl;
  return 0;
}

int main()
{
  unsigned long a, b;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << isPrimalHandler(a) << endl;
  cout << isAtoBPrimalHandler(a, b) << endl;
}