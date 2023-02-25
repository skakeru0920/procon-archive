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

	int nb, ans = 0;
	cin >> nb;

	while (nb >= 500)
	{
		nb -= 500;
		ans += 1000;
	}

	while (nb >= 5)
	{
		nb -= 5;
		ans += 5;
	}
	cout << ans << '\n';

	return 0;
}
