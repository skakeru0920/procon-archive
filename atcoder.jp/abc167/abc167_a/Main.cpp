#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string s, t;
	cin >> s >> t;
	string ans = "Yes";
	rep(i, sz(s))
	{
		if (s[i] != t[i])	ans = "No";
	}
	if (sz(s) + 1 != sz(t))	ans = "No";
	cout << ans << '\n';

	return 0;
}
