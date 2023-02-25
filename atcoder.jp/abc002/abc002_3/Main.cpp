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

	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double ans;
	// x1, y1を(0,0)に合わせる
	x2 = x2 - x1;
	y2 = y2 - y1;
	x3 = x3 - x1;
	y3 = y3 - y1;

	ans = ((x2 * y3) - (x3 * y2)) / 2;
	0 < ans ? ans : ans *= -1;
	cout << fixed << setprecision(1);
	cout << ans << '\n';
	return 0;
}
