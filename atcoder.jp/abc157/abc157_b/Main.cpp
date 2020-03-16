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
	vector<vector<int>> vec(3, vector<int> (3));
	int N;
	rep(i, 3)
	{
		rep(j, 3)
		{
			cin >> vec[i][j];
		}
	}
	cin >> N;
	rep(i, N)
	{
		int temp;
		cin >> temp;
		rep(i, 3)
		{
			rep(j, 3)
			{
				if (vec[i][j] == temp)
					vec[i][j] = 0;
			}
		}
	}

	string ans;
	ans = "No";
	rep(i, 3)
	{
		if (vec[i][0] == 0 && vec[i][1] == 0 && vec[i][2] == 0)
		{
			ans = "Yes";
			break ;
		}
		if (vec[0][i] == 0 && vec[1][i] == 0 && vec[2][i] == 0)
		{
			ans = "Yes";
			break ;
		}
	}
	if (vec[0][0] == 0 && vec[1][1] == 0 && vec[2][2] == 0)
		ans = "Yes";
	if (vec[0][2] == 0 && vec[1][1] == 0 && vec[2][0] == 0)
		ans = "Yes";

	cout << ans << '\n';
	return 0;
}
