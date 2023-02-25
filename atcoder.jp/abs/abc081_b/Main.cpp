#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, tmp, count;

	cin >> N;
	vector<int> vec(N);
	rep(i, N)
	{
		count = 0;
		cin >> tmp;
		while (tmp % 2 == 0)
		{
			count++;
			tmp = tmp / 2;
		}
		vec[i] = count;
	}

	sort(vec.begin(), vec.end());
	cout << vec[0] << '\n';
	return 0;
}
