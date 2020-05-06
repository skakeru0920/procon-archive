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
	int N;
	cin >> N;
	vector<int> vec(N);
	rep(i, N) cin >> vec[i];
	int ans = 0;
	rep(i, N)
	{
		rep2(j, i+1, N)
		{
			// cout << "i: " << vec[i] << " j: " << vec[j] << endl;
			ans += vec[i]*vec[j];
		}
	}
	cout << ans << '\n';
	return 0;
}
