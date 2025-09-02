#include<stdio.h>
#include<math.h>
int main() {
    // ex 3
    float r,v;
    
    printf("ENTRE LA RAYON \n");
    scanf("%f",&r);
    v=(4/3)*3.14*r*r*r;
    printf("Le volume de la sphere est: %.1f\n",v);
    return 0;
}