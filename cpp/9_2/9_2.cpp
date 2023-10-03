#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ifstream file1("input1.txt"), file2("input2.txt");
  if (!file1 || !file2)
  {
    cerr << "Error: could not open files\n";
    return 1;
  }
  int c = 0;
  int line = 1;
  string line1, line2;
  while (getline(file1, line1) && getline(file2, line2))
  {
    if (line1 != line2)
    {
      for (int i = 0; i < line1.length(); i++)
      {
        if (line1[i] != line2[i])
        {
          cout << "Difference at line " << line << ", char " << i + 1 << '\n';
          c++;
        }
      }
      return 0;
    }
    ++line;
  }
  if (c == 0)
  {
    cout << "the characters match";
  }
  return 0;
}