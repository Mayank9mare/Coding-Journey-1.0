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
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid

class sd{
    public:
    int n,bcnt,bsz;
    vector<int> a,bl,br,bno;
    vector<vector<int>> bv;
    sd(int _n,vector<int> &a1){
        n=_n;
        a=a1;
        bsz=sqrt(n);//change for every question
        bcnt=(n+bsz-1)/bsz;
        //a.resize(n,0);
        bv.resize(bcnt);
        bl.resize(bcnt,-1);
        br.resize(bcnt,0);
        bno.resize(n,0);

        for(int i=0;i<n;i++){
            bno[i]=i/bsz;
            if(bl[bno[i]]==-1){
                bl[bno[i]]=i;//left end of block
            }
            br[bno[i]]=i;//right end of block
            bv[bno[i]].pb(a[i]);
        }
        for(int i=0;i<bcnt;i++){
            sort(all(bv[i]));
        }


    }
    // int qry(int l,int r){
    //     int ans=0;
    //     if(bno[l]==bno[r]){
    //         for(int i=l;i<=r;i++){
    //             ans+=a[i];
    //         }
    //     }
    //     else{
    //         for(int i=l;i<=br[bno[l]];i++){
    //             ans+=a[i];
    //         }
    //         for(int i=bno[l]+1;i<bno[r];i++){
    //             ans+=bval[i];
    //         }
    //         for(int i=bl[bno[r]];i<=r;i++){
    //             ans+=a[i];
    //         }
    //     }
    //     return ans;
    // }
    void upd(int j,int x){
        bv[bno[j]].clear();
        //bval[j]-=a[i];
        a[j]=x;
        for(int i=bl[bno[j]];i<=br[bno[j]];i++){
            bv[bno[j]].pb(a[i]);
        }
        sort(all(bv[bno[j]]));
        //bval[j]+=a[i];
    }
    int qry(int l,int r,int k){
        int c=0;
        if(bno[l]==bno[r]){
            for(int i=l;i<=r;i++){
                if(a[i]>=k)c++;
            }

        }
        else{
            for(int i=l;i<=br[bno[l]];i++){
                if(a[i]>=k)c++;
            }
            for(int i=bno[l]+1;i<bno[r];i++){
                c+=bv[i].end()-lower_bound(all(bv[i]),k);
            }
            for(int i=bl[bno[r]];i<=r;i++){
                if(a[i]>=k)c++;
            }
        }
        return c;
    }

};
int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    map<int,int> m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>=0;i--){
        if(m.find(a[i])==m.end()){
            b[i]=n+1;
            m[a[i]]=i;
        }
        else{
            b[i]=m[a[i]];
            m[a[i]]=i;
        }
    }
    sd p(n,b);
    int q;
    cin>>q;
    while(q--){
        
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            cout<<p.qry(l,r,r+1)<<endl;



        
        
    }

    return 0;

}


signed main()
{
    minato;
  solve();

    return 0;
}
