#include <iostream>
using namespace std;
int main ()
{
   long long  n = 1, d = 1;
   cin >> n;
   while (n > d) {
      n -= d;
      d++;
   }
   cout << n << endl;
   return 0;
}
