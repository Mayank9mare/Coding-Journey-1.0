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

class Vertex{
    public:

    vector<int> string_ends;
    vector<int> next;
    int parent;
    char parentChar;

    int link;
    vector<int> go;
    Vertex(int k,int p=-1,char pch='$'){
        string_ends.clear();
        next.resize(k,-1);
        parent=p;
        parentChar=pch;
        link=-1;
        go.resize(k,-1);

    }
};

class Trie{
    public:
    int k;
    vector<Vertex> nodes;
    Trie(int K){
        k=K;
        nodes.pb(Vertex(k));


    }
    void add(string s,int ind){
        int cur=0;
        for(auto c:s){
            if(nodes[cur].next[c-'a']==-1){
                nodes[cur].next[c-'a']=nodes.size();
                nodes.pb(Vertex(k,cur,c));
            }
            cur=nodes[cur].next[c-'a'];

        }
        nodes[cur].string_ends.pb(ind);
    }

    void build_automation(){//O(mk)
        for(int i=0;i<nodes.size();i++){
            for(int j=0;j<k;j++){
                go(i,j+'a');
            }
        }
    }
    int get_link(int v){
        if(nodes[v].link==-1){
            if(v==0 || nodes[v].parent==0){
                nodes[v].link=0;
            }
            else{
                nodes[v].link=go(get_link(nodes[v].parent),nodes[v].parentChar);

            }


        }
        return nodes[v].link;
    }
    int go(int v,char ch){
        int c=ch-'a';
        //cout<<c<<endl;
        if(nodes[v].go[c]==-1){
            if(nodes[v].next[c]!=-1){
                nodes[v].go[c]=nodes[v].next[c];
            }
            else{
                nodes[v].go[c]=(v==0)?0:go(get_link(v),ch);
            }
        }
        return nodes[v].go[c ];
    }
    void run_automation(string s){
        int cur=0;
        cout<<cur<<" ";
        for(auto c:s){
            cur=nodes[cur].go[c-'a'];
            cout<<cur<<" ";
        }
        return;
    }
    void print(int x,vector<bool> &lst,string &s){
        //cout<<x<<endl;
        for(int i=0;i<((int)lst.size())-1;i++){
            if(lst[i])cout<<" ";
            else cout<<"| ";
        }
        //cout<<x<<endl;
        if(!lst.empty())cout<<"|--";
        cout<<x<<" "<<s<<" "<<nodes[x].link<<" "<<nodes[x].string_ends.size()<<endl;//if end.size()==1 we get a pattern match Congo!!
        int mx=-1;
        for(int i=0;i<k;i++){
            //cout<<nodes[i].next[i]<<endl;
            if(nodes[x].next[i]!=-1){
                mx=i;
            }
        }
        //cout<<mx<<endl;
        lst.pb(false);
        for(int i=0;i<k;i++){
            if(nodes[x].next[i]!=-1){
                s.pb('a'+i);
                if(i==mx){
                    lst.back()=true;
                }
                print(nodes[x].next[i],lst,s);
                s.pop_back();
            }

        }
        lst.pop_back();
        return ;
        
    }
    
};
int solve(){
    Trie t(26);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        t.add(s,i);
    }
    t.build_automation();
    //cout<<"donr"<<endl;
    string temp;
    vector<bool> temp2;
    t.print(0,temp2,temp);
    string s;
    cin>>s;
    t.run_automation(s);
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
