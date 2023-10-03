#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> sequence;
  int amount;
  int count = 0;
  cout << "Введите количество элементов вектора: ";
  cin >> amount;
  int num;
  while (count < amount)
  {
    cout << "Введите число номер [" << count + 1 << "] = ";
    cin >> num;
    sequence.push_back(num);
    count++;
  }

  int max_element = sequence[0];
  int count_max = 1;

  for (int i = 1; i < sequence.size(); i++)
  {
    if (sequence[i] > max_element)
    {
      max_element = sequence[i];
      count_max = 1;
    }
    else if (sequence[i] == max_element)
    {
      count_max++;
    }
  }

  cout << "Количество элементов с наивысшим значением: " << count_max << endl;

  return 0;
}