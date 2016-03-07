#include <bits/stdc++.h>
using namespace std;
map<int, int> mpx, mpy;
map<pair<int, int>, int> s;

int main () {
    int n;
    long long ans = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		int x, y;
		cin >> x >> y;
		ans -= s[make_pair(x, y)];
		ans += mpx[x];
		ans += mpy[y];
		mpx[x]++;
		mpy[y]++;
		s[make_pair(x, y)]++;
	}
	cout << ans;

	return 0;
}
