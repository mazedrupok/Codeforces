#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
char s[300055];
int main ()
{
    scanf (" %s", s);
    long long cnt = 0;
    for (int i = 0; s[i]; i++) {
        if ((s[i]+48) %4 == 0) cnt++;
    }
    for (int i = 1; s[i]; i++) {
        int a = (s[i-1]+48) * 10 + (s[i]+48);
        if (a %4 == 0) {
            cnt += i;
        }
    }
    printf ("%I64d\n", cnt);
    return 0;
}
