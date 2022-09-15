


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
#define mod 1000000007//998244353
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
#define endl "\n"
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};


using namespace std;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef KNIGHTMARE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//KnightMareVoid

//problem: https://www.spoj.com/problems/MAXMATCH/
using cd = complex<double>;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w1(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w1 * a1[i];
        a[i + n/2] = a0[i] - w1 * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w1 *= wn;
    }
}
vector<int> multiply(vector<int>& a, vector<int>& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    result.resize(a.size()+b.size()-1);
    return result;
}

vector<int> cal(vector<int> a){
    int n=a.size();
    vector<int> v=a;
    for(int i=0;i<n;i++){
        v.pb(0);
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
        a.pb(0);
    }
    vector<int> c=multiply(a,v);
    return c;

}
int solve(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            a.pb(1);
            b.pb(0);
            c.pb(0);
        }
        else if(s[i]=='b'){
            a.pb(0);
            b.pb(1);
            c.pb(0);
        }
        else{
            a.pb(0);
            b.pb(0);
            c.pb(1);
        }
    }
    vector<int> a1=cal(a);
    vector<int> a2=cal(b);
    vector<int> a3=cal(c);
    int ans=-1;
    int j=-1;
    int k=0;
    vector<int> v;
    for(int i=n;i<2*n-1;i++){
        k++;
        int p=a1[i]+a2[i]+a3[i];
       // cout<<p<<endl;
        if(p>ans){
            ans=p;
            j=k;
        }

    }
    k=0;
    for(int i=n;i<2*n-1;i++){
        k++;
        int p=a1[i]+a2[i]+a3[i];
       // cout<<p<<endl;
        if(p==ans){
            v.pb(k);
        }

    }
    
    cout<<ans<<endl;
    for(auto x:v){
        cout<<x<<sp;
    }
    nl;
    return 0;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
    //w(t)
    solve();


    return 0;
}
