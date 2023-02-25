#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int sum = 1;
  
  for(int i=0; i<N; i++){
    cin >> vec.at(i);
  }
  
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  
  for(int i=0; i<N-1; i++){
   if(vec.at(i) > vec.at(i+1))
     sum++;
  }
  
  cout << sum << endl;
  
}
