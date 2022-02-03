#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define minato ios_base::sync_with_stdio(false), cin.tie(nullptr)
double med(int a[],int b[],int n,int m){
    int l=0;
    int r=n;
    int k=(n+m+1)/2;
    while(l<=r){
        int mid=(l+r)/2;
        int lsz=mid,rsz=k-mid;
        int la=(lsz>0)?a[lsz-1]:INT_MIN;
        int lb=(rsz>0)?b[rsz-1]:INT_MIN;
        int ra=(lsz<n)?a[lsz]:INT_MAX;
        int rb=(rsz<m)?b[rsz]:INT_MAX;
        if(la<=rb && lb<=ra){
            if((m+n)%2==0){
                return (max(la,lb)+min(ra,rb))/2.0;
            }
            return max(la,lb);
        }
        else if(la>rb){
            r=mid-1;

        }
        else{
            l=mid+1;
        }
    }
    return 0;
}
signed main(){
    minato;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    if(n<m){
        cout<<med(a,b,n,m)<<endl;
    }
    else{
        cout<<med(b,a,m,n)<<endl;
    }
    
    

    
    return 0;
    
}