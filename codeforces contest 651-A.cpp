/*
    Md. Abdul Mazed
    Noakhali Science & Technology University
    mazed4g@gmail.com
    http://www.facebook.com/mazedrupok/bd
    github.com/mazedrupok
        :) :) :)
*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, cnt = 0, temp;
    cin >> a >> b;
    if (a < b) temp = true;
    else temp = false;
    while (a > 0 && b > 0) {
        if (a == 1 && b == 1) break;
        if (temp == true) {
            a += 1;
            b -= 2;
            if (b < 3) temp = false;
        }
        else {
            b += 1;
            a -= 2;
            if (a < 3) temp = true;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
