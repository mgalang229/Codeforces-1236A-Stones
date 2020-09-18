#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		int mn = min(b, c / 2), ans = 0;
		if (mn > 0) {
			ans += (3 * mn);
			b -= mn;
		}
		mn = min(a, b / 2);
		if (mn > 0) {
			ans += (3 * mn);
		}
		cout << ans << '\n';
	}
	return 0;
}
