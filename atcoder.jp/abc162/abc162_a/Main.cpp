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

	string N;
	cin >> N;
	string ans = "No";
	rep(i, 3)
	{
		if (N[i] == '7')
			ans = "Yes";
	}
	cout << ans << '\n';
	return 0;
}