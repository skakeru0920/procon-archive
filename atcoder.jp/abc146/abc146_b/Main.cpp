#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()

using namespace std;
typedef long long ll;
#pragma endregion

char con(char c, int n)
{
	c = c + n;

	if ('Z' < c)
	{
		c = c - 26;
	}
	return c;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	string S;
	cin >> N >> S;
	rep(i, sz(S))
	{
		S[i] = con(S[i], N);
	}
	cout << S << '\n';
	return 0;
}
