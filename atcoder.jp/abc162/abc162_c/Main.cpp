#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()

using namespace std;
typedef long long ll;
#pragma endregion

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	ll K, ans = 0;
	cin >> K;

	rep2 (i, 1, K + 1)
	{
		rep2 (j, 1, K + 1)
		{
			rep2 (h, 1, K + 1)
			{
				ans += gcd(i, gcd(j, h));
			}
		}
	}

	cout << ans << '\n';
	return 0;
}
