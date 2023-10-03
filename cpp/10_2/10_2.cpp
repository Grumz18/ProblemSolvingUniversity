#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Product
{
  string type;
  double cost;
  string model;
  int quantity;
};

int main()
{
  ifstream input("input.txt");
  ofstream output("output.txt");
  vector<Product> products;
  double interest;
  cout << "На какой процент увеличить стоимость товара?" << endl;
  cout << "--> ";
  cin >> interest;
  double increase = interest / 100;
  double total_cost = 0;

  if (input.is_open())
  {
    string line;
    while (getline(input, line))
    {
      Product p;
      stringstream str1(line);
      str1 >> p.type >> p.cost >> p.model >> p.quantity;
      products.push_back(p);
    }
    input.close();
  }

  for (auto &p : products)
  {
    p.cost *= (1 + increase);
    total_cost = (p.cost * p.quantity);

    output << p.type << " " << p.cost << " " << p.model << " " << p.quantity << " " << total_cost << endl;
  }

  output.close();

  return 0;
}