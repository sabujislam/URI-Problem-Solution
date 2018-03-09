#include<stdio.h>
int main()
{
    int n, i, even=0;
    for(i=1;i<6;i++)
    {
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }
    }
    printf("%d valores pares\n",even);
    return 0;
}
