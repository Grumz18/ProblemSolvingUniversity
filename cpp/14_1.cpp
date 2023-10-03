#include <iostream>

using namespace std;

class Data
{
public:
  Data(int year, int month, int day) : year_(year), month_(month), day_(day) {}

  void display() const
  {
    cout << year_ << "-" << month_ << "-" << day_ << std::endl;
  }

  Data next_day() const
  {
    int year = year_, month = month_, day = day_ + 1;
    if (day > days_in_month(year, month))
    {
      day = 1;
      ++month;
      if (month > 12)
      {
        month = 1;
        ++year;
      }
    }
    return Data(year, month, day);
  }

  Data prev_day() const
  {
    int year = year_, month = month_, day = day_ - 1;
    if (day < 1)
    {
      --month;
      if (month < 1)
      {
        month = 12;
        --year;
      }
      day = days_in_month(year, month);
    }
    return Data(year, month, day);
  }

  Data add_years(int years) const
  {
    int year = year_ + years, month = month_, day = day_;
    while (day > days_in_month(year, month))
    {
      day -= days_in_month(year, month);
      ++month;
      if (month > 12)
      {
        month = 1;
        ++year;
      }
    }
    return Data(year, month, day);
  }

  Data add_months(int months) const
  {
    int year = year_, month = month_ + months, day = day_;
    while (month > 12)
    {
      month -= 12;
      ++year;
    }
    while (day > days_in_month(year, month))
    {
      day -= days_in_month(year, month);
      ++month;
      if (month > 12)
      {
        month = 1;
        ++year;
      }
    }
    return Data(year, month, day);
  }

  Data add_days(int days) const
  {
    int year = year_, month = month_, day = day_ + days;
    while (day > days_in_month(year, month))
    {
      day -= days_in_month(year, month);
      ++month;
      if (month > 12)
      {
        month = 1;
        ++year;
      }
    }
    return Data(year, month, day);
  }

  static int days_in_month(int year, int month)
  {
    static const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_in_month = days[month - 1];
    if (month == 2 && is_leap_year(year))
    {
      ++days_in_month;
    }
    return days_in_month;
  }

  static bool is_leap_year(int year)
  {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  }

  static int days_between(const Data &d1, const Data &d2)
  {
    if (d1 > d2)
    {
      return -days_between(d2, d1);
    }
    int days = 0;
    Data d = d1;
    while (d < d2)
    {
      d = d.next_day();
      ++days;
    }
    return days;
  }

  bool operator<(const Data &other) const
  {
    if (year_ != other.year_)
    {
      return year_ < other.year_;
    }
    if (month_ != other.month_)
    {
      return month_ < other.month_;
    }
    return day_ < other.day_;
  }

  bool operator>(const Data &other) const { return other < *this; }

  bool operator<=(const Data &other) const { return !(other < *this); }

  bool operator>=(const Data &other) const { return !(*this < other); }

  bool operator==(const Data &other) const
  {
    return year_ == other.year_ && month_ == other.month_ && day_ == other.day_;
  }

  bool operator!=(const Data &other) const { return !(*this == other); }

private:
  int year_;
  int month_;
  int day_;
};

int main()
{
  cout << "Введите дату начала остсчета "
       << "YYYY-MM-DD" << endl;
  int y, m, d;
  cin >> y >> m >> d;
  Data today(y, m, d);
  today.display();
  today.next_day().display();
  today.prev_day().display();
  today.add_years(1).display();
  today.add_months(1).display();
  today.add_days(5).display();

  cout << "Введите дату конца остсчета "
       << "YYYY-MM-DD" << endl;
  int y_other, m_other, d_other;
  cin >> y_other >> m_other >> d_other;
  Data other_day(y_other, m_other, d_other);
  other_day.display();
  cout << Data::days_between(today, other_day) << endl;

  return 0;
}