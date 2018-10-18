#include <iostream>
#include "date.h"

using namespace std;

Date::Date()
{
  //initialize to 0
  month=0;
  day=0;
  year=0;
}

Date::Date(int aMonth, int aDay, int aYear)
{
  month=aMonth;
  day=aDay;
  year=aYear;
}

void Date::setMonth(int aMonth)
{
  month=aMonth;
}

void Date::setDay(int aDay)
{
  day=aDay;
}

void Date::setYear(int aYear)
{
  year=aYear;
}

int Date::getMonth(int aMonth) const
{
  return month;
}

int Date::getDay(int aDay) const
{
  return day;
}

int Date::getYear(int aYear) const
{
  return day;
}

void Date::printDate() const
{
  cout << "The date is (M-D-Y): ";
  cout << month << "-" << day << "-" << year << endl;
}

bool Date::sameMonth(const Date & aDate) const
{
  if (month == aDate.month)
    {
      return true;
    }
  return false;
  
}
