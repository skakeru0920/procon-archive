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

	long double N, M, vote = 0;
	cin >> N >> M;
	vector<long double> vec(N);
	rep(i, N)
	{
		cin >> vec[i];
		vote += vec[i];
	}
	long double pass = 0;
	rep(i, N)
	{
		if (vec[i] < vote / (4 * M))
		{
			//
		}
		else
		{
			pass++;
		}

	}

	if (pass < M)
	{
		cout << "No" << '\n';
	}
	else
	{
		cout << "Yes" << '\n';
	}

	return 0;
}
