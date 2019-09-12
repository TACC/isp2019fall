// Exercise 3
// Collatz conjecture
// The integer sequence
//
// u(n+1) = 3u+1 if u is odd
//		     u/2 if u is even
// 
// leads to the Collatz conjecture: no matter the starting guess u1,
// the sequence will always terminate at 1. 
// 
// 5 → 16 → 8 → 4 → 2 → 1
// 7 → 22 → 11 → 34 → 17 → 52 → 26 → 13 → 40 → 20 → 10 → 5 · · · 
//
// Try all starting values u1 = 1, . . . , 1000 to find the values 
// that lead to the longest sequence:  every time you find a sequence that is longer 
// than the previous maximum, print out the starting number.

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

	int longsequence=0;
	int current;

	for (int startnum=1; startnum <= 1000; startnum++) {

		int numsteps=0;
		current = startnum;
		while (current > 1) {
			if (current%2==0)
				current /= 2;
			else 
				current = current*3 + 1;

			numsteps++;
		}

		if (numsteps > longsequence) {
			longsequence = numsteps;
			cout << "Starting number: " << startnum << " sequence is " << longsequence << " steps." << endl;
		}
	}

	return 0;
}
