#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i);
    i=1;
    while (i<=n){
        printf("%d\n",i);
        i++;
    }
    i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}
