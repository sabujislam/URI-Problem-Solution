#include<stdio.h>

int main()
{
    int x,alcohol=0,gasoline=0,diesel=0;
    scanf("%d",&x);
    while(x!=4){
        if(x==1) alcohol++;
        else if(x==2) gasoline++;
        else if(x==3) diesel++;
        scanf("%d",&x);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcohol);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);
    return 0;
}
