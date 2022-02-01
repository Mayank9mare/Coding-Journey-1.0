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
    
    //cout<<dp[0][0]<<endl;
    for(int i=1;i<=n;i++){
        cin>>w1[i]>>a[i];
    }
     //min weight to reach this value form 1...i items
    for(int i=0;i<=n;i++){
        for(int j=0;j<=100000;j++){
            dp[i][j]=mod;
            if(j==0){
                dp[i][j]=0;
            }
        }
    }
    //cout<<dp[0][0]<<endl;

    
    for(int i=1;i<=n;i++){
        for(ll j=1;j<=100000;j++){
            dp[i][j]=dp[i-1][j];
            if(j-a[i]>=0){
                dp[i][j]=min(dp[i][j],w1[i]+dp[i-1][j-a[i]]);
            }
        }


       
    }
    
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=100000;j++){
            
                if(dp[i][j]<=w){
                    ans=max(ans,j);
                }
            
        }
    }
    cout<<ans<<endl;



    return 0;
}
