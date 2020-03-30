#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define rep(i, n)    for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fill(a)  memset(a, 0, sizeof (a))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        // cin >> tt;
    while((tt)--){
        ll n,e; cin >> n >> e;
        vll p(n),b(n);
        vector<pair<ll,ll>> his;
        rep(i,n) cin >> p[i];
        rep(i,n) cin >> b[i],his.pb({p[i],b[i]});
        sort(all(his));
        ll cnt =0;
        rep(i,n){
            if(e>his[i].ff){
                cnt++; e+=his[i].ss;
            }
        }
        cout << cnt << endl;
    }
}
 
