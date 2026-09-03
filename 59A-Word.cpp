#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
  string s;
  cin >> s;

  int caps = 0;
  for(char c : s)
    if(c >= 'A') caps++;

  cout << (s.length() - caps >= 0 ? transform(s.begin(), s.end(), s.begin(), ::toupper) :
           transform(s.begin(), s.end(), s.begin(), ::tolower)) << '\n';
  return 0;
}
