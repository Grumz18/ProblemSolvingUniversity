#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int target_length;
  cout << "Enter length: ";
  cin >> target_length;
  string line;
  ifstream input_file("input.txt");

  if (input_file.is_open())
  {
    while (getline(input_file, line))
    {
      if (line.length() == target_length)
      {
        cout << line << endl;
      }
    }
    input_file.close();
  }
  else
  {
    cout << "error" << endl;
  }
  return 0;
}