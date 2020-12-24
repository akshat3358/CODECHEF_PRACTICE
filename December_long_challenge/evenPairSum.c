#include<stdio.h>
int main(){
    int t;
    long int a,b,aeven,aodd,beven,bodd,ans;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        aeven = a/2;
        aodd = a-aeven;
        beven = b/2;
        bodd = b-beven;
        ans = (aeven*beven)+(aodd*bodd);
        printf("%ld\n",ans);
    }
    return 0;
}