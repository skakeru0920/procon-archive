#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,sum=0;
  cin >> N;
  vector<int> vec(N);
  for (int i=0;i<N;i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  
  for(int j=0;j<vec.size();j++){
    if(vec.at(j) >= sum/N)
      cout << vec.at(j) - sum/N << endl;
    else
      cout << sum/N - vec.at(j) << endl;
  }
  
}
