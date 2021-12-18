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
//#define endl "\n"
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const int N=1000;
const int M=10;
int tab[N+1][N+1][M+1][M+1];
int a[N+1][N+1];
int L[N+1];
class st2{
    public:
    int n,m;
    st2(int x,int y){
        n=x;
        m=y;
        for(int i=2;i<=N;i++){
            L[i]=L[i/2]+1;
        }

    }
    int f(int x,int y,int z=0,int w=0){
        return max({x,y,z,w});
        
    }
    
    void build(){

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                tab[i][j][0][0]=a[i][j];
            }
        }
        for(int x=1;x<=M;x++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i+(1<<x)-1<n){
                    tab[i][j][x][0]=f(tab[i][j][x-1][0],tab[i+(1LL<<(x-1))][j][x-1][0]);
                    }
                }
            }
        }
        for(int y=1;y<=M;y++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(j+(1<<y)-1<m){
                    tab[i][j][0][y]=f(tab[i][j][0][y-1],tab[i][j+(1LL<<(y-1))][0][y-1]);
                    }
                }
            }
        }
        for(int x=1;x<=M;x++){
            for(int y=1;y<=M;y++){
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(i+(1<<x)-1<n && j+(1<<y)-1<m){
                        tab[i][j][x][y]=f(tab[i][j][x-1][j-1],tab[i][j+(1<<(y-1))][x-1][y-1],
                        tab[i+(1<<(x-1))][j][x-1][y-1],tab[i+(1<<(x-1))][j+(1<<(y-1))][x-1][y-1]);
                        }
                    }
                }
            }
        }
    }
    int qry_i(int i,int j,int p,int q){//idempotent function
        int x=L[p-i+1];
        int y=L[q-j+1];
        return f(tab[i][j][x][y],
                 tab[p-(1<<x)+1][j][x][y],
                 tab[i][q-(1<<y)+1][x][y] ,
                 tab[p-(1<<x)+1][q-(1<<y)+1][x][y]);

    }

};


int solve(){
    return 0;

}


int main()
{
    minato;
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
