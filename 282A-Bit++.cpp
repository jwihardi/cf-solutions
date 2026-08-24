#include <iostream>

using namespace std;
int main(){
  int num_instructs = 0, tot = 0;
  cin >> num_instructs;

  for(; num_instructs > 0; num_instructs--){
    string line;
    cin >> line;

    if(line[0] == '+' || line.back() == '+'){
      tot++;
    }else{
      tot--;
    }

  }

  cout << tot << '\n';
  return 0;
}
