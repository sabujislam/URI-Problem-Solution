#include<stdio.h>
int main()
{
    int n,i=1,j=1;
    scanf("%d",&n);
    while(j<=n){
        if(i%4!=0) printf("%d ",i);
        else {printf("PUM\n");j++;}
        i++;
    }
    return 0;
}
