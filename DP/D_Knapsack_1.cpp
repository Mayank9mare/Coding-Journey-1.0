#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
#define mod 1000000007
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;


ll dp[101][100001];

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    ll n,w;
    cin>>n>>w;
    ll w1[n+1];
    
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>w1[i]>>a[i];
    }
    
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
           dp[i][j]=dp[i-1][j];
                if(j-w1[i]>=0){
            
                    dp[i][j]=max(dp[i-1][j-w1[i]]+a[i],dp[i][j]);
                    //cout<<dp[i][j]<<endl;
                
                

        }
    }
    }
ll ans=0;
    for(int i=0;i<=w;i++){
        ans=max(dp[n][i],ans);
    }
    cout<<ans<<endl;


    return 0;
}
