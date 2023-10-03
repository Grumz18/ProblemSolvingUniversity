#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

template <typename T>
void inputArray(T arr[][MAX_SIZE], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
  }
}

template <typename T>
void outputArray(T arr[][MAX_SIZE], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

template <typename T>
T sumSecondaryDiagonal(T arr[][MAX_SIZE], int size)
{
  T sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i][size - i - 1];
  }
  return sum;
}

int main()
{
  int arr[MAX_SIZE][MAX_SIZE];
  int rows, cols;
  cout << "Введите количество строк :";
  cin >> rows;
  cout << "Введите количество столбцов :";
  cin >> cols;
  inputArray(arr, rows, cols);
  outputArray(arr, rows, cols);
  cout << "Сумма элементов побочной диагонали: "
       << sumSecondaryDiagonal(arr, rows) << endl;
  return 0;
}