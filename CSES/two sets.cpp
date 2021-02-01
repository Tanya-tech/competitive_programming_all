/**********************************************
Author: kushuu   File: two sets.cpp    Date: Fri Aug 07 2020
**********************************************/

#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(long long i = 0; i < n; i++)
#define easyfo(x, n) for(auto i : n)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}



int main() {
    fastIO;
    ll n; cin >> n;
    ll sum = n*(n+1)/2;
    if(sum&1) {
        cout << "NO\n";
    }
    else {
        vll v1, v2;
        sum /= 2;

        while(n) {
            //cout << sum << " " << n << endl;
            if(sum >= n) {
                v1.pb(n);
                sum -= n;
            }
            else {
                v2.pb(n);
            }    
            n--;
            //for(auto i : v1) cout << i << " " ; cout << endl;
            //for(auto i : v2) cout << i << " " ; cout << endl;
        }
        
        cout << "YES\n";
        cout << s(v1) << endl;
        for(auto i : v1)
            cout << i << " " ;
        cout << endl;

        cout << s(v2) << endl;
        for(auto i : v2)
            cout << i << " " ;
    }
    return 0;
}