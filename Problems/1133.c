#include<stdio.h>

void summation(int a,int b){
    int sum=0;
    while(a<b){
        if(a%5==2 || a%5==3){
            printf("%d\n",a);
        }
        a++;
    }

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        summation(y+1,x);
    }
    else if(x<y){
        summation(x+1,y);
    }
    return 0;
}
