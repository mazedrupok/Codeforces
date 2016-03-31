//http://codeforces.com/contest/659
#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n, a, b, i;
   scanf (" %d %d %d", &n, &a, &b);
   if (b >= 0) {
      for (i = a+1; b--; i++) {
         if (i == n+1) i = 1;
      }
      i--;
   }
   else {
      b = -1 * b;
      for (i = a-1; b--; i--) {
         if (i == 0) i = n;
      }
      i++;
   }
   printf ("%d\n", i);

}
