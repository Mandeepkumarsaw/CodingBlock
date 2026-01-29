#include <iostream>
using namespace std;

int main()
{
  int x, y, rem;
  cin >> x >> y;


  while (y != 0)
  {
    rem = x % y;
    x = y;
    y = rem;
  }
  cout << x;

  return 0;
}