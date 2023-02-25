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
	int n;
	cin >> n;

	vector<int> vec(n);
	string ans = "APPROVED";
	rep(i, n)
	{
		cin >> vec[i];
		if (vec[i] % 2 == 0)
		{
			if (!(vec[i] % 3 == 0 || vec[i] % 5 == 0))
			{
				ans = "DENIED";
			}
		}
	}
	cout << ans << '\n';

	return 0;
}
