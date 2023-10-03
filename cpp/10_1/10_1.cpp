#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

struct Point
{
  double x;
  double y;
};

int main()
{
  double r;
  cout << "Ввести радиус шара: ";
  cin >> r;

  vector<Point> points;
  ifstream inFile("input.txt");
  if (!inFile)
  {
    cout << "Не удалось открыть файл";
    return 1;
  }
  while (!inFile.eof())
  {
    Point p;
    inFile >> p.x >> p.y;
    points.push_back(p);
  }
  inFile.close();

  Point bestPoint = points[0];
  int minCount = points.size();
  for (int i = 0; i < points.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < points.size(); j++)
    {
      if (i != j)
      {
        double dist = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2));
        if (dist <= r)
        {
          count++;
        }
      }
    }
    if (count < minCount)
    {
      minCount = count;
      bestPoint = points[i];
    }
  }

  ofstream outFile("output.txt");
  outFile << bestPoint.x << " " << bestPoint.y << endl;
  outFile.close();

  return 0;
}
