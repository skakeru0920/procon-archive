#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b;
	string ans;

	cin >> a >> b;
	ans = a * b % 2 == 0 ? "Even" : "Odd";

	cout << ans << '\n';
	return 0;
}
