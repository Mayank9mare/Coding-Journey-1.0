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
//#define int long long
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
const int MAXN=3e5+5;
pll tree[4*MAXN];
int A[MAXN];

void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = {A[start],start};
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        if(tree[2*node].first>tree[2*node+1].first){
            tree[node]=tree[2*node];
        }
        else{
            tree[node]=tree[2*node +1];
        }
    }
}

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        A[idx] = val;

        tree[node] = {val,idx};
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        if(tree[2*node].first>tree[2*node+1].first){
            tree[node]=tree[2*node];
        }
        else{
            tree[node]=tree[2*node +1];
        }
    }
}

pll query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return {0,0};
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    pll p1 = query(2*node, start, mid, l, r);
    pll p2 = query(2*node+1, mid+1, end, l, r);
    return (p1.first>p2.first)?p1:p2;
}


int B=550;
vector<vector<int>> adj;
vector<int> euler;
vector<int> a;
vector<int> start;
vector<int> last;
vector<vector<int>> tab;
vector<int> tin;
vector<int> tout;
const int lz=20;
int t=0;
void dfs(int s,int p){
    //cout<<s<<sp<<p<<endl;
    tin[s]=t++;
    tab[s][0]=p;
    start[s]=euler.size();
    euler.pb(a[s]);
    for(int j=1;j<lz;j++){
        tab[s][j]=tab[tab[s][j-1]][j-1];
    }
    for(int x:adj[s]){
        if(x==p)continue;
        dfs(x,s);
    }
    last[s]=euler.size();
    euler.pb(a[s]);
    tout[s]=t++;
}
bool is_ancestor(int x,int y){
    return (tin[x]<=tin[y] && tout[x]>=tout[y]);
}
// int lca(int x,int y){
//     if(ancestor(x,y)){
//         return x;
//     }
//     if(ancestor(y,x)){
//         return y;
//     }
//     for(int i=lz-1;i>=0;i--){
//         if(!ancestor(tab[x][i],y)){
//             cout<<x<<sp<<y<<endl;
//             x=tab[x][i];
//         }
//     }
//     return tab[x][0];

// }

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = lz-1; i >= 0; --i) {
        if (!is_ancestor(tab[u][i], v))
            u = tab[u][i];
    }
    return tab[u][0];
}

void add(int x){
    A[x]^=1;
    update(1,0,MAXN-1,x,A[x]);
    // if(mp[x]==1){
    //     //st.insert(x);
    // }
    // else{
    //     //st.erase(st.find(x));
    // }
}
void remove(int x){
   A[x]^=1;
    update(1,0,MAXN-1,x,A[x]);
}
int find(int lp,int rp){
   pll p=query(1,0,MAXN-1,lp,rp);
   if(p.first==1){
    return p.second;
   }
   return -1;

    
}
int cmp(array<int,7> a,array<int,7> b){
    if(a[2]==b[2]){
        return a[1]<b[1];
    }
    else{
        return a[2]<b[2];
    }
}
int solve(){
    //mem0(mp);
    t=0;
    int n,q;
    cin>>n>>q;
    adj.assign(n,vector<int>(0));
    a.assign(n,0);
    tab.assign(n,vector<int>(lz,0));
    tin.assign(n,0);
    tout.assign(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
start.assign(n,0);
last.assign(n,0);
dfs(0,0);
//cout<<lca(4,5)<<endl;
//cout<<tab[4][1]<<endl;
int b_size=log(euler.size())+1;

//debug(euler);
vector<array<int,7>> qry(q);
for(int i=0;i<q;i++){
    int l,r,u,v;
    cin>>u>>v>>l>>r;
    u--;
    v--;
   // cout<<tab[2][0]<<endl;
    int lc=lca(u,v);
   //debug(lc);
    if(lc==v){
        qry[i][0]=start[v];
        qry[i][1]=start[u];
        qry[i][2]=(start[v])/B;
        qry[i][3]=-1;
        qry[i][4]=i;
        qry[i][5]=l;
        qry[i][6]=r;


    }
    else if(lc==u){
        qry[i][0]=start[u];
        qry[i][1]=start[v];
        qry[i][2]=(start[u])/B;
        qry[i][3]=-1;
        qry[i][4]=i;
        qry[i][5]=l;
        qry[i][6]=r;

    }
    else{
        if(last[v]<start[u]){
            qry[i][0]=last[v];
            qry[i][1]=start[u];
            qry[i][2]=(last[v])/B;
            qry[i][3]=lc;


        }
        else{
            qry[i][0]=last[u];
            qry[i][1]=start[v];
            qry[i][2]=(last[u])/B;
            qry[i][3]=lc;

        }
        qry[i][4]=i;
        qry[i][5]=l;
        qry[i][6]=r;

       
    

    }
   


}
 sort(all(qry),cmp);
   // debug(qry);
    // for(auto x:qry){
    //     cout<<"l= "<<x[0]<<sp;
    //     cout<<"r= "<<x[1]<<sp;
    //     cout<<"bno= "<<x[2]<<sp;
    //     cout<<"lc= "<<x[3]<<sp;
    //     cout<<"i= "<<x[4]<<sp;
    //     nl;
    // }
int l=0,r=0;
add(euler[0]);
vector<int> ans(q);
for(auto x:qry){
    int curL=x[0];
    int curR=x[1];
    int i=x[4];
    int lc=x[3];
    int lp=x[5];
    int rp=x[6];
    while(curL<l){
        l--;
        add(euler[l]);
    }
    while(curR>r){
        r++;
        add(euler[r]);
    }
    while(curL>l){
        remove(euler[l]);
        l++;
    }
    while(curR<r){
        remove(euler[r]);
        r--;

    }
    if(lc!=-1){
        add(a[lc]);
    }
    ans[i]=find(lp,rp);
    if(lc!=-1){
        remove(a[lc]);
    }

}
for(auto x:ans){
    cout<<x<<endl;

}
nl;
// debug(start);
// debug(last);

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
