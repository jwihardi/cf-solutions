#include <iostream>

using namespace std;
int main(){
  int line_length;
  string line;
  cin >> line_length >> line;

  int res = 0;
  for(int i = 1; i < line_length; i++)
    if(line[i] == line[i - 1]) res++;

  cout << res << '\n';
  return 0;
}
