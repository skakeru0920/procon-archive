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
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int i = 2;
	while (i)
	{
		if (i % 2 == 0)
		{
			C -= B;
			if (C <= 0)
				{
					cout << "Yes" << '\n';
					break;
				}
		}
		else
		{
			A -= D;
			if (A <= 0)
			{
					cout << "No" << '\n';
					break;
			}
		}
		i++;
	}
	return 0;
}
