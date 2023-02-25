#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	int flag = 1;
	rep(i, sz(s))
	{
		if (flag == 0) break ;
		if (i % 2 == 0)
		{
			if (!(s[i] == 'R' || s[i] == 'U' || s[i] == 'D'))	flag = 0;
		}
		else if (i % 2 == 1)
		{
			if (!(s[i] == 'L' || s[i] == 'U' || s[i] == 'D'))	flag = 0;
		}
	}
	string ans = flag ? "Yes" : "No";
	cout << ans << '\n';
	return 0;
}
