#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

int main() {

	int shift;

	cout << "Enter a number: ";
	cin >> shift;
	cout << endl;

	string code = "abz";
	for ( char& c : code ) {
	  // c += shift;
	  // if (c>'z') c -= 'z'-'a'-1;
	  c = (c+shift-'a')%26+'a';
	}

	cout << "encoded: " << code << endl;

	return 0;
}
