/**********************************************
Author: kushuu   File: riddle99.cpp    Time: Tue Aug 04 2020
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
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll a, b, m; cin >> a >> b >> m;
        //cout << (b-a+1)/m + (b-a+1)%m << endl;
        if(a%m == 0) cout << b/m - a/m + 1 << endl;
        else    cout << b/m - a/m << endl;
    }
    return 0;
}