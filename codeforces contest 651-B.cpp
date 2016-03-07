/*
    Md. Abdul Mazed
    Noakhali Science & Technology University
    mazed4g@gmail.com
    http://www.facebook.com/mazedrupok/bd
    github.com/mazedrupok
        :) :) :)
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x;
    int ara[1005] = {0};
    memset (ara, 0, sizeof (ara));
    cin >> n;
    while (n--) {
        cin >> x;
        ara[x]++;
    }
    int cnt = 0, c = -1, temp = true;
    while (temp == true) {
        temp = false;
        for (int i = 1; i < 1001; i++) {
            if (ara[i]) {
                c++;
                ara[i]--;
                temp = true;
            }
        }
        if (c > 0) cnt += c;
        c = -1;
    }
    cout << cnt << endl;
    return 0;
}
