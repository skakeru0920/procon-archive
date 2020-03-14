#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int X, A, B;
	cin >> X >> A >> B;
	cout << (X - A) % B << '\n';

	return 0;
}
