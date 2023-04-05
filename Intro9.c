#include <stdio.h>
int main(){
    int q; scanf("%d",&q);
    while(q--){
    int num; scanf("%d",&num);
    int x=num/1000;
    int y=(num-(x*1000))/100;
    int z=(num-(x*1000)-(y*100))/10;
    int w=(num-(x*1000)-(y*100)-(z*10));
    switch(x){
        case 1: printf("M");break;
        case 2: printf("MM");break;
        case 3: printf("MMM");break;
        case 4: printf("MMMM");break;
    }
    switch(y){
        case 1: printf("C");break;
        case 2: printf("CC");break;
        case 3: printf("CCC");break;
        case 4: printf("CD");break;
        case 5: printf("D");break;
        case 6: printf("DC");break;
        case 7: printf("DCC");break;
        case 8: printf("DCCC");break;
        case 9: printf("CM");break;
    }
    switch(z){
        case 1: printf("X");break;
        case 2: printf("XX");break;
        case 3: printf("XXX");break;
        case 4: printf("XL");break;
        case 5: printf("L");break;
        case 6: printf("LX");break;
        case 7: printf("LXX");break;
        case 8: printf("LXXX");break;
        case 9: printf("XC");break;
    }
    switch(w){
        case 1: printf("I");break;
        case 2: printf("II");break;
        case 3: printf("III");break;
        case 4: printf("IV");break;
        case 5: printf("V");break;
        case 6: printf("VI");break;
        case 7: printf("VII");break;
        case 8: printf("VIII");break;
        case 9: printf("IX");break;
    }
    printf("\n");
}
return 0;}
