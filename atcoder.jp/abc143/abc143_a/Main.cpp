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
  int A,B;
  cin >> A >> B;
  if (A <= B + B)
    cout << 0 << endl;
  else
    cout << A - B - B << endl;

	return 0;
}
