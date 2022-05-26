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

//Tutorial : https://blog.anudeep2011.com/heavy-light-decomposition/

// HLD(curNode, Chain):
//     Add curNode to curChain
//     If curNode is LeafNode: return                    //Nothing left to do
//     sc := child node with maximum sub-tree size       //sc is the special child
//     HLD(sc, Chain)                                    //Extend current chain to special child
//     for each child node cn of curNode:                //For normal childs
//         if cn != sc: HLD(cn, newChain)                //As told above, for each normal child, a new chain starts



const int MAXN=2e5+5;
int n;
vector<int> tree;
vector<int> A;
vector<int> HEAD;
vector<int> location;

vector<int> cost;

vector<vector<int>> adj;
vector<int> tin;
vector<int> tout;
vector<vector<int>> tab;
vector<int> subtree;
int m=31;
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node],tree[2*node+1]);
    }
}

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        A[idx] = val;
        tree[node] = val;
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
        tree[node] = max(tree[2*node],tree[2*node+1]);
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(l==r)return A[l];
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(p1,p2);
}

int tx=0;
vector<int> dep;
void dfs(int u,int p){
    tin[u]=tx++;
    tab[u][0]=p;
    subtree[u]=1;
    
    for(int i=1;i<m;i++){
        tab[u][i]=tab[tab[u][i-1]][i-1];
    }
    for(int x:adj[u]){
        if(x==p)continue;
        dep[x]=dep[u]+1;
        dfs(x,u);

        subtree[u]+=subtree[x];

    }
    tout[u]=tx++;
    
}
int ancestor(int x,int y){
    return (tin[x]<=tin[y] && tout[x]>=tout[y]);
}
int lca(int x,int y){
    if(ancestor(x,y))return x;
    if(ancestor(y,x))return y;
    for(int i=m-1;i>=0;i--){
        if(!ancestor(tab[x][i],y)){
            x=tab[x][i];
        }
    }
    return tab[x][0];
 
}
// int lca(int a,int b){
//  	if(dep[a] < dep[b]) swap(a, b);
// 	for(int d=m-1; d>=0; d--) {
// 		if(dep[a] - (1<<d) >= dep[b]) {
// 			a = tab[a][d];
// 		}
// 	}
// 	for(int d=m-1; d>=0; d--) {
// 		if(tab[a][d] != tab[b][d]) {
// 			a = tab[a][d];
// 			b = tab[b][d];
// 		}
// 	}
// 	if(a != b) {
// 		a = tab[a][0];
// 		b = tab[b][0];
// 	}
// 	return a;

// }
int ptr=0;
int chainno=0;
vector<int> chain;
void hld(int cur,int p){
    //debug(cur);
    if(HEAD[chainno]==-1){
        //debug(cur);
        HEAD[chainno]=cur;
    }
    chain[cur]=chainno;

    A[ptr]=cost[cur];
    location[cur]=ptr++;
    int sz=-1;
    int val=-1;
    for(int x:adj[cur]){
        if(x==p)continue;
        if(subtree[x]>sz){
            sz=subtree[x];
            val=x;
        }
    }
    if(val==-1)return;
    hld(val,cur);
    for(int x:adj[cur]){
        if(x==p || x==val)continue;
        chainno++;
        hld(x,cur);
    }





}
// int query_up(int x,int y){
//     //debug(x);
//     //debug(y);
    
//     int lc=lca(x,y);
//     debug(lc);
//     int q=INT_MIN;
   
//     while(chain[x]!=chain[y]){
//          debug(x);
//          debug(y);
//         int q1,q2;
//         if(chain[lc]==chain[x]){
        
//             q1=query(1,0,ptr-1,location[lc],location[x]);
//             x=lc;

//         }
//         else{
//             q1=query(1,0,ptr-1,location[HEAD[chain[x]]],location[x]);
//             x=HEAD[chain[x]];
//             x=tab[x][0];

//         }
//         if(chain[lc]==chain[y]){
//             q2=query(1,0,ptr-1,location[lc],location[y]);
//             y=lc;

//         }
//         else{
//             q2=query(1,0,ptr-1,location[HEAD[chain[y]]],location[y]);
//             y=HEAD[chain[y]];
//             y=tab[y][0];

//         }
//         debug(x);
//         debug(y);
//         q=max({q,q1,q2});
      

//     }
//     if(x>y)swap(x,y);
//     int z=query(1,0,ptr-1,location[x],location[y]);
//     //debug(z);
//     return max(q,query(1,0,ptr-1,location[x],location[y]));

// }
int query2(int x,int lc){
    if(lc==x)return A[location[x]];
    int q=0;
    while(HEAD[chain[lc]]!=HEAD[chain[x]]){
        int y=HEAD[chain[x]];
        q=max(q,query(1,0,ptr-1,location[y],location[x]));
        x=tab[y][0];


    }
    q=max(q,query(1,0,ptr-1,location[lc],location[x]));
    return q;
}


int solve(){
    int q;
    cin>>n>>q;
    cost.assign(n,0);
    dep.assign(n,0);
    for(int i=0;i<n;i++)cin>>cost[i];
    A.assign(n,0);
    tree.assign(4*n,0);
    location.assign(n+1,0);
    HEAD.assign(n,-1);
    chain.assign(n,0);
    tx=0;
    ptr=0;
    chainno=0;
    adj.assign(n,vector<int>(0));
    tab.assign(n,vector<int>(m,0));
    tin.assign(n,0);
    tout.assign(n,0);
    subtree.assign(n,0);
    
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);

    }
    dfs(0,0);
    //cout<<1<<endl;
    hld(0,0);
    //cout<<1<<endl;
    build(1,0,ptr-1);
    //cout<<1<<endl;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int x,y;
            cin>>x>>y;
            x--;
           // A[location[x]]=y;
            update(1,0,ptr-1,location[x],y);


        }
        else{
            int x,y;
            cin>>x>>y;
            // debug(x);
            // debug(y);
            x--;y--;
            int c = lca(x,y);
			int res = max(max(query2(x,c), query2(y,c)), A[location[c]]);
            //debug(z);
            cout<<res<<sp;
            //nl;
            
        }
    }
    cout<<endl;


    return 0;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
   // w(t)
    solve();


    return 0;
}
