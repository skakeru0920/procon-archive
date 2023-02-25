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
	ll X, year = 0, yen = 100;
	cin >> X;
	while(1)
	{

		if (yen >= X)
		{
			cout << year << '\n';
			break;
		}
		yen += yen * 0.01;
		year++;
	}
	return 0;
}
