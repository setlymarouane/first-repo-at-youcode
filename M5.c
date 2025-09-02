#include<stdio.h>

int main()
{
    float p,t,pa,rp1,rp2,rp3;
    printf("ENTRE la montant du pret\n");
    scanf("%f",&p);
    printf("ENTRE la taux d'interet\n");
    scanf("%f",&t);
    printf("ENTRE la paiement mensuel\n");
    scanf("%f",&pa);
    rp1=p*(1+t/1200)-pa;
    printf("Le reste du pret apres le premier mois est: %.2f\n",rp1);
    rp2=rp1*(1+t/1200)-pa;
    printf("Le reste du pret apres le deuxieme mois est: %.2f\n",rp2);
    rp3=rp2*(1+t/1200)-pa;
    printf("Le reste du pret apres le troisieme mois est: %.2f\n",rp3);
    return 0;
}