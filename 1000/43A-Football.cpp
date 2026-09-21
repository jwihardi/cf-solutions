#include <bits/stdc++.h>

using namespace std;
int main(){
  int num_of_lines;
  cin >> num_of_lines;

  pair<string, int> team1, team2;
  for(; num_of_lines > 0; num_of_lines--){
    string team;
    cin >> team;
    if(team1.first.empty() || team == team1.first)
      team1.first = team, team1.second++;
    else
      team2.first = team, team2.second++;
  }

  cout << (team1.second > team2.second ? team1.first : team2.first) << '\n';
  return 0;
}
