//                           ,;;;;;;,
//                                 ,;;;'""`;;\
//                               ,;;;/  .'`',;\
//                             ,;;;;/   |    \|_
//                            /;;;;;    \    / .\
//                          ,;;;;;;|     '.  \/_/
//                         /;;;;;;;|       \
//              _,.---._  /;;;;;;;;|        ;   _.---.,_
//            .;;/      `.;;;;;;;;;|         ;'      \;;,
//          .;;;/         `;;;;;;;;;.._    .'         \;;;.
//         /;;;;|          _;-"`       `"-;_          |;;;;\
//        |;;;;;|.---.   .'  __.-"```"-.__  '.   .---.|;;;;;|
//        |;;;;;|     `\/  .'/__\     /__\'.  \/`     |;;;;;|
//        |;;;;;|       |_/ //  \   //  \ \_|       |;;;;;|
//        |;;;;;|       |/ |/    || ||    \| \|       |;;;;;|
//         \;;;;|    __ || _  .-.\| |/.-.  _ || __    |;;;;/
//          \jgs|   / _\|/ = /_o_\   /_o_\ = \|/_ \   |;;;/
//           \;;/   |`.-     `   `   `   `     -.`|   \;;/
//          _|;'    \ |    _     _   _     _    | /    ';|_
//         / .\      \_  ( '--'(     )'--' )  _//      /. \
//         \/_/       \_/|  /_   |   |   _\  |\_/       \_\/
//                       | /|\  \   /  //|\ |
//                       |  | \'._'-'_.'/ |  |
//                       |  ;  '-.```.-'  ;  |
//                       |   \    ```    /   |
//     __                ;    '.-"""""-.'    ;                __
//    /\ \_         __..--\     `-----'     /--..__         _/ /\
//    \_'/\`''---''`..;;;;.'.__,       ,__.',;;;;..`''---''`/\'_/
//         '-.__'';;;;;;;;;;;,,'._   _.',,;;;;;;;;;;;''__.-'
//              ``''--; ;;;;;;;;..`"`..;;;;;;;; ;--''``   _
//         .-.       /,;;;;;;;';;;;;;;;;';;;;;;;,\    _.-' `\
//       .'  /_     /,;;;;;;'/| ;;;;;;; |\';;;;;;,\  `\     '-'|
//      /      )   /,;;;;;',' | ;;;;;;; | ',';;;;;,\   \   .'-./
//      `'-..-'   /,;;;;','   | ;;;;;;; |   ',';;;;,\   `"`
//               | ;;;','     | ;;;;;;; |  ,  ', ;;;'|
//              _\__.-'  .-.  ; ;;;;;;; ;  |'-. '-.__/_
//             / .\     (   )  \';;;;;'/   |   |    /. \
//             \/_/   (`     `) \';;;'/    '-._|    \_\/
//                     '-/ \-'   '._.'         `
//                       """      /.`\
//                                \|_/


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
// #define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
//#define mod 998244353
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
template<class T, class T2> inline void chkmax(T &x, const T2 &y) { if (x < y) x = y; }
template<class T, class T2> inline void chkmin(T &x, const T2 &y) { if (x > y) x = y; }
const int MAXN = (1 << 19);
using cd = complex<double>;
const double PI = acos(-1);
int mod=998244353;
inline void addmod(int& x, int y, int mod) { (x += y) >= mod && (x -= mod); }
inline int mulmod(int x, int y, int mod) { return x * 1ll * y % mod; }

struct complex_base
{
	long double x, y;
	complex_base(long double _x = 0, long double _y = 0) { x = _x; y = _y; }
	friend complex_base operator-(const complex_base &a, const complex_base &b) { return complex_base(a.x - b.x, a.y - b.y); }
	friend complex_base operator+(const complex_base &a, const complex_base &b) { return complex_base(a.x + b.x, a.y + b.y); }
	friend complex_base operator*(const complex_base &a, const complex_base &b) { return complex_base(a.x * b.x - a.y * b.y, a.y * b.x + b.y * a.x); }
	friend void operator/=(complex_base &a, const long double &P) { a.x /= P; a.y /= P; }
};

int bit_rev[MAXN];

void fft(complex_base *a, int lg)
{
	int n = (1 << lg);
	for (int i = 1; i < n; i++)
	{
		bit_rev[i] = (bit_rev[i >> 1] >> 1) | ((i & 1) << (lg - 1));
		if (bit_rev[i] < i) swap(a[i], a[bit_rev[i]]);
	}

	for (int len = 2; len <= n; len <<= 1)
	{
		long double ang = 2 * PI / len;
		complex_base w(1, 0), wn(cos(ang), sin(ang));
		for (int j = 0; j < (len >> 1); j++, w = w * wn)
			for (int i = 0; i < n; i += len)
			{
				complex_base u = a[i + j], v = w * a[i + j + (len >> 1)];
				a[i + j] = u + v;
				a[i + j + (len >> 1)] = u - v;
			}
	}
}

void inv_fft(complex_base *a, int lg)
{
	int n = (1 << lg);
	for (int i = 1; i < n; i++)
	{
		bit_rev[i] = (bit_rev[i >> 1] >> 1) | ((i & 1) << (lg - 1));
		if (bit_rev[i] < i) swap(a[i], a[bit_rev[i]]);
	}

	for (int len = 2; len <= n; len <<= 1)
	{
		long double ang = -2 * PI / len;
		complex_base w(1, 0), wn(cos(ang), sin(ang));

		for (int j = 0; j < (len >> 1); j++, w = w * wn)
			for (int i = 0; i < n; i += len)
			{
				complex_base u = a[i + j], v = w * a[i + j + (len >> 1)];
				a[i + j] = u + v;
				a[i + j + (len >> 1)] = u - v;
			}
	}

	for (int i = 0; i < n; i++)
		a[i] /= n;
}

complex_base A[MAXN], B[MAXN];

vector<int> mult(const vector<int> &a, const vector<int> &b)
{
	if (a.size() * b.size() <= 128)
	{
		vector<int> ans(a.size() + b.size(), 0);
		for (int i = 0; i < (int)a.size(); i++)
			for (int j = 0; j < (int)b.size(); j++)
				ans[i + j] = (ans[i + j] + a[i] * 1ll * b[j]) % mod;

		return ans;
	}

	int lg = 0; while ((1 << lg) < (a.size() + b.size())) ++lg;
	for (int i = 0; i < (1 << lg); i++) A[i] = B[i] = complex_base(0, 0);
	for (int i = 0; i < (int)a.size(); i++) A[i] = complex_base(a[i], 0);
	for (int i = 0; i < (int)b.size(); i++) B[i] = complex_base(b[i], 0);

	fft(A, lg); fft(B, lg);
	for (int i = 0; i < (1 << lg); i++)
		A[i] = A[i] * B[i];
	inv_fft(A, lg);

	vector<int> ans(a.size() + b.size(), 0);
	for (int i = 0; i < (int)ans.size(); i++)
		ans[i] = (int64_t)(A[i].x + 0.5) % mod;

	return ans;
}

vector<int> mult_mod(const vector<int> &a, const vector<int> &b)
{
	/// Thanks pavel.savchenkov

	// a = a0 + sqrt(MOD) * a1
	// a = a0 + base * a1
	int base = (int)sqrtl(mod);

	vector<int> a0(a.size()), a1(a.size());
	for (int i = 0; i < (int)a.size(); i++)
	{
		a0[i] = a[i] % base;
		a1[i] = a[i] / base;
	}

	vector<int> b0(b.size()), b1(b.size());
	for (int i = 0; i < (int)b.size(); i++)
	{
		b0[i] = b[i] % base;
		b1[i] = b[i] / base;
	}

	vector<int> a01 = a0;
	for (int i = 0; i < (int)a.size(); i++)
		addmod(a01[i], a1[i], mod);

	vector<int> b01 = b0;
	for (int i = 0; i < (int)b.size(); i++)
		addmod(b01[i], b1[i], mod);

	vector<int> C = mult(a01, b01);  // 1

	vector<int> a0b0 = mult(a0, b0); // 2
	vector<int> a1b1 = mult(a1, b1); // 3

	vector<int> mid = C;
	for (int i = 0; i < (int)mid.size(); i++)
	{
		addmod(mid[i], -a0b0[i] + mod, mod);
		addmod(mid[i], -a1b1[i] + mod, mod);
	}

	vector<int> res = a0b0;
	for (int i = 0; i < (int)res.size(); i++)
		addmod(res[i], mulmod(base, mid[i], mod), mod);

	base = mulmod(base, base, mod);
	for (int i = 0; i < (int)res.size(); i++)
		addmod(res[i], mulmod(base, a1b1[i], mod), mod);

	return res;
}
struct Matrix
{
    vector<int> mat; // the contents of matrix as a 2D-vector
    int k;

    Matrix(vector<int> values,int k1){

        mat=values;
        k=k1;
    }

 

    Matrix operator*(const Matrix &other) const 
    {
        vector<int> r=mult_mod(mat,other.mat);
        debug(r);
        vector<int> v(k,0);
        for(int i=0;i<r.size();i++){
            v[(i%k)]+=r[i];
            v[(i%k)]%mod;
        }
        return Matrix(v,k);
    }
   
};

Matrix fast_exponentiation(Matrix m, int power)
{
    int f=0;
    int n=m.k;
    vector<int> v(n,1);
    Matrix result(v,n);

    while(power) {
        if(power & 1){
            if(f==0){
                f=1;
                result=m;
            }
            else{
                result = result * m;
            }
        }
        m = m * m;
        power >>= 1;
    }

    return result;
}
int solve(){
    int n,p,k;
    cin>>n>>p>>k;
    int m;
    cin>>m;
    int a[m];
    vector<int> dp(k,0);
    dp[0]=1;
    vector<int> v(k,0);
    vector<int> v2(k,0);
    for(int i=0;i<m;i++){
        cin>>a[i];
        a[i]%=k;
        v[a[i]]++;
    }
    for(int i=1;i<=p;i++){
        v2[(i%k)]++;
    }
    for(int i=0;i<k;i++){
        v[i]=v2[i]-v[i];
    }

   
    
        vector<int> v1;

        vector<int> dp2(k,0);
        for(int j=0;j<k;j++){
            v1.pb(dp[j]%mod);
            
        }
        Matrix x1=Matrix(dp,k);
        Matrix x2=Matrix(v2,k);
        Matrix x=fast_exponentiation(x2,n);
        x=x*x1;
        for(int i=0;i<x.mat.size();i++){
            dp2[(i%k)]+=x.mat[i]%mod;
        }
        dp=dp2;
        int ans=dp[0]%mod;
        dp.assign(k,0);
        dp[0]=1;
        v1.clear();
        dp2.assign(k,0);
        for(int j=0;j<k;j++){
            v1.pb(dp[j]);
            
        }
        x1=Matrix(dp,k);
        x2=Matrix(v,k);
        x=fast_exponentiation(x2,n);
        x=x*x1;
       
        for(int i=0;i<x.mat.size();i++){
            dp2[(i%k)]+=x.mat[i];
        }
        dp=dp2;


    ans=(ans-dp[0]+mod)%mod;
    cout<<ans<<endl;
    //cout<<dp[0]<<endl;
    


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