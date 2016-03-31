//http://codeforces.com/contest/659
#include <bits/stdc++.h>
using namespace std;
struct node {
   string s; int score;
   node (string p, int a) {
      s = p; score = a;
   }
   bool operator < (const node &p) const {
      return p.score < score; //large to small
   }
};
vector <node > v[100009];
int main ()
{
   string s;
   int n, m, x, y;
   cin >> n >> m;
   for (int i = 0; i < n; i++) {
      cin >> s;
      cin >> x >> y;
      v[x].push_back (node(s, y));
   }
   for (int i = 1; i <= m; i++) {
      sort (v[i].begin(), v[i].end());
      if (v[i].size() < 2) cout << "?" << endl;
      else if (v[i].size() == 2) cout << v[i][0].s << " " << v[i][1].s << endl;
      else if (v[i][2].score == v[i][0].score || v[i][2].score == v[i][1].score) cout << "?" << endl;
      else cout << v[i][0].s << " " << v[i][1].s << endl;
   }
}
