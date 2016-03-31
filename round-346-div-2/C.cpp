//http://codeforces.com/contest/659
#include <bits/stdc++.h>
using namespace std;
map <int, int> mp;
vector <int > v;
int main ()
{
   int n, m, x;
   scanf (" %d %d", &n, &m);
   for (int i = 0; i < n; i++) {
      scanf (" %d", &x);
      mp[x] = 1;
   }
   int cnt = 0, cn = 0;
   for (int i = 1; cnt+i <= m; i++) {
      if (mp.find(i) == mp.end()) {
         if (cnt == 0) v.push_back (i);
         else v.push_back(i);
         cnt += i;
         cn++;
      }
   }
   printf ("%d\n", cn);
   for (int i = 0; i < v.size(); i++) {
      if (i == 0) printf ("%d", v[i]);
      else printf (" %d", v[i]);
   }
   printf ("\n");
}
