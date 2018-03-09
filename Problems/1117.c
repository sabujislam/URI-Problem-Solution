#include<stdio.h>
int main()
{
    float a,b;
    int count = 0;
    while(1){
        scanf("%f",&b);
        if(b>=0 && b<=10 && count < 2){
            count++;
            a += b;
            if(count==2) {printf("media = %0.2f\n",a/2);break;}
        }else printf("nota invalida\n");
    }
    return 0;
}
