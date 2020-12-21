#include<stdio.h>
int main(){
    int D1,V1,D2,V2,P;
    int Flag1 = 0;
    int Flag2 = 0;
    int T_P = 0;
    int i;
    scanf("%d %d %d %d %d",&D1,&V1,&D2,&V2,&P);
    if((D1 == 1) && (D2 == 1)){
        i = 1;
        while(T_P < P){
            T_P += V1 + V2;
            i++;
        }
        printf("%d",i-1);
        return 0;
    }
    else{
        i=1;
        while (T_P<P)
        {
            if( (D1 == i) && (Flag1 == 0)){
                Flag1 = 1;
            }
            else if ((D2 == i) && (Flag2 == 0))
            {
                Flag2 = 1;
            }
            else if ((Flag1 == 1)&&(Flag2 == 0))
            {
                T_P +=V1;
                i++;
            }
            else if ((Flag2 == 1)&&(Flag1 == 0))
            {
                T_P += V2;
                i++;
            }
            else if ((Flag1 == 1) && (Flag2 == 1))
            {
                T_P = T_P + (V1 + V2);
                i++;
            }
            else{
                T_P +=0;
                i++;
            }    
        }
        printf("%d",i-1);
        return 0;
    }
}