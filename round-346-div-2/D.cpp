//http://codeforces.com/contest/659
#include <bits/stdc++.h>
using namespace std;
struct node {
   int xx; int yy;
   node () {}
   node (int a, int b) {xx = a; yy = b;}
   bool operator < (const node &p) const {
      return xx < p.xx; //large to small
   }
};
int main() {
    int n;
    cin >> n;
    node pp[1005];
    for (int i = 0; i <= n; i++) cin >> pp[i].xx >> pp[i].yy;
    int res = 0;
    for(int i = 1; i < n; i++){
        if(pp[i].yy == pp[i-1].yy){
            if(pp[i+1].yy > pp[i].yy && pp[i-1].xx < pp[i].xx) res++;
            if(pp[i+1].yy < pp[i].yy && pp[i-1].xx > pp[i].xx) res++;
        }
        else {
            if(pp[i+1].xx > pp[i].xx && pp[i-1].yy > pp[i].yy) res++;
            if(pp[i+1].xx < pp[i].xx && pp[i-1].yy < pp[i].yy) res++;
        }
    }
    cout << res << endl;
}

