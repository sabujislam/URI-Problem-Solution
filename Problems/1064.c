#include<stdio.h>
int main()
{
    float n,average=0,sum=0;
    int i,positive=0;
    for(i=1;i<7;i++)
    {
        scanf("%f",&n);
        if(n>0){
            positive++;
            sum += n;
        }
    }
    printf("%d valores positivos\n",positive);
    average = sum/positive;
    printf("%0.1f\n",average);
    return 0;
}
