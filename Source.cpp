#include<iostream>
#include <string>

using namespace std;

int countWords(string str);

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Word Count: " << countWords(input) << endl;
	}
	return 0;
}

int countWords(string str) {
	int count = 0;
	bool letterBeforeSpace = true;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ' && letterBeforeSpace) {
			letterBeforeSpace = false;
			count++;
		}
		if (str[i] == ' ') {
			letterBeforeSpace = true;
		}
	}

	return count;
}