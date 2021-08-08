// https://stackoverflow.com/a/45948985
// https://codeforces.com/contest/304/problem/B, https://codeforces.com/contest/304/submission/3715756
// https://stackoverflow.com/a/54268762
#include <iostream>
#include <iomanip>

typedef unsigned long ul;
typedef unsigned int ui;

// ----------------------------------------------------------------------
// Given the year, month and day, return the day number.
// Explanation: https://bit.ly/3xxprgf
// ----------------------------------------------------------------------
// ? http://c-faq.com/lib/calendar.br.html
ul CalcDayNumFromDate(ui y, ui m, ui d)
{
  m = (m + 9) % 12;
  y -= m / 10;
  ul dn = 365*y + y/4 - y/100 + y/400 + (m*306 + 5)/10 + (d - 1);

  return dn;
}

// ----------------------------------------------------------------------
// Given year, month, day, return the day of week (string).
// ----------------------------------------------------------------------
std::string CalcDayOfWeek(int y, ul m, ul d)
{
  std::string day[] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday"
  };

  ul dn = CalcDayNumFromDate(y, m, d);

  return day[dn % 7];
}

// ----------------------------------------------------------------------
// Program entry point.
// ----------------------------------------------------------------------
int main(int argc, char **argv)
{
  ui y = 2300, m = 12, d = 31; // 29th August, 2017.
  std::string dow = CalcDayOfWeek(y, m, d);

  std::cout << std::setfill('0') << std::setw(4) << y << "/";
  std::cout << std::setfill('0') << std::setw(2) << m << "/";
  std::cout << std::setfill('0') << std::setw(2) << d << ": ";
  std::cout << dow << std::endl;

  return 0;
}
