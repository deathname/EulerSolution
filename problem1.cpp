#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
int main()
{
    lld n;
    cin >> n;
    lld ans = 0;
    for(lld i = 1; i < n; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            cout << i << " ";
            ans += i;
        }
    }
    cout << ans;
}
