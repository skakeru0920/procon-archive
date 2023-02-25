#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int A, B, C, X, ans, sum;
	cin >> A >> B >> C >>X;
	ans = 0;

	rep(i, A + 1)
	{
		rep(j, B + 1)
		{
			rep(k, C + 1)
			{
				if (500 * i + 100 * j + 50 * k == X)
				{
					ans++;
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
