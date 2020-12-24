#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        int n,k,i;
        scanf("%d %d",&n,&k);
        int *A;
        A = (int*)malloc(n*sizeof(int));
        for (i = 0; i <n; i++)
        {
            if( i % 2 == 0){//,add positve no. to array if i is even
                A[i] = i+1;
            }
            else{
                A[i] = -i-1;//add negative of i ,if i is odd
            }
        }
        int positives= (n/2) + (n%2);
        int needed;
        if (positives > k){
            i = n-1;
            needed = positives-k;
            while (needed>0)
            {
                if (A[i]>0){
                    A[i] = -A[i];//converting a extra postive prefix in to negative from end
                    needed--;
                }
                i--;
            }
        }
        else if (positives<k)
        {
            i = n-1;
            needed = k -positives;
            while (needed>0)
            {
                if(A[i]<0){
                    A[i] = -A[i];//converting a extra negative to postive to get exactly k 
                    needed--;//(+ve) prefix
                }
                i--;
            }
        }
        for(int j = 0;j<n;j++){
            printf("%d ",A[j]);
        }
        //after this u will see that u have exactly k positive integer in array A
        free(A);
        t--;
    }
    return 0;
}