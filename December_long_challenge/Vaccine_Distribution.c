#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,d,cnt_tot_days;
        int cnt_at_risk=0,cnt_not_at_risk=0;
        scanf("%d %d",&n,&d);
        for(int j = 1;j<=n;j++)
        {
            int age;
            scanf("%d",&age);
            if(age<=9 || age>=80)
            {
                cnt_at_risk++;
            }
            else
            {
                cnt_not_at_risk++;
            }
        }
        cnt_tot_days = cnt_at_risk/d + cnt_not_at_risk/d;
        if(cnt_at_risk % d !=0 )
        {
            cnt_tot_days++;
        }
        if (cnt_not_at_risk % d != 0)
        {
            cnt_tot_days++;
        }
        printf("%d\n",cnt_tot_days);
    }
    return 0;
}