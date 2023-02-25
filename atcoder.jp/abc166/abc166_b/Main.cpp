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

	int N, K, d;
	cin >> N >> K;
	vector<int> vec(N);

	rep (i, K)
	{
		cin >> d;
		rep(j, d)
		{
			int temp;
			cin >> temp;
			vec[temp - 1] = 1;
		}
	}

	int ans = 0;
	rep(i, sz(vec))
	{
		if(vec[i] == 0)
			ans++;
	}
	cout << ans << '\n';
	return 0;
}
