#include<stdio.h>
int main()
{
    int n, i, count=1;
    scanf("%d",&n);
    for(i=n; count < 7; i++)
    {
        if(i%2 != 0){
            count++;
            printf("%d\n",i);
        }
    }
}

