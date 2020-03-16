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

	double A, B;
	cin >> A >> B;

	double ans = -1;
	double i = 0;
	while (i < 1009)
	{
		if ((int)(i * 0.08) == A && (int)(i * 0.1) == B)
		{
			ans = i;
			break ;
		}

		i++;
	}

	cout << ans << '\n';
	return 0;
}
