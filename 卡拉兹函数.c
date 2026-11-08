#include<stdio.h>
int main(){
    int n,fn;
    scanf("%d",&n);
    if (n%2==1)
    {
        fn=3*n+1;
        printf("%d",fn);
    }
    else
    {
        fn=n/2;
        printf("%d",fn);
    }
    return 0;
}
