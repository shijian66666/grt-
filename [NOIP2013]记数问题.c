#include<stdio.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a=0;
    for(int i=1;i<=n;i++)
    {
        int t=i;
        while(t>0)
        {
            int d=t%10;
            if(d==x)
            {
                a++;
            }
            t=t/10;
        }
    }
    printf("%d",a);
    return 0;
}
