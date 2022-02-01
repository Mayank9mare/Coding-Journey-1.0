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
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;
int dp[3001][3001];
int choices[3001][3001];



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    if(s1[0]==s2[0]){
        dp[0][0]=1;
        choices[0][0]=2;
    }
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(i>0){
                dp[i][j]=dp[i-1][j];
                choices[i][j]=0;
            }
            if(j>0 ){
                if(dp[i][j]<dp[i][j-1]){
                    dp[i][j]=dp[i][j-1];
                    choices[i][j]=1;
                }
            }
            if(s1[i]==s2[j]){
                int ans=1;
            if(i>0 &&j>0){
                 ans=1+dp[i-1][j-1];
            }
            if(ans>dp[i][j]){
                    dp[i][j]=ans;
                    choices[i][j]=2;
            }
            

            
            }

        }
    }
    string s="";
    int i=s1.size()-1,j=s2.size()-1;
    while(i>=0 &&j>=0){
        if(choices[i][j]==0){
            i--;
        }
        else if(choices[i][j]==1){
            j--;
        }
        else{
            s+=s1[i];
            i--;
            j--;
        }


    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;


    return 0;
}
