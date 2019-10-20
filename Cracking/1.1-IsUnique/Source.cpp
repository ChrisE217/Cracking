#include <iostream>
using namespace std;

bool isUniqueChars(string str);

int main() {
	string unique = "abcdefghijklmnopqrstuvwxyz";
	string nonUnique = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	bool t = isUniqueChars(nonUnique);

	std::boolalpha;
	cout << "Unique string: " << isUniqueChars(unique) << endl;
	cout << "Non unique string: " << isUniqueChars(nonUnique) << endl;

	return 0;
}

bool isUniqueChars(string str) {
	if (str.length() > 128) return false; //Assuming ASCII string is used (256 for Extended ASCII)

	bool arr[128] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		int val = str[i];

		if (arr[val]) return false;

		arr[val] = true;
	}

	return true;
}
