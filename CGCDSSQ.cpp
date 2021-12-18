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
#define mod 1000000007
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
//KnightMareVoid
const int N=100001;
const int M=21;
int tab[N+1][M+1];
int a[N+1];
int L[N+1];
class st{
    public:
    int n;
    st(int _n){
        //cout<<_n<<endl;
        n=_n;
    }
    int f(int x,int y){
        return gcd(x,y);
    }
    void build(){
        for(int i=2;i<=N;i++){
            L[i]=L[i/2]+1;
        }
        for(int i=0;i<n;i++){
            tab[i][0]=a[i];
        }
        for(int j=1;j<=M;j++){
            for(int i=0;i<n;i++){
                if(i+(1LL<<j)-1<n){
                    tab[i][j]=f(tab[i][j-1],tab[i+(1LL<<(j-1))][j-1]);
                }
            }
        }
    }

    int qry(int l,int r){ //for non-idempotent
        int len=r-l+1;
        int idx=l;
        int tot=INT_MAX;
        for(int j=M;j>=0;j--){
            if(len&(1LL<<j)){
                tot=f(tot,tab[idx][j]);
                idx+=(1LL<<j);
            }
        }
        return tot;

    }
    int qry2(int l,int r){// for idempotent functions
      int lg=(int)L[(r-l+1)];
      return f(tab[l][lg],tab[r-(1<<lg)+1][lg]);

    }


};
int solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    st s(n);
    s.build();
    map<int,int> m;
    for(int i=0;i<n;i++){
        int idx=i;
        while(idx<n){
        int l=idx,r=n;
        while(l+1<r){
            int mid=(l+r)/2;
            if(s.qry2(i,mid)==s.qry2(i,idx)){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        m[s.qry2(i,idx)]+=(l-idx+1);
        idx=r;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<m[x]<<endl;
    }

    return 0;

}
int solve2(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int> ans;
    unordered_map<int,int> cur_freq;
    for(int i=0;i<n;i++){
        unordered_map<int,int> new_freq;
        for(auto &c:cur_freq){
            new_freq[gcd(c.first,a[i])]+=c.second;
        }
        new_freq[a[i]]++;
        for(auto &c :new_freq){
            ans[c.first]+=c.second;
        }
        swap(new_freq,cur_freq);


    } 
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<ans[x]<<endl;
    }
    return 0;

}


signed main()
{
    minato;
    solve2();


    return 0;
}
