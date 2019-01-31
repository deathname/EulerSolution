#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
const lld MAX = 1555555;

lld primeFact(lld n)
{
    lld sqr = sqrt(n);
    lld ans = -1;
    for(lld i = 2; i <= sqr; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                n = n / i;
            }
            ans = max(ans, i);
        }
    }
    if(n > 1) {
        ans = max(ans, n);
    }
    return ans;
}

int main()
{
    lld n;
    cin >> n;
    cout << primeFact(n);
}
