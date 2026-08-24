#include <iostream>

using namespace std;
int main(){
  int num_lines;

  cin >> num_lines;
  
  while(num_lines > 0){
    string word;
    cin >> word;
    
    if(word.length() <= 10){
      cout << word << '\n';
    }else{
      cout << word[0] 
           << word.length() - 2
           << word.back() << '\n';
    }

    num_lines--;
  }

  return 0;
}
