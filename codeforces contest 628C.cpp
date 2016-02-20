#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
char s[100055], t[100055];
int main ()
{
    int n, k, i;
    scanf (" %d %d", &n, &k);
    scanf (" %s", s);
    for (i = 0; i < n; i++) {
        if (k <= 0) {
            t[i] = s[i];
            continue;
        }
        int a = 'z' - s[i];
        int b = s[i] - 'a';
        if (a > b && a <= k && a) {t[i] = s[i] + a; k -= a;}
        else if (b <= k && b) {t[i] = s[i] - b; k -= b;}
        else {
            if (s[i]+k <= 122) t[i] = s[i] + k;
            else t[i] = s[i] - k;
            k -= k;
        }
    }
    t[i] = '\0';
    if (k > 0) printf ("-1\n");
    else printf ("%s\n", t);
    return 0;
}
