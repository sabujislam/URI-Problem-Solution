#include<stdio.h>
int main()
{
    int i,n,x,c=0,r=0,s=0;
    char ch;
    float a,b,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&x,&ch);
        if(ch == 'C'){
            c += x;
        }
        else if(ch == 'R'){
            r += x;
        }
        else if(ch == 'S'){
            s += x;
        }
    }

    printf("Total: %d cobaias\n",c+r+s);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    a = 0.00+c;
    b = 0.00+r;
    d = 0.00+s;
    printf("Percentual de coelhos: %0.2f %%\n",(a/(a+b+d))*100);
    printf("Percentual de ratos: %0.2f %%\n",(b/(a+b+d))*100);
    printf("Percentual de sapos: %0.2f %%\n",(d/(a+b+d))*100);
    return 0;
}


