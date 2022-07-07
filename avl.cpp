#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int SPACE=10;
int max(int a,int b){
    if(a>=b)return a;
    return b;
}
struct Node{
    struct Node* rchild;
    int val;
    int height;
    struct Node* lchild;
}*root=NULL;
int nodeHeight(struct Node* p){
    int x,y;
   
    x=p&& p->lchild?p->lchild->height:0;
    y=p&& p->rchild?p->rchild->height:0;
    return x>y?x+1:y+1;
}
int balanceFactor(struct Node* p){
    int h1,h2;
    h1=(p&&p->lchild)?p->lchild->height:0;
    h2=(p&&p->rchild)?p->rchild->height:0;
    return h1-h2;
}
struct Node* LLcase(struct Node* p){
    struct Node* ll =p->lchild;
    //struct Node* lll=ll->lchild;
    struct Node* llr=ll->rchild;
    ll->rchild=p;
    p->lchild=llr;
    p->height=nodeHeight(p);
    ll->height=nodeHeight(ll);
    
    
    if(root==p){
        root=ll;
    }
    return ll;

}
struct Node* LRcase(struct Node* p){
    struct Node* ll=p->lchild;
    struct Node* llr=ll->rchild;
    
    struct Node* llrl=llr->lchild;
    struct Node* llrr=llr->rchild;
    ll->rchild=llrl;
    p->lchild=llrr;
    llr->rchild=p;
    llr->lchild=ll;
    p->height=nodeHeight(p);
    ll->height=nodeHeight(ll);
    
    llr->height=nodeHeight(llr);
     if(p==root){
        root=llr;
    }

    

    return llr;



}
struct Node* RRcase(struct Node* p){
    struct Node* rr=p->rchild;
    struct Node* rrl=rr->lchild;
    p->rchild=rrl;
    rr->lchild=p;
    p->height=nodeHeight(p);
    rr->height=nodeHeight(rr);
    if(p==root){
        root=rr;
    }
    return rr;

} 
struct Node* RLcase(struct Node* p){
    struct Node* rr=p->rchild;
    struct Node* rrl=rr->lchild;
    struct Node* rrll=rrl->lchild;
    struct Node* rrlr=rrl->rchild;
    rrl->lchild=p;
    rrl->rchild=rr;
    rr->lchild=rrlr;
    p->rchild=rrll;
    
    rr->height=nodeHeight(rr);
    p->height=nodeHeight(p);
    rrl->height=nodeHeight(rrl);
    if(p==root){
        root=rrl;
    }
    return rrl;

}
struct Node* insert(struct Node* p,int v){
    struct Node* t=(struct Node* )malloc(sizeof(struct Node));
    t->val=v;
    t->height=1;
    t->lchild=NULL;
    t->rchild=NULL;
    if(p==NULL){
        return t;


    }
    if(v<p->val){
        p->lchild=insert(p->lchild,v);

    }
    else if(v>p->val){
        p->rchild=insert(p->rchild,v);
    }
    p->height=nodeHeight(p);
    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1){
        return LLcase(p);
        
    }
    else if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1){
        return LRcase(p);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==-1){
        return RRcase(p);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==1){
        return RLcase(p);
    }
    return p;
}
struct Node *inPre(struct Node* p){
    while(p && p->rchild!=NULL){
        p=p->rchild;
    }
    return p;
}
struct Node *inSuc(struct Node* p){
    while(p &&p->lchild!=NULL){
        p=p->lchild;
    }
    return p;
}
struct Node* deleteAvl(struct Node* p,int v){
    if(p==NULL){
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL && p->val==v){
        if(p==root){
            root=NULL;
            //return NULL;
        }
        free(p);
        return NULL;
    }
    if(p->val<v){
        p->rchild=deleteAvl(p->rchild,v);

    }
    else if(p->val>v){
        p->lchild=deleteAvl(p->lchild,v);
    }
    else{
        struct Node* q;
        if(nodeHeight(p->lchild)>nodeHeight(p->rchild)){
            q=inPre(p->lchild);
            p->val=q->val;
            p->lchild=deleteAvl(p->lchild,q->val);
        }
        else {
            q=inSuc(p->rchild);
            p->val=q->val;
            p->rchild=deleteAvl(p->rchild,q->val);
        }


    }
    p->height=nodeHeight(p);
  if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1) {  
        return LLcase(p);
    } else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1){  
        return LRcase(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1){ 
        return RRcase(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1){ 
        return RLcase(p);
    } else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 0){  
        return LLcase(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == 0){  
        return RRcase(p);
    }
 
    return p;
    
    



}
void print2D(struct Node* r,int space){   //This function can show the structural form of tree but horizontly (only for my reference i have used this)
           if(r==NULL){
               return;
           }
           space+=SPACE;
           print2D(r->rchild,space);
           printf("\n");//cout<<endl;
           for(int i=SPACE;i<space;i++){
               printf(" ");
           }
           printf("%d\n",r->val);//cout<<r->val<<"\n";
           print2D(r->lchild,space);
}
void Inorder(struct Node* p){
    if(p==NULL)return;
    Inorder(p->lchild);
    int b=-balanceFactor(p);
    int d=p->val;
    int h=nodeHeight(p)-1;
    printf("(%d,%d,%d) ",d,h,b);
    Inorder(p->rchild);


}
int leaves(struct Node* p){
    if(p==NULL)return 0;
    if(p->lchild==NULL&&p->rchild==NULL){
        printf("(%d,%d,%d) ",p->val,nodeHeight(p)-1,-balanceFactor(p));
        return 1;
    }
    return leaves(p->lchild)+leaves(p->rchild);
}

//BONUS QUESTION ATTEMPT


int per(struct Node* p){
    int c1=0,c2=0,l;
    
    struct Node* q=p;
    while(q->lchild!=NULL || q->rchild!=NULL){
        printf("(%d,%d,%d) ",q->val,nodeHeight(q)-1,-balanceFactor(q));
        if(q->lchild){
            q=q->lchild;
            c1++;
        }
        else if(q->rchild){
            q=q->rchild;
            c1++;
        }
    }
    struct Node* ss[100];
    int i=0;
    l=leaves(p);
    if(p->rchild!=NULL){
        p=p->rchild;
    
    }
    while(p->lchild!=NULL || p->rchild!=NULL){
        ss[i]=p;
        i++;

        if(p->rchild){
            p=p->rchild;

            c2++;
        }
        else if(p->lchild){
            p=p->lchild;
            c2++;
        }
    }
    while(i!=1){
        i--;
        printf("(%d,%d,%d) ",ss[i]->val,nodeHeight(ss[i])-1,-balanceFactor(ss[i]));


    }
    printf("(%d,%d,%d) ",ss[0]->val,nodeHeight(ss[0])-1,-balanceFactor(ss[0]));
    printf("\n");
    return c1+c2-1+l;
}
int diameter(struct Node* p){
    if(p==NULL)return 0;
    int h1=nodeHeight(p->lchild);
    int h2=nodeHeight(p->rchild);
    int l1=diameter(p->lchild);
    int l2=diameter(p->rchild);
    return max(h2+h1+1,max(l1,l2));


}
struct Node* lca(struct Node* p,int a,int b){
    if(p==NULL)return NULL;
    if(a<p->val &&b<p->val){
        return lca(p->lchild,a,b);
    }
    else if(a>p->val && b>p->val){
        return lca(p->rchild,a,b);
    }
    else{
        return p;
    }

}
int findd(struct Node* p,int a){
    if(p==NULL)return 0;
    if(p->val>a){
        return findd(p->lchild,a);
    }
    else if(p->val<a){
        return findd(p->rchild,a);
    }
    else{
        return 1;
    }
}
void route(struct Node* p,int a,int b){
    struct Node* m=lca(p,a,b);
    struct Node* ss[100];
    int i=0;
    if(a>b){
        int temp=b;
        b=a;
        a=temp;
    }
    while(m->val!=a){
        if(a<m->val){
        m=m->lchild;
        ss[i]=m;
        i++;
        }
        else if(a>m->val){
            m=m->rchild;
            ss[i]=m;
            i++;
        }

    }
    i--;
    printf("(%d,%d,%d)",ss[i]->val,nodeHeight(ss[i])-1,-balanceFactor(ss[i]));
    while(i!=0){
        i--;
        printf("(%d,%d,%d) ",ss[i]->val,nodeHeight(ss[i])-1,-balanceFactor(ss[i]));
    }
    m=lca(p,a,b);
    printf("(%d,%d,%d) ",m->val,nodeHeight(m)-1,-balanceFactor(m));
    while(m->val!=b){
        if(b<m->val){
            m=m->lchild;
            printf("(%d,%d,%d) ",m->val,nodeHeight(m)-1,balanceFactor(m));
        }
        else if(b>m->val){
        m=m->rchild;
        printf("(%d,%d,%d) ",m->val,nodeHeight(m)-1,balanceFactor(m));
        
        }
    }
   




}
void ques7(struct Node *p,int a,int b){
    struct Node* m=lca(p,a,b);
    if(m->val==a){
        printf("Path from %d to %d is ",a,b);
        while(m->val!=b){
            printf("%d ",m->val);
            if(b>m->val){
                m=m->rchild;
            }
            else if(b<m->val){
                m=m->lchild;
            }

        }
        printf("%d ",m->val);
        
    }
    // else if(m->val==b){
    //     while(m->val!=a){
    //         printf("(%d,%d,%d) ",m->val,nodeHeight(m)-1,balanceFactor(m));
    //         if(a>m->val){
    //             m=m->rchild;
    //         }
    //         else if(a<m->val){
    //             m=m->lchild;
    //         }

    //     }
    //     printf("(%d,%d,%d) ",m->val,nodeHeight(m)-1,balanceFactor(m));

    // }
    else{
        printf("-1");
    }

}




int main(){
    int t;
    printf("Insert many : 1\nInsert one : 2\nDelete : 3\nInorder : 4\nPerimeter and Width :5\nLowest common ancestor : 6\nRoute from a node to other : 7\n");
    while(1){
        scanf("%d",&t);
        if(t==1){
            int n;
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                int x;
                scanf("%d",&x);
                root=insert(root,x);

            }
            //print2D(root,0);


        }
        else if(t==2){
            int x;
            scanf("%d",&x);
            root=insert(root,x);
        }
        else if(t==3){
            int x;
            scanf("%d",&x);
            deleteAvl(root,x);
        }
        else if(t==4){
            print2D(root,0);
            printf("Inorder transversal: ");
            Inorder(root);
            printf("\n");

        }
        

        //BONUS QUESTION !!
        else if(t==5){
            printf("Boundary Transversal(Perimeter): ");
            int pe=per(root);
            int d=diameter(root);
            printf("Width: %d\n",d);
        }
        else if(t==6){
            int a,b;
            scanf("%d %d",&a,&b);
            if(findd(root,a)&&findd(root,b)){
                int k=lca(root,a,b)->val;
                printf("Lowest Common Ancestor: %d\n",k);
            }
            else{
                printf("-1\n");
            }

        }
        else if(t==7){
            int a,b;
            scanf("%d %d",&a,&b);
            if(findd(root,a)&&findd(root,b)){
                ques7(root,a,b);
                //route(root,a,b);
                printf("\n");

            }
            else{
                printf("-1\n");
            }
        }
        else{
            break;
        }


    }
    

}
