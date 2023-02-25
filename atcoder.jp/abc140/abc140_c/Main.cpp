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
	int n;
	cin >> n;
	vector<int> b(n-1);
	rep(i,n-1) cin >> b[i];
	vector<int> a(n,pow(10, 5));
	rep(i,n-1) {
		a[i] = min(a[i], b[i]);
		a[i+1] = min(a[i+1], b[i]);
	}
	int ans = 0;
	rep(i,n) ans += a[i];
	cout << ans << endl;
	return 0;
}
