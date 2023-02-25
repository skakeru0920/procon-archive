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

	string s, t, u;
	int a, b;

	cin >> s >> t >> a >> b >> u;
	if (u == s)
	{
		cout << a - 1 << ' ' << b;
	}
	else
	{
		cout << a << ' ' << b - 1;
	}

	return 0;
}
