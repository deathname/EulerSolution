#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
const lld MAX = 555555;
lld mod = 1e9 + 7;
lld p[MAX];
vector<lld> prime;
//

void sieve()
{
    p[0] = 1;
    p[1] = 1;
    for(lld i = 2; i < MAX; i++) {
        if(p[i] == 0) {
            prime.push_back(i);
            for(lld j = i; j < MAX; j += i) {
                p[j] = 1;
            }
        }
    }
}

lld powP(lld a, lld b)
{
    if(b == 0 || a == 1) {
        return 1 % mod;
    }
    lld temp = powP(a, b / 2);
    temp = temp * temp % mod;
    if(b % 2) {
        temp = temp * a % mod;
    }
    return temp;
}

int main()
{
    sieve();
    lld t;
    cin >> t;
    while(t--) {
        lld n;
        cin >> n;
        auto it = upper_bound(prime.begin(), prime.end(), n);
        lld id = it - prime.begin();
        lld ans = 1;
        for(lld i = 0; i < id; i++) {
            lld v = prime[i];
            lld power = floor(log(n) * 1.0 / log(v));
            ans = ans * (powP(v, power));
        }
        cout << ans << "\n";
    }
}
