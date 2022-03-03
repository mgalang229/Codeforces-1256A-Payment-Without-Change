#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int a, b, n, s;
	cin >> a >> b >> n >> s;
	// Firstly, we obviously need to take at least S % n coins of value 1. If we cannot do it, 
	// the answer it NO. Otherwise we always can obtain the required sum S if a * n + b >= S.
	if (s % n <= b && 1LL * a * n + b >= s) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

