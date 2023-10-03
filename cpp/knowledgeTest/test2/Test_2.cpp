#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
  ifstream input("input.txt");
  ofstream output("output.txt");
  string s;
  vector<string> words;
  while (input >> s)
  {
    words.push_back(s);
  }
  int count = 0;
  for (int i = 0; i < words.size(); i++)
  {
    if (count_if(words.begin(), words.end(), [&](string &w)
                 { return w == words[i]; }) == 1)
    {
      count++;
    }
  }
  output << count << endl;
  return 0;
}