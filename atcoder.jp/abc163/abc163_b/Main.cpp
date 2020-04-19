#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N, M, sum = 0;
	cin >> N >> M;
	rep (i, M)
	{
		int j;
		cin >> j;
		sum += j;
	}
	if (sum > N)
	{
		cout << -1 << '\n';
	}
	else
	{
		cout << N - sum << '\n';
	}

	return 0;
}
