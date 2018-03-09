#include<stdio.h>

void summation(int a,int b){
    int sum=0;
    while(a<=b){
        if(a%13!=0){
            sum += a;
        }
        a++;
    }
    printf("%d\n",sum);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        summation(y,x);
    }
    else if(x<y){
        summation(x,y);
    }
    else{
        summation(x,y);
    }
    return 0;
}
