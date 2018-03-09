#include<stdio.h>
int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    while(i<=n){
        printf("%d %d %d\n",i,i*i,i*i*i);
        i++;
    }
    return 0;
}
