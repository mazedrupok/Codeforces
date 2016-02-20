#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main ()
{
    int n, b, p, match, bottle, towel;
    cin >> n >> b >> p;
    match = n-1;
    bottle = (b*2 + 1)* match;
    towel = p*n;
    cout << bottle << " " << towel << endl;
    return 0;
}
