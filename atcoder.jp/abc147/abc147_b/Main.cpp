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
	int ans = 0, l = sz(s);
	rep(i, l / 2)
	{
		if(s[i] != s[l-i-1])
		{
			// cout << "i: " << s[i] << " l-i: " << s[l-i-1] << endl;
			s[i] = s[l-i-1];
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
