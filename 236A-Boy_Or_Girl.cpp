#include <iostream>

using namespace std;
int main(){
  bool seen[26]{};
  int unique = 0;
  string line;
  cin >> line;

  for(const char& c : line){
    if(!seen[c - 'a']){
      seen[c - 'a'] = true;
      unique++;
    }
  }

  cout << (unique % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
  return 0;
}
