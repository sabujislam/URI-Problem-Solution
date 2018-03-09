#include<stdio.h>
int main()
{
    int i,ar[101],max,position;
    for(i=0;i<100;i++){
        scanf("%d",&ar[i]);
    }
    max = ar[0];
    for(i=1;i<100;i++){
        if(max < ar[i]){
            max = ar[i];
            position = i;
        }
    }
    printf("%d\n%d\n",max,position+1);
    return 0;
}

