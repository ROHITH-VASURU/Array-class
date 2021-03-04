#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
using namespace std;

class Array
{
  friend istream &operator>> (istream &, Array &);
  friend ostream &operator<< (ostream &, const Array &);

public:
  Array(int = 10);
  Array(const Array &);
  ~Array();

  int getsize();

  const Array &operator= (const Array &);

  bool operator== (const Array &) const;
  bool operator!= (const Array &right) const
  {
     return !(*this == right);
  }

  int &operator[] (int);
  int operator[] (int) const;

private:
  int size;
  int *ptr;
};

#endif
