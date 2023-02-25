#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A,B,count=0;
  cin >> A >> B;
  
  vector<int> vec(A);
  rep(i, A) {
    cin >> vec.at(i);
  }
  
  for(int i=0; i<vec.size(); i++) {
    if(vec[i] >= B){
      count++;
    }
  }
  
  cout << count << endl;
  
  
}
