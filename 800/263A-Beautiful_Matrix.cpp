#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
  int res = -1;

  for(int i = 0; i < 5; i++){
    for(int u = 0; u < 5; u++){
      int tmp;
      if(cin >> tmp, tmp == 1)
        res = abs(i - 2) + abs(u - 2) ;
    }
  }

  cout << res << '\n';
  return 0;
}
