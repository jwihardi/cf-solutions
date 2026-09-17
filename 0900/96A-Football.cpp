#include <bits/stdc++.h>

using namespace std;
int main(){
  string players;
  cin >> players;

  int count = 1;
  for(int i = 1; i < players.length() && count < 7; i++)
    players[i-1] != players[i] ? count = 1 : count++;

  cout << (count >= 7 ? "YES" : "NO") << '\n';
  return 0;
}
