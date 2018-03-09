#include<stdio.h>
int main()
{
    int x, n, i, sum=0;
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        scanf("%d",&x);
        if(x>0 && x%2==0){
            printf("EVEN POSITIVE\n");
        }
        else if(x>0 && x%2!=0){
            printf("ODD POSITIVE\n");
        }
        else if(x<0 && x%2==0){
            printf("EVEN NEGATIVE\n");
        }
        else if(x<0 && x%2!=0){
            printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");
        }
    }
    return 0;
}

