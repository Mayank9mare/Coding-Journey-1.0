## **Manhattan distance property**

Given N point such as $\{X_{i},Y_{i}\}$ then if we have 
$S_{max}= (x+y)_{max-over-allpoints}$ 

$S_{min}= (x+y)_{min-over-allpoints}$ 

$P_{max}= (x-y)_{max-over-allpoints}$ 

$P_{min}= (x-y)_{min-over-allpoints}$ 

Then max manhattan distance be as :

$max(abs(S_{max}-(x+y)),abs(S_{min}-(x+y)),abs(P_{max}-(x-y)),abs(P_{min}-(x-y)))$


```c++
    int s_max=INT_MIN;
    int s_min=INT_MAX;
    int p_max=INT_MIN;
    int p_min=INT_MAX;
    for(auto x:a){
        int s=x.first+x.second;
        int p=x.first-x.second;
        s_max=max(s_max,s);
        s_min=min(s_min,s);
        p_max=max(p_max,p);
        p_min=min(p_min,p);
 
    }
    //cout<<s_max<<sp<<s_min<<sp<<p_max<<sp<<p_min<<endl;
    int ans=INT_MAX;
    int p1=0;
    int p2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int s=i+j;
            int p=i-j;
            int z1=abs(s-s_max);
            int z2=abs(s-s_min);
            int z3=abs(p-p_max);
            int z4=abs(p-p_min);
            int z=max({z1,z2,z3,z4});
            //cout<<z<<endl;
 
            if(z<ans){
                ans=z;
                p1=i;
                p2=j;
 
            }
        }
    }


```




<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
<script type="text/x-mathjax-config">
    MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });
</script>