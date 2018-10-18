#ifndef DATE_H
#define DATE_H

class Date
{
private:
  int day, month, year;
  
public:
  Date();
  Date(int aMonth, int aDay, int aYear);
  void setMonth(int aMonth);
  void setDay(int aDay);
  void setYear(int aYear);
  int getMonth(int aMonth) const;
  int getDay(int aDay) const;
  int getYear(int aYear) const;
  void printDate() const;
  bool sameMonth(const Date & aDate) const;

  
};

#endif
