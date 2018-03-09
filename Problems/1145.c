#include<stdio.h>
int main()
{
    int x,y,i,j=0;
    scanf("%d %d",&x,&y);
    if(x<y){
        for(i=1;i<=y;i++){
            printf("%d",i);
            j++;
            if(j==x){
                printf("\n");
                j=0;
            }
            else{
                printf(" ");
            }

        }
    }
    return 0;
}
