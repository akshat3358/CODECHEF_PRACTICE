#include<stdio.h>
int main(){
    int d1,v1,d2,v2,p;
    scanf("%d %d %d %d %d",&d1,&v1,&d2,&v2,&p);
    if(d1<d2)
    {
        if(p/v1<( d2 - d1 ))
        {
            printf("%d",( (d1 - 1) + (p/v1) + ( p % v1 > 0 )));
        }
        else if ((p - (d2 - d1)*v1) % (v1 + v2) > 0)
        {
            printf("%d",( (d1 -1) + (d2 -d1) + ((p - (d2 -d1)*v1) / (v1 + v2)) + 1));
        }
        else
        {
            printf("%d",( (d1 -1) + (d2 -d1) + ((p - (d2 -d1)*v1 ) / (v1 + v2))) );   
        } 
    }
    else
    {
        if(p/v2<( d1 - d2 ))
        {
            printf("%d",( (d2 - 1) + (p/v2) + ( p % v2 > 0 )));
        }
        else if ((p - (d1 - d2)*v2) % (v1 + v2) > 0)
        {
            printf("%d",( (d2 -1) + (d1 -d2) + ((p - (d1 -d2)*v2) / (v1 + v2)) + 1));
        }
        else
        {
            printf("%d",( (d2 -1) + (d1 -d2) + ((p - (d1 -d2)*v2 ) / (v1 + v2))) );   
        }
    }
    return 0 ;
}