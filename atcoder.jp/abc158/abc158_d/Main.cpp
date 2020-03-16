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
	int Q;
	cin >> S >> Q;

	int revcount = 0; // これが偶数ならそのまま、奇数なら逆転しているイメージ
	rep(i, Q)
	{
		int r;
		cin >> r;

		if (r == 1)
			revcount++;
		else
		{
			char t;
			cin >> r >> t;
			if ((r == 1 && revcount % 2 == 0) || (r == 2 && revcount % 2 == 1))
			{
				S.insert(S.begin(),t);
			}
			else
			{
				S.insert(S.end(), t);
			}
		}
	}

	if (revcount % 2 == 1)
		reverse(S.begin(), S.end());
	cout << S << '\n';
	return 0;
}
