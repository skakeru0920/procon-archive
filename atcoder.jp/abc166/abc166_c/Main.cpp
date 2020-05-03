#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	ll N, M;
	cin >> N >> M;
	vector<ll> height(N);
	vector<int> flag(N, 1);
	vector<P> load(M);
	int ans = 0;
	rep (i, N)
	{
		cin >> height[i];
	}
	rep(i, M)
	{
		cin >> load[i].first;
		cin >> load[i].second;
		if (!(height[load[i].first - 1] > height[load[i].second - 1]))
		{
			flag[load[i].first - 1] = 0;
		}
		if (!(height[load[i].second - 1] > height[load[i].first - 1]))
		{
			flag[load[i].second - 1] = 0;
		}

	}
	rep(i, N) if (flag[i] == 1) ans++;
	cout << ans << '\n';
	return 0;
}
