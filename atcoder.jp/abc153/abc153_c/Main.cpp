#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()

using namespace std;
typedef long long ll;
#pragma endregion
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	ll N, K;
	cin >> N >> K;
	vector<ll> vec(N);
	rep(i, N) cin >> vec[i];
	sort(vec.begin(), vec.end());
	ll ans = 0;
	rep(i, N - K)
	{
		ans += vec[i];
	}

	cout << ans << '\n';
	return 0;
}
