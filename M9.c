#include<stdio.h>
int main()
{
    int n,l,m,c;
    printf("ENTRE un nombre  positif entre 10 et 100\n");
    scanf("%d",&n);
    while (n<10 || n>=100)
    {
        printf("ENTRE un nombre  positif entre 10 et 100\n");
        scanf("%d",&n);
    }
    l=n/10;
    m=n%10;
    c=m*10+l;
    printf("Le nombre inverse est: %d\n",c);


    
    
    return 0;
}