#include <iostream>
using std::cout;
using std::endl;

#include "whatever.h"

whatever::whatever(int i,int j,int k)
  : stored(i) {};

void whatever::print(int i) {
  cout << "foobarge" << i+stored << endl;
};


