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
	int N, ans = 0;
	cin >> N;
	rep2(i, 1, N+1)
	{
		string s;
		s = to_string(i);
		if (sz(s) % 2 == 1) ans++;
	}
	cout << ans << '\n';

	return 0;
}
