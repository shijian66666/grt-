#include <stdio.h>
int main()
{
    int t,mid,n,d,a;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        mid=n/2;
        for(int i=0;i<=mid;i++)
        {
            d=mid-i;
             
            for(int j=0;j<d;j++)
            {
                printf(" ");
            }
            a=n-2*d;
             
            for(int j=0;j<a;j++)
            {
                 
                printf("*");
            }
            printf("\n");
        }
        for(int i=mid-1;i>=0;i--)
        {
            d=mid-i;
            for(int j=0;j<d;j++)
            {
                printf(" ");
            }
            a=n-2*d;
             
            for(int j=0;j<a;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        t--;
    }
     
     
    return 0;
}
