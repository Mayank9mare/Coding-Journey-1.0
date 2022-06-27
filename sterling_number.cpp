#include <iostream>
using namespace std;
 //the number of ways a set of n elements can be partitioned into r non-empty sets.
int main() {
    int n=3;
    int s[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(j>i) s[i][j]=0;
            else if(i==j) s[i][j]=1;
            else if(i==0 || j==0) s[i][j]=0;
            else{
                 
                s[i][j]= j*s[i-1][j] + s[i-1][j-1];
            }
             
        }
    }
    int ans=0;
    //bell no for n
    for(int i=0;i<=n;i++){
        ans += s[n][i];
    }
    cout<<ans;
     
     
    return 0;
}