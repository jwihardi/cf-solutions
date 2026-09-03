#include <bits/stdc++.h>

using namespace std;
int main(){
  int init_cost, init_money, target_bananas;
  cin >> init_cost >> init_money >> target_bananas;

  cout << max(0, init_cost * target_bananas * (target_bananas + 1) / 2 - init_money) << '\n';
  return 0;
}
