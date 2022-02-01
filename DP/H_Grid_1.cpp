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
ll dp[1001][1001];



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int h,w;
cin>>h>>w;
char a[h+1][w+1];
for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
        cin>>a[i][j];
    }

}
for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
        if(i==1 &&j==1){
                dp[i][j]=1;
            }
       
        
        if(a[i][j]!='#'){
           
            
           
            
                if(i>1 &&j>1){
                  dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
                }
                else if(i>1){
                    dp[i][j]=(dp[i-1][j])%mod;
                }
                else if(j>1){
                    dp[i][j]=(dp[i][j-1])%mod;
                }
            
        
        }
        else{
            dp[i][j]=0;
        }
        
        

    }
}
cout<<(dp[h][w])%mod<<endl;

  
   

    return 0;
}
