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

	string a, b;
	cin >> a >> b;

	int nb;
	nb = stoi(a + b);
	string ans = "No";
	rep(i, 350)
	{
		if (i * i == nb)
		{
			ans = "Yes";
			break ;
		}
	}
	cout << ans << '\n';
	return 0;
}
