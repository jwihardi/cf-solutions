#include <bits/stdc++.h>

using namespace std;
int main(){
  int level, p, q;
  unordered_set<int> set;

  cin >> level;
  cin >> p;
  for(int x; p > 0; p--){
    cin >> x;
    set.insert(x);
  }

  cin >> q;
  for(int y; q > 0; q--){
    cin >> y;
    set.insert(y);
  }

  cout << (set.size() == level ? "I become the guy." : "Oh, my keyboard!") << '\n';
  return 0;
}
