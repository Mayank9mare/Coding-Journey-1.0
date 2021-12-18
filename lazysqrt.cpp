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
class sd{
    public:
    int n,bcnt,bsz;
    vector<int> a,bval,bl,br,bno,lazy;
    sd(int _n){
        n=_n;
        bsz=sqrt(n);//change for every question
        bcnt=(n+bsz-1)/bsz;
        a.resize(n,0);
        bval.resize(bcnt,0);
        bl.resize(bcnt,-1);
        br.resize(bcnt,0);
        bno.resize(n,0);
        lazy.resize(bcnt,0);

        for(int i=0;i<n;i++){
            bno[i]=i/bsz;
            if(bl[bno[i]]==-1){
                bl[bno[i]]=i;//left end of block
            }
            br[bno[i]]=i;//right end of block
            bval[bno[i]]+=a[i];
        }


    }
    void prop(int block_no){
        if(lazy[block_no]==0){
            return;
        }
        for(int i=bl[block_no];i<=br[block_no];i++){
            a[i]+=lazy[block_no];
            bval[bno[i]]+=lazy[block_no];
        }
        lazy[block_no]=0;
    }
    int qry(int l,int r){
        int ans=0;
        if(bno[l]==bno[r]){
            prop(bno[l]);
            for(int i=l;i<=r;i++){
                ans+=a[i];
                //ans+=lazy[bno[i]];
            }
        }
        else{
            prop(bno[l]);
            for(int i=l;i<=br[bno[l]];i++){
                ans+=a[i];
                //ans+=lazy[bno[i]];
            }
            for(int i=bno[l]+1;i<bno[r];i++){
                ans+=bval[i];
                ans+=(lazy[i]*(br[i]-bl[i]+1));
            }
            prop(bno[r]);
            for(int i=bl[bno[r]];i<=r;i++){
                ans+=a[i];
                //ans+=lazy[bno[i]];
            }
        }
        return ans;
    }
    void upd(int l,int r,int x){
             //int ans=0;

        if(bno[l]==bno[r]){
            prop(bno[l]);
            for(int i=l;i<=r;i++){
                a[i]+=x;
                bval[bno[l]]+=x;
            }
        }
        else{
            prop(bno[l]);
            for(int i=l;i<=br[bno[l]];i++){
                a[i]+=x;
                bval[bno[l]]+=x;
            }
            for(int i=bno[l]+1;i<bno[r];i++){
                lazy[i]+=x;
            }
            prop(bno[r]); 
            for(int i=bl[bno[r]];i<=r;i++){
                a[i]+=x;
                bval[bno[r]]+=x;
            }
        }
        
      
    }

};
int solve(){
    int n,q;
    cin>>n>>q;
    //vector<int> a(n,0);
    sd s(n);
    while(q--){
        int t;cin>>t;
        if(t==0){
            int l,r,k;
            cin>>l>>r>>k;
            l--;r--;
            s.upd(l,r,k);
        }
        else{
            int l,r;
            cin>>l>>r;
            l--;r--;
            cout<<s.qry(l,r)<<endl;
        }
    }

    return 0;

}


signed main()
{
    minato;
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
