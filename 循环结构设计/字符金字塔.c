#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int n=a-'A'+1;
    for (int i=1;i<=n;i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (char t='A';t<='A'+i-1;t++)
        {
            printf("%c",t);
        }
        for (char f='A' + i - 2; f >= 'A';f--)
        {
            printf("%c",f);
        }
        printf("\n");
    }
    return 0;
}
