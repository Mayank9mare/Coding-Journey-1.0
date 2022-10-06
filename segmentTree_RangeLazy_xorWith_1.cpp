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
const int MAXN=1e5;
int n,tree[4*MAXN];
int A[MAXN];
int lazy[4*MAXN];//tells if a node is containing some unpropagated values
int upd[4*MAXN];//the value of unpropagated node => memory of the man

 // 1^x = 1-x


int f(int x,int y){
    return (x+y);
}
int border=0;//INT_MIN in maxima and INT_MAX in minima

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
        tree[node] = f(tree[2*node],tree[2*node+1]);
    }
}


void apply(int node,int start,int end,int val=0){
    tree[node]=(end-start+1)-tree[node];//set coorect info at this node // 1^x = 1-x
    if(start!=end){//not a leaf value then it is lazy
        lazy[node]+=1;
        //upd[node]+=val;
    }
}
//asiigning tasks to his children
void pushdown(int node,int start,int end){
    if(lazy[node]%2){
        lazy[node]=0;
        int mid=(start+end)/2;
        apply(2*node,start,mid,upd[node]);
        apply(2*node +1,mid+1,end,upd[node]);
        //upd[node]=0;
    } 

}

void updateRange(int node, int start, int end, int l, int r, int val=0)
{
    if(start>r || end<l){// no overlap
        return;
    }
    if(l<=start && end<=r){//complete overlap
        //ask the man to remember it
        apply(node,start,end,val);
        return;
    }
    //partial overlap
    pushdown(node,start,end);//remove the lazy tag inorder for children to have correct values
    int mid=(start+end)/2;
    updateRange(2*node,start,mid,l,r,val);
    updateRange(2*node +1,mid+1,end,l,r,val);
    tree[node]=f(tree[2*node],tree[2*node +1]);
}

int queryRange(int node, int start, int end, int l, int r)
{
    if(start > r || end < l)//no overlap
        return border;         // Out of range
   if(l<=start && end<=r){//complete iverlap
        return tree[node];
   }
   pushdown(node,start,end);//remove the lazy tag inorder for children to have correct values
   int mid=(start+end)/2;
   int p1=queryRange(2*node,start,mid,l,r);
   int p2=queryRange(2*node+1,mid+1,end,l,r);
   return f(p1,p2);
}
//vector<int> myfun(vector<int> a,vector<vector<int>> q);
vector<int> myfun(int n,vector<vector<int>> q){
   
    vector<int> ans;

   // int a[n];
    for(int i=0;i<n;i++)A[i]=0;
    build(1,0,n-1);
    for(auto p:q){
        
        if(p[0]==1){
          
            updateRange(1,0,n-1,p[1],p[2]-1);
        }else{
            
            int l=0,r=n;
            int x=p[1];
        
            while(l+1<r){
                int m=(l+r)/2;
                int p1=queryRange(1,0,n-1,0,m);
        
                if(p1<x){
                    l=m;
                }
                else{
                    r=m;
                }
            }
            
            if(l+1<n && queryRange(1,0,n-1,0,l+1)==x)
            ans.push_back(l+1);
            else ans.push_back(-1);
            


        }
    }
    return ans;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
    //w(t)
    int n,q;
    cin>>n>>q;
    vector<vector<int>> b;
 
    for(int i=0;i<q;i++){
        int t,l,r;
        cin>>t>>l>>r;
        b.pb({t,l,r});
    }
    vector<int> p=myfun(n,b);
    debug(p);


    return 0;
}
