#include<iostream>

using namespace std;

int main() {
	char c;
	while (cin >> c) {
		if (c == 'H' || c == 'Q' || c == '9') {
			cout << "YES"; return 0;
		}
	}
	cout << "NO";
}
