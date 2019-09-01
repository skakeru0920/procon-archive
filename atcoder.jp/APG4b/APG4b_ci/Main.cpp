#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  int answer = max({A,B,C}) - min({A,B,C});
  
  cout << answer << endl;
}
