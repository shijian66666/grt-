#include<stdio.h>
#include<string.h>
 
int main(){
     
        int y,m,x;
     
        while(scanf("%d%d%d",&y,&m,&x)==3){
     
            int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
            
            if((y%4==0&&y%100!=0)||y%400==0)
			{
                 days[2]=29;
            }
         
            int sum=0;
            int n=days[m];
         
            for(int d=1;d<=n;d++)
			{
                char list[20];
                sprintf(list,"%04d-%02d-%02d",y,m,d);
             
                char target='0'+x;
                for(int i=0;list[i]!='\0';i++)
				{
                    if(list[i]==target){
                        sum++;
                    }
                }
            }
         
            printf("%d\n",sum);
        }    
         
    return 0;
}
