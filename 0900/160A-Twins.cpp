#include <bits/stdc++.h>

using namespace std;
int main(){
  int n, total = 0;
  cin >> n;

  vector<int> coins(n);
  for(int i = 0; i < n; i++){
    cin >> coins[i];
    total += coins[i];
  }
  sort(coins.rbegin(), coins.rend());
  int res = 0, count = 0;
  for(int c : coins){
    res += c;
    count++;
    if(res > total - res) break;
  }

  cout << count << '\n';
  return 0;
}
