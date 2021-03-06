/**********************************************
Author: kushuu   File: balanced brackets.cpp    Date: Sat Aug 22 2020
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

void showstack(stack<char> s) 
{ 
    string temp;
    while (!s.empty()) 
    { 
        temp += s.top(); 
        s.pop(); 
    } 
    reverse(temp.begin(), temp.end());
    cout << temp << endl; 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        string brackets; cin >> brackets;
        if( s(brackets)&1 ) {
            cout << "NO" << endl;
            continue;
        }
        else {
            //cout << "1";
            stack<char> check;
            check.push(brackets[0]);
            //cout << "2\n";
            fo(i, s(brackets)) {
                if(brackets[i] == '{' || brackets[i] == '[' || brackets[i] == '(')
                    check.push(brackets[i]);
                else {
                    if(brackets[i] == ')' && check.top() != '(')
                        cout << "NO" << endl;
                    else if(brackets[i] == ']' && check.top() != '[')
                        cout << "NO" << endl;
                    else if(brackets[i] == '}' && check.top() != '{')
                        cout << "NO" << endl;
                    else
                        check.pop();
                }
            }

            showstack(check);

            if(check.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}