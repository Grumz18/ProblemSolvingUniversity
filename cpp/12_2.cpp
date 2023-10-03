#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v;
  int vector_length;
  int count = 0;
  int num;

  cout << "Введите количество элементов вектора: ";
  cin >> vector_length;

  while (count < vector_length)
  {
    cout << "Введите число номер [" << count << "] = ";
    cin >> num;
    v.push_back(num);
    count++;
  }

  int n;
  cout << "Введите новый элемент: ";
  cin >> n;

  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (i % n == 0)
    {
      v.insert(v.begin() + i + 1, n);
    }
  }
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}