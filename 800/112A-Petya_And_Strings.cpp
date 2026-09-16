#include <iostream>

using namespace std;
int main(){
  string word1, word2;
  cin >> word1 >> word2;

  for(int i = 0; i < word1.length(); i++){
    if(tolower(word1[i]) == tolower(word2[i])) continue;
    cout << (tolower(word1[i]) < tolower(word2[i]) ? -1 : 1) << '\n';
    exit(0);
  }

  cout << 0 << '\n';
  return 0;
}
