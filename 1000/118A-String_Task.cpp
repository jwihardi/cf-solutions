#include <bits/stdc++.h>

using namespace std;
int main(){
  string word, res = "";
  cin >> word;

  for(char c : word){
    c = tolower(c);
    if(string("aeiouy").find(c) == string::npos)
      res+='.', res+=c;
  }

  cout << res << '\n';
  return 0;
}
