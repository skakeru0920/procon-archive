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
	ll N;
	cin >> N;
	vector<ll> vec(N);
	rep(i, N) cin >> vec[i];

	ll ans = 9223372036854775807;

	rep(i, 100)
	{
		ll temp = 0;
		rep(j, N)
		{
			temp += pow(vec[j] - i, 2);
		}
		if (temp < ans) ans = temp;
	}

	cout << ans << '\n';

	return 0;
}
