#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	stack<char> st1, st2;
	char str[100001], input, value;
	int tc;
	cin >> str;
	cin >> tc;
	for (int i = 0; i < strlen(str); i++) {
		st1.push(str[i]);
	}
	while (tc--) {
		cin >> input;
		if (input == 'L' && !st1.empty()) {
			st2.push(st1.top());
			st1.pop();
		}
		else if (input == 'D' && !st2.empty()) {
			st1.push(st2.top());
			st2.pop();
		}
		else if (input == 'B' && !st1.empty()) {
			st1.pop();
		}
		else if(input == 'P') {
			cin >> value;
			st1.push(value);
		}
	}
	while (!st1.empty()) {
		st2.push(st1.top());
		st1.pop();
	}

	while (!st2.empty()) {
		cout << st2.top();
		st2.pop();
	}
}
