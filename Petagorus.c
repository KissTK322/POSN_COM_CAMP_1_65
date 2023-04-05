#include<stdio.h>
int main(){
    float a,b;
    printf("Enter A and B : ");
    scanf("%f %f",&a,&b);
    float c = sqrt(pow(a,2)+pow(b,2));
    printf("C = %f",c);
    return 0;
}
