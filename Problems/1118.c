#include<stdio.h>
#include<math.h>

int valid(float n){
    if( n>=0.0 && n<=10.0 ) return 1;
    else return 0;
}
void print(float a, float b){
    if(!valid(b)){
        printf("nota invalida\n");
        scanf("%f",&b);
        print(a,b);
    }
    else if(!valid(a)){
        printf("nota invalida\n");
        scanf("%f",&a);
        print(a,b);
    }
    else{
        printf("media = %0.2f\n",(a+b)/2.0);
    }
}
int main()
{
    float a,b;
    int i=1;
    scanf("%f %f",&a,&b);
    print(a,b);
    scanf("%d",&i);
    while(1){
        if(i==1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%f %f",&a,&b);
            print(a,b);
            scanf("%d",&i);
        }
        else if(i == 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            break;
        }
        else{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&i);
        }

    }
    return 0;
}
