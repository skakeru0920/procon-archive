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

	int N, K, M;
	cin >> N >> K >> M;
	vector<int> vec(N-1);
	int sum = 0, ans;
	rep(i, N - 1)
	{
		cin >> vec[i];
		sum += vec[i];
	}
	ans = (N * M) - sum;
	if (ans > K)
		ans = -1;
	else if(ans < 0)
		ans = 0;
	cout << ans << '\n';
	return 0;
}
