/****************************************************************
 ****
 **** illustration of how to set a vector of random values
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;
#include <random>
using std::rand;

int main() {

  float r = 1.*rand()/RAND_MAX;
  vector<float> values(5,r);
  cout << values[0] << " " << values[1] << endl;

  vector<float> values2(5,1.*rand()/RAND_MAX);
  cout << values2[0] << " " << values2[1] << endl;

  vector<float> values3(5);
  for ( auto& v : values3 )
    v = 1.*rand()/RAND_MAX;
  cout << values3[0] << " " << values3[1] << endl;

  return 0;
}
