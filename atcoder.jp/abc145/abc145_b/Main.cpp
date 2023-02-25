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
	int N;
	string S;
	cin >> N >> S;
	string temp = "";

	rep(i, N/2)
		temp += S[i];
	if (temp + temp == S)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';
	return 0;
}
