#include <bits/stdc++.h>

using namespace std;
int main(){
  int n, m;
  cin >> n >> m;

  vector<int> target_houses(m);
  for(int i = 0; i < m; i++)
    cin >> target_houses[i];

  int cur_house = 1;
  long long time = 0;
  for(int i = 0; i < m; i++){
    time += (target_houses[i] - cur_house + n) % n;
    cur_house = target_houses[i];
  }

  cout << time << '\n';
  return 0;
}
