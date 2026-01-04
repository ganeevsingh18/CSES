#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ll i2 = i * i;         // i squared
        ll i4 = i2 * i2;       // i to the fourth power
        ll term1 = i4 - i2;    // (i^4 - i^2)
        ll term2 = 4 * ((i - 2) * (i - 2) + i - 2); // 4 * ( (i-2)^2 + i-2 )
        cout << (term1 / 2 - term2) << endl;
    }
}

//what the problem was initially that i was using pow(x,y)
// that gives me answer in format 1ex+y which the online judge couldn't identify

//literally did pattern rather than logic
//found that it was kc2- some term
//that some term was forming 8*[2nd degree AP]
//calculated 2nd degree AP using [a,b,c] [k2,k,1] and plugging in values
 