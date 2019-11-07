#include <iostream>
using std::cout;
using std::endl;

#include "whatever.h"

whatever::whatever(int i)
  : stored(i) {};

void whatever::print(int i) {
  cout << "foobar" << i+stored << endl;
};


