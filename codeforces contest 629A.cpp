#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    char s[105][105];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> s[i][j];
    int res = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (s[i][j] == 'C') cnt++;
        }
        int tem = (cnt * (cnt-1)) / 2;
        res += tem;
    }
    for (int j = 0; j < n; j++) {
        cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i][j] == 'C') cnt++;
        }
        int tem = (cnt*(cnt-1)) /2;
        res += tem;
    }
    cout << res << endl;
}
