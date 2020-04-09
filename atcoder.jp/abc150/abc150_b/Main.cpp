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

	int N, ans = 0;
	string S;
	cin >> N >> S;

	rep(i, N - 2)
	{
		if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
			ans++;
	}
	cout << ans << '\n';
	return 0;
}
