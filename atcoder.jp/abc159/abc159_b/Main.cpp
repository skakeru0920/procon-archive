#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()

using namespace std;
typedef long long ll;
#pragma endregion

bool kaibun(string str)
{
	int len = sz(str);
	int i = 0;
	while (len / 2 > i)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
			break ;
		}
		i++;
	}
	return true;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string s, ans = "Yes";
	cin >> s;

	if (!kaibun(s))
		ans = "No";

	string temp;
	temp = s.substr(0, sz(s) / 2);

	if (!kaibun(temp))
		ans = "No";

	temp = s.substr((sz(s) + 3) / 2 - 1, sz(s) / 2);

	if (!kaibun(temp))
		ans = "No";

	cout << ans << '\n';
	return 0;
}
