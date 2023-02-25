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

	string S;
	cin >> S;

	if (S == "SUN")
	{
		cout << 7 << '\n';
	}else if (S == "MON")
	{
		cout << 6 << '\n';
	}else if (S == "TUE")
	{
		cout << 5 << '\n';
	}else if (S == "WED")
	{
		cout << 4 << '\n';
	}else if (S == "THU")
	{
		cout << 3 << '\n';
	}else if (S == "FRI")
	{
		cout << 2 << '\n';
	}else if (S == "SAT")
	{
		cout << 1 << '\n';
	}
	return 0;
}
