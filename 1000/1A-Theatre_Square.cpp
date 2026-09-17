#include <bits/stdc++.h>

using namespace std;
int main(){
  long long n, m, a;
  cin >> n >> m >> a;

  /*
   * fit width = ceil(n / a)
   * fit height = ceil(m / a)
   * total = fit width * fit height
   */

  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
  return 0;
}
