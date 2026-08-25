#include <iostream>

using namespace std;
int main(){
  int n, k, k_val, res = 0;
  cin >> n >> k;
  
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;

    if(i == k - 1)
      k_val = tmp;

    if(tmp > 0 && (i < k || k_val == tmp))
      res++;
  }
  
  cout << res << '\n';
  return 0;
}
