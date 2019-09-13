/*
Write an i,j loop nest that prints out all pairs with 1≤i,j≤10, j≤i.
Output one line for each i value.
Now write an i,j loop that prints all pairs with
1≤i,j≤10, |i−j|<2,
again printing one line per i value. Food for thought: this exercise is definitely easiest with a conditional in the inner loop, but can you do it without?
*/ 

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

	
	// Part 1
	cout << "Looping Exercise 4 Part 1" << endl;
	for (int i=1; i<=10; i++) {
		for (int j=1; j<=i; j++)
			cout << "(" << i << "," << j << ")  ";

		cout << endl;
	}

	// Part 2
	cout << "Looping Exercise 4 Part 2" << endl;
	for (int i=1; i<=10; i++) {
		for (int j=1; j<=10; j++)
			if (abs(i-j)<2)
				cout << "(" << i << "," << j << ")";

		cout << endl;
	}
	/*
	  Alternative solution structure:
	  for (int i.....)
	    for (int j=max(1,i-1); j<min(10,i+1); j++)
	 */
	return 0;
}
