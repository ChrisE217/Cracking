#include <iostream>
#include <algorithm>
using namespace std;

bool permutations(string s, string t);

int main() {
	string str1 = "abcde";
	string str2 = "edcba";
	string str3 = "asdfa";

	std::boolalpha;
	cout << "Permutation? " << permutations(str1, str2) << endl;

	return 0;
}

bool permutations(string s, string t) {
	if (s.length() != t.length()) return false;

	 sort(s.begin(), s.end());
	 sort(t.begin(), t.end());

	 return s.compare(t) == 0;
}
