#include <iostream>
using std::cout;
using std::endl;

#include "library.h"

myclass::myclass(int i)
  : stored(i) {};

void myclass::print(int i) {
  cout << "foobar" << i+stored << endl;
};


