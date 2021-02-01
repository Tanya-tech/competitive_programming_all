#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll N; cin >> N;
        ll speeds[N]; for(ll i = 0; i < N; i++) cin >> speeds[i];
        ll count = 1;
        for(ll i = 1; i < N; i++)
            if(speeds[i] <= speeds[i-1])
                count++;
            else
                speeds[i] = speeds[i-1];

        cout << count << endl;
    }
    return 0;
}