#include<stdio.h>
#include<string.h>
char a[1000];
int main(){
    scanf(" %s",a);
    int i,x,y,len;
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case'N': y++;break;
            case'S': y--;break;
            case'W': x--;break;
            case'E': x++;break;
            case'Z': x=y=0;break;
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
