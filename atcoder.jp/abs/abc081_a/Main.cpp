#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string str;
	int ans;

	ans = 0;
	cin >> str;
	rep(i, 3)
	{
		if (str[i] == '1')
		{
			ans++;
		}
	}
	cout << ans << '\n';

	return 0;
}
