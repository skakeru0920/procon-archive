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

	int ans = 0;

	rep (i, 2)
	{
		int x, sum = 0;
		cin >> x;
		x--;
		while (x > 0)
		{
			sum += x;
			x--;
		}
		ans += sum;
	}

	cout << ans << '\n';
	return 0;
}
