#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

int main()
{
    lld sum;
    cin >> sum;
    lld ans = 1;
    for(lld i = 1; i <= 1000; i++) {
        for(lld j = 1; j <= 1000; j++) {
            lld c = sum - (i + j);
            if(c * c == i * i + j * j) {
                ans = i * j * c;
                i = 1001;
                j = 1001;
            }
        }
    }
    cout << ans << "\n";
}
