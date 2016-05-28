/*
   Name:  Md. Abdul Mazed
   Noakhali Science & Technology University
   Email:  mazedrupok@gmail.com || mazed4g@gmail.com
   FB id:  www.facebook.com/mazedrupok
   github: www.github.com/mazedrupok
   Category: stable_sort implementation.
   Problem link: http://www.codeforces.com/problemset/problem/63/A
   Comment: It sort in First come first serve order of input.(Shafayet blog)
*/
#include <bits/stdc++.h>
using namespace std;
#define MX 10005
#define read(f) freopen(f, "r", stdin)
#define write(f) freopen(f, "w", stdout)
typedef long long LL;
struct node {
	string S;
	int w;
	bool operator < ( const node &p) const {
      return w < p.w;
   }
} e[10000];
int main()
{
	read("in.txt");
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		e[i].S = s1;
		if(s2 == "rat") e[i].w=1;
		if(s2 == "woman") e[i].w=2;
		if(s2 == "child") e[i].w=2;
		if(s2 == "man") e[i].w=3;
		if(s2 == "captain") e[i].w=4;
	}
   stable_sort(e, e+N); ///Its here.
   for(i = 0; i < N; i++)
   cout << e[i].S << " " << e[i].w << endl;
	return 0;
}
/*
Sample Input:
20
Wswwcvvm woman
Btmfats rat
I rat
Ocmtsnwx man
Urcqv rat
Yghnogt woman
Wtyfc man
Wqle child
Ujfrelpu rat
Dstixj man
Ahksnio woman
Khkvaap woman
Sjppvwm rat
Egdmsv rat
Dank rat
Nquicjnw rat
Lh captain
Tdyaqaqln rat
Qtj rat
Tfgwijvq rat
*/

