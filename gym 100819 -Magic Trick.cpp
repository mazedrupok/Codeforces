#include <bits/stdc++.h>
using namespace std;

vector< pair<string, int> >vc;
int call(int n)
{
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i].first=="ADD") n+=vc[i].second;
        else if(vc[i].first=="MULTIPLY") n*=vc[i].second;
        else if(vc[i].first=="SUBTRACT")
        {
            if(n-vc[i].second < 0) return 1;
            n-=vc[i].second;
        }
        else if(vc[i].first=="DIVIDE")
        {
            if(n%vc[i].second) return 1;
            n/=vc[i].second;
        }
    }
    return 0;
}

int main()
{
    int n;
    while(cin >> n){
    for(int i = 0; i < n; i++)
    {
        string t1; int t2;
        cin >> t1 >> t2;
        vc.push_back(make_pair(t1, t2));
    }
    int res=0;
    for(int i = 1; i <= 100; i++) res+=call(i);
    cout<<res<<endl;
    vc.clear();
    }
    return 0;
}
