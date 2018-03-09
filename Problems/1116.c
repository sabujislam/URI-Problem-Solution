#include<stdio.h>
int main()
{
    int x,y,n;
    float a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(y!=0){
            a = x+0.0;
            b = y+0.0;
            printf("%0.1f\n",a/b);
        }else printf("divisao impossivel\n");
    }
    return 0;
}



