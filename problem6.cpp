#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
const lld MAX = 155555;

int main()
{
    lld n;
    cin >> n;
    lld sqSum = 0;
    lld numSum = 0;
    for(lld i = 1; i <= n; i++) {
        sqSum += i * i;
        numSum += i;
    }
    cout << numSum * numSum - sqSum;
}
