#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
const lld MAX = 1555555;
lld lim = 4000000;
lld Sum[MAX];
void PrevTwoSum()
{
    Sum[0] = 0;
    Sum[1] = 1;
    Sum[2] = 2;
    for(lld i = 3; i < MAX; i++) {
        lld req = Sum[i - 1] + Sum[i - 2];
        if(req > lim) {
            Sum[i] = 0;
            break;
        } else {
            Sum[i] = req;
        }
    }
}

int main()
{
    PrevTwoSum();
    lld ans = 0;
    for(lld i = 0; i < MAX; i++) {
        ans += (Sum[i] % 2 ? 0 : Sum[i]);
    }
    cout << ans;
}
