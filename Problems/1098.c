#include<stdio.h>
#include<math.h>
int main()
{
    float i=0.0,j=1.0;
    int k;

    for(k=0;k<=10;k++){
        if(k == 0 || k == 5 || k == 10){
            printf("I=%0.0f J=%0.0f\n",i,j+i);
            printf("I=%0.0f J=%0.0f\n",i,j+1+i);
            printf("I=%0.0f J=%0.0f\n",i,j+2+i);
        }else{
            printf("I=%0.1f J=%0.1f\n",i,j+i);
            printf("I=%0.1f J=%0.1f\n",i,j+1.0+i);
            printf("I=%0.1f J=%0.1f\n",i,j+2.0+i);

        }
        i=i+0.2;
    }
    return 0;
}



