#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;

int a[12][12];

const int INF = 1001001001;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> c(n);
	rep(i, n)
	{
		cin >> c[i];
		rep(j, m) cin >> a[i][j];
	}

	int ans = INF;
	rep(s, 1<<n)
	{
		int cost = 0;
		vector<int> d(m);
		rep(i, n)
		{
			if (s>>i&1) // sのibit目が立っている
			{
				cost += c[i];
				rep(j, m) d[j] += a[i][j];
			}
		}
		bool ok = true;
		rep(j,m) if (d[j] < x) ok = false; // 1つでもxを満たさないものがあったらfalse
		if (ok) ans = min(ans, cost);
	}
	if (ans == INF) cout << -1 << '\n';
	else cout << ans << '\n';

	return 0;
}
