#include <stdio.h>
#include <math.h>
int main(){
    double r;
    scanf("%d",&r);
    printf("%.3lf\n",4*M_PI*r*r);
    printf("%.3lf\n",(4*M_PI*r*r*r)/3);
    printf("%.3lf\n",M_PI*r*r);
    printf("%.3lf\n",2*M_PI*r);
}
