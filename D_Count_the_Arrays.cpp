
#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
//#define mod 1000000007
#define sp " "
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 998244353
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;
#define minato ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
//#define endl "\n"
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const int MAX=2e5+10;
ll fac[MAX];
ll infact[MAX];
int modu(ll x){
while(x<0)
  x+=mod;
return (x%mod);
}
ll power(ll x,ll y){
    ll p=mod;
    ll res =1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
            y=y>>1;
            x=(x*x)%p;
        }
        return res;

    
}
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(ll n,ll r){
    if(r>n)return 0;
    if(r==n)return 1;
    ll p=mod;
    if(r==0){
        return 1;
    }
    //cout<<1<<endl;
    
  
    return(fac[n]%mod*(infact[r])%p*(infact[n-r])%p)%mod;

}
void preprocess(){
    fac[0]=1;
    infact[0]=1;
    //cout<<1<<endl;
    for(int i=1;i<MAX;i++){
        fac[i]=(fac[i-1]%mod*i%mod)%mod;
        infact[i]=(ll)infact[i - 1] * power(i, mod - 2) % mod;
        //cout<<fac[i]<<sp;
    }
}
int solve(){
    int n,m;
    cin>>n>>m;
    int ch=nCrModFermat(m,n-1)%mod;
    ch=ch*(n-2)%mod;
    ch=(ch*power(2,n-3))%mod;
    cout<<ch<<endl;


    
    return 0;

}


signed main()
{
    minato;
    preprocess();
   solve();


    return 0;
}
