#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	long long a, b, n, s;
	cin >> a >> b >> n >> s;
	
	//valid cases:
	//sum up to 4 coins
	//1 coin worth 3 each
	//2 coins worth 1 each
	//{3, 1, 1}
	
	//sum up to 18 coins
	//3 coins worth 5 each
	//3 coins worth 1 each
	//{5, 5, 5, 1, 1, 1}
	
	//invalid cases:
	//sum up to 6 coins
	//1 coin worth 3 each
	//2 coins worth 1 each
	//{3, 1, 1}
	
	//sum up to 27 coins
	//5 coins worth 6 each
	//2 coins worth 1 each
	//{6, 6, 6, 6, 6, 1, 1}
	
	long long total = a * n + b;
	if (total < s) { // the answer does not exist if the total coins we have is less than S
		cout << "NO\n";
		return;
	}
	// for the answer to exist, at least 1 of these conditions must apply:
	// 1. by using x n-value coins, where x <= a and y 1-value coins, 
	// where y <= b, we must be able to add up to a value of exactly S
	// 2. by using ONLY x n-value coins, where x <= a, S should be a multiple of (n * x)
	// 3. by using ONLY y 1-value coins, where y <= b, S should be less than or equal to b
	// otherwise, the answer does not exist
	bool checker[2] = {true};
	long long factor = s / n;
	long long diff = s - (n * min(factor, a));
	if (diff > b) {
		checker[0] = false;
	}
	if (s / n != a && s > b) {
		checker[1] = false;
	}
	//cout << factor << " " << diff << " " << b << '\n';
	cout << (checker[0] || checker[1] ? "YES" : "NO") << '\n';
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

