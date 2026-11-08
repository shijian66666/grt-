#include<stdio.h>
int main(){
    int n,k,m;
    int a=0;
    scanf("%d %d %d",&n,&k,&m);
    for (int i=2;i<=n;i++)
    {
        a=(a+m)%i;
    }
    a = (a + k) % n;
    printf("%d\n", a);
    return 0;
}
