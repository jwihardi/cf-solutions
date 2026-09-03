#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  /**
    * a < b, t >= 0
    * limak = a, 3a, 9a, 27a,... ==> 3^t * a
    * bob = b, 2b, 4b, 8b,... ==> 2^t * b
    *
    * condition
    * limak > bob -> 3^t*a > 2^t*b -> (3/2)^t > b/a -> t > log_(3/2)(b/a) = log(b/a) / log(3/2)
    */

  /* possible because 1 - 10 won't cause floating-point issue, if the range was different a loop would be better */
  double t = log(static_cast<double>(b) / a) / log(1.5);
  cout << static_cast<int>(t) + 1 << '\n';

  return 0;
}
