#include <iostream>
using namespace std;
int main(){
  string Str;
  cin >> Str;
  int ans = 700;
  if (Str[0] == 'o')
    ans += 100;
  if (Str[1] == 'o')
    ans += 100;
  if (Str[2] == 'o')
    ans += 100;
  cout << ans << endl;
}
