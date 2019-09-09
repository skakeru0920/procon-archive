#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<vector<int>> game(N,vector<int> (N));
  
  // 試合の数だけループさせる 
  // 全部の値を-1して配列の0スタートに合わせる
  for(int i=0; i<M; i++){
    int a,b;
    cin >> a >> b;
    game.at(a-1).at(b-1) = 1;
    game.at(b-1).at(a-1) = 2;
  }
  
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(game.at(i).at(j) == 0)
        cout << "-";
      else if(game.at(i).at(j) == 1)
        cout << "o";
      else
        cout << "x";
      
      if(j == N-1)
        cout << endl;
      else
        cout << " ";
    }
  }
  
}