#include<stdio.h>
int main (){
    int m,billets;
    printf("ENTRE LA MONTANT\n");
    scanf("%d",&m);
    billets=m/20;
    printf("Le nombre de billets de 20 dollars est: %d\n",billets);
    billets=(m%20)/10;
    printf("Le nombre de billets de 40 dollars est: %d\n",billets);
    billets=((m%20)%10)/5;
    printf("Le nombre de billets de 5 dollars est: %d\n",billets);
    billets=(((m%20)%10)%5);
    printf("Le nombre de billets de 1 dollar est: %d\n",billets);
    return 0;
}