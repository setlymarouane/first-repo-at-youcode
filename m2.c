#include<stdio.h>
int main (){
    int GS1,GS2,GS3,GS4,GS5;
    printf("ENTRE l'ISBN \n");
    do{
         printf("entrer gsi? : ");
         scanf("%d",&GS1);
    }while(GS1!=978 && GS1!=979);
    if(GS1!=978 && GS1!=979){
        scanf("%d %d %d %d %d",&GS1,&GS2,&GS3,&GS4,&GS5);
    printf("Prefix GS1: %d\n",GS1);
    printf("Identifient de groupe %d\n",GS2);
    printf("code de l'editeur %d\n",GS3);
    printf("numero d'article %d\n",GS4);
    printf("chiffre de controle %d\n",GS5);
    }
   
    return 0;
}