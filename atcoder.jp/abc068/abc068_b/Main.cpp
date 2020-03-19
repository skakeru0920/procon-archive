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

	int N;
	cin >> N;

	if (N == 1)
	{
		cout << N << '\n';
		return 0;
	}
	while (N > 0)
	{
		int x;
		x = N;
		while (x > 0)
		{
			if (x % 2 == 0)
			{
				x = x / 2;
			}
			else
			{
				break ;
			}
		}
		if (x == 1)
		{
			cout << N << '\n';
			return 0;
		}
		N--;
	}
	return 0;
}
