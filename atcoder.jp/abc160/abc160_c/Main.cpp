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

	ll K, N;
	cin >> K >> N;
	vector<ll> vec(N);
	rep (i, N) cin >> vec[i];

	ll diff = 0;
	rep (i, N - 1) {
		diff = max(diff, vec[i + 1] - vec[i]);
	}
	diff = max(diff, K - vec[N - 1] + vec[0]);
	cout << K - diff << '\n';
	return 0;
}
