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
	ll N, K;
	cin >> N >> K;
	ll diff, temp;
	N %= K;
	while (1)
	{
		temp = N;
		N = abs(K - N);
		if (temp <= N)
		{
			cout << temp << '\n';
			break ;
		}
	}

	return 0;
}
