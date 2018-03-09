#include<stdio.h>
int main()
{
    int a,b,i=1,c=0,inter=0,girano=0,drwan=0;
    //scanf("%d %d",&a,&b);
    while(i==1){
        scanf("%d %d",&a,&b);
        printf("Novo grenal (1-sim 2-nao)\n");
        if(a>b){
            inter++;
            c++;
        }
        else if(a<b){
            girano++;
            c++;
        }
        else{
            drwan++;
            c++;
        }
        scanf("%d",&i);
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",girano);
    printf("Empates:%d\n",drwan);
    if(inter>girano) printf("Inter venceu mais\n");
    else if(inter<girano) printf("Gremio venceu mais\n");
    else printf("Não houve vencedor\n");
    return 0;
}
