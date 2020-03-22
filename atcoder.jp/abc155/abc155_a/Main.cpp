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
	int a, b, c;
	cin >> a >> b >> c;

	string ans;
	if (a == b && b != c)
	{
		ans = "Yes";
	}
	else if (b == c && c != a)
	{
		ans = "Yes";
	}
	else if (c == a && a != b)
	{
		ans = "Yes";
	}
	else
	{
		ans = "No";
	}

	cout << ans << '\n';

	return 0;
}
