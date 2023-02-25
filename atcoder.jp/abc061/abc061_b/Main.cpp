#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> vec(M*2);
  
  for(int i=0;i<M*2; i++)
    cin >> vec.at(i); 
  
  for(int j=0;j<N; j++){
    int sum = 0;
    for(int k=0; k<vec.size(); k++){
      if(vec.at(k) == j+1)
        sum = sum + 1;
    }
    cout << sum << endl;  
  }

}