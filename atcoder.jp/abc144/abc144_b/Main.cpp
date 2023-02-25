#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, temp;
	cin >> N;
	string ans = "No";
	rep2(i, 1, 10)
	{
		if (N % i == 0)
		{
			temp = N/i;

			if (0 < temp && temp < 10)
			{
				ans = "Yes";
				break ;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
