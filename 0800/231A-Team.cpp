#include <iostream>

using namespace std;
int main(){
  int num_lines, res = 0;
  cin >> num_lines;

  for(;num_lines > 0; num_lines--){
    int p, v, t;
    cin >> p >> v >> t;

    if(p + v + t >= 2)  res += 1;
  }
  
  cout << res << '\n';

  return 0;
}
