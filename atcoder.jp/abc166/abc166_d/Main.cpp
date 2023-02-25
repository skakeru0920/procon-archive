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
	ll X;
	cin >> X;
	int a = 0, b = 0;
	rep2(i, -150, 150)
	{
		rep2(j, -150, 150)
		{
			if (pow(i, 5) - pow(j, 5) == X)
			{
				a = i;
				b = j;
				break ;
			}
		}
		if (a != 0 && b != 0) break ;
	}
	cout << a << " " << b << '\n';

	return 0;
}
