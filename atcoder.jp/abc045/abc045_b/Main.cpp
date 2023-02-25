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

	string a, b, c;
	cin >> a >> b >> c;
	int x = 0, y = -1, z = -1; // stringの位置
	int al = sz(a), bl = sz(b), cl = sz(c); // string長さ
	int af = 1, bf = 0, cf = 0; // flag
	while (true)
	{
		if (af == 1)
		{
			af = 0;
			if (x == al)
			{
				cout << 'A' << '\n';
				break ;
			}
			if (a[x] == 'a')
			{
				af = 1;
				x++;
			}
			else if (a[x] == 'b')
			{
				bf = 1;
				y++;
			}
			else if (a[x] == 'c')
			{
				cf = 1;
				z++;
			}
		}
		else if (bf == 1)
		{
			bf = 0;
			if (y == bl)
			{
				cout << 'B' << '\n';
				break ;
			}
			if (b[y] == 'a')
			{
				af = 1;
				x++;
			}
			else if (b[y] == 'b')
			{
				bf = 1;
				y++;
			}
			else if (b[y] == 'c')
			{
				cf = 1;
				z++;
			}
		}
		else if (cf == 1)
		{
			cf = 0;
			if (z == cl)
			{
				cout << 'C' << '\n';
				break ;
			}
			if (c[z] == 'a')
			{
				af = 1;
				x++;
			}
			else if (c[z] == 'b')
			{
				bf = 1;
				y++;
			}
			else if (c[z] == 'c')
			{
				cf = 1;
				z++;
			}
		}
	}
	return 0;
}
