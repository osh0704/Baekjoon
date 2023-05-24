#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
bool check[300000] = { false };
	
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, p;
	
	cin >> a >> p;
	
	int va = a, trap;

	while (1) {

		if (check[va] == true) {
			trap = va;
			break;
		}
		check[va] = true;

		string tmp = to_string(va);

		int res = 0;

		for (int i = 0; i < tmp.length(); i++) {
			int val = tmp[i] - '0';
			res = res + pow(val, p);
		}
		va = res;
	}

	va = a;
	
	int cnt = 0;
	while (1) {
		if (va == trap) break;

		string tmp = to_string(va);

		int res = 0;
		for (int i = 0; i < tmp.length(); i++) {
			int val = tmp[i] - '0';
			res = res + pow(val, p);
		}
		va = res;

		cnt++;
	}

	cout << cnt;
}
