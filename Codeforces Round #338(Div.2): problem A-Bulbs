#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int m, n, t, x;
    cin >> n >> m;
    int ara[m+1];
    memset (ara, 0, sizeof (ara));
    while (n--) {
        cin >> t;
        while (t--) {
            cin >> x;
            ara[x] = 1;
        }
    }
    int temp = true;
    for (int i = 1; i <= m; i++) {
        if (ara[i] == 0) {temp = false;break;}
    }
    if (temp == true) cout << "YES";
    else cout << "NO";
    return 0;
}
