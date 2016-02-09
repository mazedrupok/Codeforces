#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int n, cnt = 0;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
        if (ara[i] == i) cnt++;
    }
    bool temp = 0;
    for (int i = 0; i < n; i++) {
        if (ara[i] != i) {
            if (ara[ara[i]] == i) {
                cnt += 2;
                temp = 1;
                break;
            }
        }
    }
    if (temp == 0 && cnt!=n) cnt++;
    cout << cnt << endl;
    return 0;
}
