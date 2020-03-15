#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
using namespace std;
typedef long long ll;
#pragma endregion
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	ll X, Y;
	cin >> X >> Y;

	ll count = 0, Ai = X;
	do
	{
		count++;
		Ai *= 2;
	}
	while (Ai <= Y);
	cout << count << '\n';
	return 0;
}
