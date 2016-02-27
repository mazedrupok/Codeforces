/*
    Md. Abdul Mazed
    Noakhali Science & Technology University
    mazed4g@gmail.com
    http://www.facebook.com/mazedrupok/bd
    github.com/mazedrupok
    problem category: Binary Search, Number Theory
        :) :) :)
    Problem link: codeforces.com/contest/633/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int n,m;
int flag,sum,ave,ans,res,len,ans1,ans2;
int numOfZero(int u)
{
    int i,t,res;
    for(res=0,i=5;i<=u;i*=5)
        res+=u/i;
    return res;
}
int fen()
{
     int x=0,y=INF;
     while(x<=y)
     {
         m=(x+y)>>1;
         if(numOfZero(m)>n) y=m-1;
         else x=m+1;
     }
     y-=y%5;
     if(numOfZero(y)==n)return y;
     return -1;
}
int main()
{
    int i,j,k,kk,t,x,y,z, t1;
    kk=0;
    scanf("%d",&n);
        //printf("Case %d: ",++kk);
        t=fen();
        if (t != -1) {
            n += 1;
            t1 = fen();
            while (t1 == -1) {
                n += 1;
                t1 = fen();
            }
        }
        if(t!=-1) {
            printf ("%d\n", t1-t);
            for (int p = t; p < t1; p++) {
                printf ("%d ", p);
            }
        }
        else printf("0\n");
    return 0;
}
