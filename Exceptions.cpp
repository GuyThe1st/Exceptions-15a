//Richard Chiromo
//CIS 1202
//5/1/2024
#include <stdexcept>
#include <iostream>

using namespace std;

char character(char start, int offset);

int main() {

	try {
		cout << "character('a',100)= " << character('a', 10) << "\n";
		cout << "character('a',-51)= " << character('a', -51) << "\n";
		cout << "character('Z',-164)= " << character('Z', -164) << "\n";
		cout << "character('?',6)= " << character('?', 6) << "\n";
	}
	catch (const exception& e) {
		cerr << "Error: " << e.what() << "\n";
	} 
	return 0;
}

char character(char start, int offset) {
	if (!isgraph(start)) {
		throw runtime_error("Must start with letter (A-Z,a-z).");
	}
	char result = start + offset;

	if (!isalpha(result)) {
		throw runtime_error("Target is not a letter");
	}
	return result;
}