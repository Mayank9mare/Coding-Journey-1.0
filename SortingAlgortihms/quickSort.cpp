#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int partition(vector<int> &a,int l,int r){
    int p=a[l];
    int i=l,j=r;
    do{
        do{
            i++;
        }while(a[i]<=p);
        do{
            j--;

        }while(a[j]>p);
    
        if(i<j)swap(a[i],a[j]);
    }while(i<j);
    swap(a[l],a[j]);
    return j;
}

void quick_sort(vector<int> &a,int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        quick_sort(a,l,p);
        quick_sort(a,p+1,r);
    }
}

int main(){
    vector<int> a={10, 7, 8, 9, 1, 5};
    int n=a.size();
    quick_sort(a,0,n);
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;

}

