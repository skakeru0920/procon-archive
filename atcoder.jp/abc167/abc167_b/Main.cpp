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
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	int ans = 0;

	if (a >= k)
	{
		cout << k << '\n';
	}
	else if (a + b >= k)
	{
		cout << a << '\n';
	}
	else
	{
		cout << a - (k-(a+b)) << '\n';
	}
	return 0;
}
