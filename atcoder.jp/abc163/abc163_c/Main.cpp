#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	ll N;
	cin >> N;
	vector<ll> mem(N, 0);

	rep2 (i, 2, N + 1)
	{
		ll buka;
		cin >> buka;
		mem[buka - 1] += 1;
	}

	rep(i, N)
	{
		cout << mem[i] << '\n';
	}
	return 0;
}
