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
	ll A, B, K;
	cin >> A >> B >> K;

	if (A >= K)
	{
		cout << A - K << ' ' << B << '\n';
	}
	else
	{
		if (A + B > K)
			cout << 0 << ' ' << A + B - K << '\n';
		else
			cout << 0 << ' ' << 0 << '\n';

	}

	return 0;
}
