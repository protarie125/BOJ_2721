#include <iostream>

using namespace std;

int t(int n) {
	return n * (n + 1) / 2;
}

int w(int n) {
	auto ret = int{ 0 };
	for (int i = 1; i <= n; ++i) {
		ret += i * t(i + 1);
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		cout << w(n) << '\n';
	}

	return 0;
}