#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int male[400], fema[400];
    memset (male, 0, sizeof (male));
    memset (fema, 0, sizeof (fema));
    int n, a, b; char ch;
    cin >> n;
    int m = n;
    while (n--) {
        cin >> ch >> a >> b;
        if (ch == 'M') {
            for (int i = a; i <= b; i++) {
                if (i == 366) {male[1]++; continue;}
                male[i]++;
            }
        }
        else if (ch == 'F') {
            for (int i = a; i <= b; i++) {
                 if (i == 366) {fema[1]++; continue;}
                fema[i]++;
            }
        }
    }
    int mx = 0;
    for (int i = 1; i <= 366; i++) {
        mx = max (mx, 2*min(male[i], fema[i]));
    }
    cout << mx << endl;
    return 0;
}
