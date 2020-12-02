// Lab_8_2
// скануванням рядка ітераційним способом

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void formt(string& str) {
	size_t pos_space = str.find(' '),
		start = 0, end = 0, tos;
	string m;
	while (start = str.find_first_of("0123456789", start), start < pos_space && start != -1) {
		end = str.find_first_not_of("0123456789.,", start + 1);
		m = str.substr(start, end - start);
		if (tos = m.find_first_of(".,"), tos != -1 && tos + 3 < m.length()) {
			m = to_string(stof(m));
			tos = m.find_first_of(".,");
			m = m.substr(0, tos + 3);
			str.replace(start, end - start, m);
			pos_space -= end - start - m.length();
			start += m.length() + 1;
		}
		else start = end;
	}
}

void main() {
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	formt(str);
	cout << "Length of min groups of digits: " << str << endl;
}