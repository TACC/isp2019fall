#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

  // find the longest collatz sequence  
  // maintain the current record,
  int longest_sequence{0};
  // for all starting guesses: see if they give a larger record
  for (int starting_point=1; starting_point<=1000; starting_point++) {
    // find the length from this startingpoint, 
    int current_length{0};
    int current_value=starting_point;
    while ( 
	   // not ended
	   current_value != 1
	    ) {
      // compute next step
      if (current_value%2==0)
	current_value /=2;
      else
	current_value = 3*current_value + 1;
      current_length++;
    }
    // if this length > record: report on this
    if (current_length>longest_sequence) {
      longest_sequence = current_length;
      cout << longest_sequence << endl;
    }
  }
  return 0;
}
