#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
using namespace std;
#pragma endregion
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N, A, B;
	cin >> N >> A >> B;

	int sum, ans;

	ans = 0;
	rep2(x, 1, N + 1)
	{
		sum = 0;
		int y = x;
		while (0 < y)
		{
			sum = sum + (y % 10);
			y = y / 10;
		}
		if (A <= sum && sum <= B)
		{
			ans += x;
		}
	}
	cout << ans << '\n';

	return 0;
}
