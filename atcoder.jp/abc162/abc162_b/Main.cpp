#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	unsigned long long N, ans = 0, i = 1;
	cin >> N;

	while (i <= N)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			//
		}
		else
		{
			ans += i;
		}

		i++;
	}

	cout << ans << '\n';
	return 0;
}
