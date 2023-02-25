#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int sum = 0;
  for(int i=0; i<A.size(); i++) {
    int left = S - A.at(i);

    for(int j=0; j<P.size(); j++) {
      if(P.at(j) == left)
        sum++;
      
    }
  }
  
  cout << sum << endl;
}
