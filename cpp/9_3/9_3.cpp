#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Введите количество элементов: ";
  cin >> n;

  double arr[n];
  ifstream inFile("input.txt");
  if (!inFile)
  {
    cout << "Ошибка чтения файла";
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    inFile >> arr[i];
  }
  inFile.close();

  cout << "Элементы с четными порядковыми номерами меньше " << n << ":" << endl;
  for (int i = 0; i < n; i += 2)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}