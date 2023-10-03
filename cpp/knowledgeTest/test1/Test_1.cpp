#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
  string surname;
  string firstname;
  string patronymic;
  int day;
  int month;
  int year;
};

bool is_summer(int month) { return month >= 6 && month <= 8; }

int main()
{
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  int n;
  input_file >> n;

  vector<Student> students(n);
  for (int i = 0; i < n; ++i)
  {
    input_file >> students[i].surname >> students[i].firstname >>
        students[i].patronymic >> students[i].day >> students[i].month >>
        students[i].year;
  }

  vector<int> summer_students;
  for (int i = 0; i < n; ++i)
  {
    if (is_summer(students[i].month))
    {
      summer_students.push_back(i);
    }
  }

  output_file << summer_students.size() << endl;
  for (int i : summer_students)
  {
    output_file << i + 1 << " ";
  }
  output_file << endl;

  return 0;
}
