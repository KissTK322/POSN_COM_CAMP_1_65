#include<stdio.h>
#include<string.h>
char a[100];
char rot(char tid){
    if(tid=='N')
        return 'E';
    if(tid=='E')
        return 'S';
    if(tid=='S')
        return 'W';
    if(tid=='W')
        return 'N';
}
int main(){
    char tid='N';
    int i,len;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case'N' : while(tid != 'N'){
                            tid=rot(tid);
                            printf("R");
            }printf("F");break;
            case'E' : while(tid != 'E'){
                            tid=rot(tid);
                            printf("R");
            }printf("F");break;
            case'S' : while(tid != 'S'){
                            tid=rot(tid);
                            printf("R");
            }printf("F");break;
            case'W' : while(tid != 'W'){
                            tid=rot(tid);
                            printf("R");
            }printf("F");break;
            case'Z' : tid = 'N'; printf("Z");
        }
    }
    return 0;
}
