#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    while(1){
        scanf("%d %d",&m,&n);
        if(m>0 && n>0){
            if(m<n){
                for(i=m;i<=n;i++){
                    printf("%d ",i);
                    sum+=i;
                }
            }else{
                for(i=n;i<=m;i++){
                    printf("%d ",i);
                    sum+=i;
                }
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }else break;
    }
    return 0;
}
