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
	ll N;
	cin >> N;
	map<string, int> list;
	ll ans = 0;
	rep(i, N)
	{
		string temp;
		cin >> temp;
		list[temp] = 1;
	}
	cout << sz(list) << '\n';
	return 0;
}
