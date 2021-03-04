#include<iostream>
#include"Array.h"
using namespace std;

int main()
{
  Array integer1(7);
  Array integer2;

  cout << "Size of array integer1 is " << integer1.getsize()
       << "\nArray after initilization is \n" << integer2 << endl;

  cout << "Size of array integer1 is " << integer2.getsize()
       << "\nArray after initilization is \n" << integer2 << endl;

  cout << "Enter 17 integers\n";
  cin >> integer1 >> integer2;

  cout << "After the input the array contains\n"
       << "integer1\n" << integer1
       << "integer2\n" << integer2 << endl;

  cout << "\nEvaluating: integers1 != integers2" << endl;
  if ( integer1 != integer2 )
     cout << "integer1 and integer2 are not equal" << endl;

  Array integer3(integer1);

  cout << "Size of array integer3 is " << integer3.getsize()
       << "\nArray after initilization is \n" << integer3 << endl;

  cout << "Assigning integer2 to integer1\n";
  integer1 = integer2;

  cout << "integer1:\n" << integer1
       << "integer2:\n" << integer2 << endl;

  if ( integer1 == integer2 )
     cout << "integer1 and integer2 are equal" << endl;

  cout << "Intger1[5] is " << integer1[5] << endl;

  cout << "\n\nAssigning 1000 to integer1[5]" << endl;
  integer1[ 5 ] = 1000;
  cout << "integer1:\n" << integer1 ;

  return 0;
}
