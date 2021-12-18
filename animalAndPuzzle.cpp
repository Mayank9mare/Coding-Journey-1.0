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
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const int N = 1000;
const int M = 10;

int tab[M+1][M+1][N+1][N+1];
int dp[N+1][N+1];
int L[N+1];
//int s[N+1][N+1];

struct st2{
    int n,m;

    st2(int _n,int _m){
        n=_n;
        m=_m;

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
                tab[0][0][i][j]=dp[i][j];
            }
        }

        for(int x=1;x<=M;x++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i+(1<<x)-1<n){
                        tab[x][0][i][j]=f(tab[x-1][0][i][j],tab[x-1][0][i+(1<<(x-1))][j]);
                    }
                }
            }
        }

        for(int y=1;y<=M;y++){
            for(int i =0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(j+(1<<y)-1<m){
                        tab[0][y][i][j]=f(tab[0][y-1][i][j],tab[0][y-1][i][j+(1<<(y-1))]);
                    }
                }
            }
        }

        for(int x=1;x<=M;x++){
            for(int y=1;y<=M;y++){
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(i+(1<<x)-1<n && j+(1<<y)-1<m){
                            tab[x][y][i][j]=f(
                                    tab[x-1][y-1][i][j],
                                    tab[x-1][y-1][i+(1<<(x-1))][j],
                                    tab[x-1][y-1][i][j+(1<<(y-1))],
                                    tab[x-1][y-1][i+(1<<(x-1))][j+(1<<(y-1))]
                                    );
                        }
                    }
                }
            }
        }
    }
    int qry_i(int i,int j,int p,int q){
        int x=L[p-i+1];
        int y=L[q-j+1];
        return f(
                tab[x][y][i][j],
                tab[x][y][p-(1<<x)+1][j],
                tab[x][y][i][q-(1<<y)+1],
                tab[x][y][p-(1<<x)+1][q-(1<<y)+1]
                );
    }
};

bool func(int k,int x1, int y1,int x2,int y2, st2 &st){
    return st.qry_i(x1+k-1,y1+k-1,x2,y2)>=k;

     
}
int solve(){
    int n,m;
    cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>dp[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(dp[i][j]==1){
            dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            }
        }
    }
    st2 st(n,m);
    st.build();
    int q;
    cin>>q;
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        x2--;
        y2--;
        int l=0;
        int r=min(x2-x1+1,y2-y1+1)+1;
        while(l+1<r){
            int mid=(l+r)/2;
            int val=st.qry_i(x1+mid-1,y1+mid-1,x2,y2);
            if(val>=mid){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<endl;
    }

    return 0;

}


int main()
{
    minato;
   solve();


    return 0;
}
