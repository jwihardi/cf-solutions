#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
  string s;
  cin >> s;

  int lower = 0;
  for(char c : s)
    if(islower(c)) lower++;

  bool is_lower = lower >= s.length() - lower;

  for(char c : s)
    cout << static_cast<char>(is_lower ? tolower(c) : toupper(c));

  cout << '\n';
  return 0;
}
