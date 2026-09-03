#include <iostream>

using namespace std;
int main(){
  string line;
  cin >> line;
  int count[3]{};

  for(char c : line)
    if(c != '+')
      count[c - '1']++;

  bool first = true;
  for(int i = 0; i < 3; i++){
    while(count[i]--){
      if(!first)
        cout << '+';
      cout << i + 1;
      first = false;
    }
  }

  cout << '\n';
  return 0;
}
