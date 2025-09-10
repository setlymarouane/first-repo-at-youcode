#include<stdio.h>

float T[100],moyenne,s,newnote;
 int n,i,min,max,l,pos,index;





 

 

void saisirnotes(float T[]){
    
    do{
        printf("Combien de notes(1..100)  :");
        scanf("%d",&n);
    }while (n<1 || n>100);
    
    for(i=0;i<n;i++)
    {
    do{    
        printf("ENTRE LA MOYEN ENTRE 0 ET 20: T[%d] = \n",i);
        scanf("%f",&T[i]);
       }while (T[i]<0 || T[i]>20);
       
          
    }
  

}
void afficherNotes(float[]){

    if(n == 0 || n>20){
        printf("Aucune note");
        return;
        
    }
    for(i=0;i<n;i++)
    {
        printf("T[%d]:%.2f\n",i+1,T[i]);
    }
}
    void afficherStatistiques(float[]){
        
        min=T[0];
        for(i=1;i<n;i++)
        if(min>T[i]){
        min=T[i];
          }
          printf("le min :%d\n",min);
          
            max=T[0];
            for(i=1;i<n;i++)
            if(max<T[i]){
            max=T[i];
          }
          printf("le max :%d\n",max);
          
            s=T[0];
            for(i=1;i<=n;i++){
            s=s+T[i];
            }
            moyenne=s/n;

           
           printf("LA MOYENNE DE NOTE %.2f\n",moyenne);
           { 
            int o=0;
           for(i=0;i<n;i++){
            if(T[i]>=10){
                o++;
            }
           
           }
            printf("la nombre des admis %d\n",o);
             }
{  
    int m;
    m=0;
for(i=0;i<n;i++){
    if(T[i]<10){
        m++;
    }
    
}
printf("la nombre non admis %d\n",m);
  }

 }          

          

void ajouterunenotes(float T[]){
    printf("Veuillez saisir la valeur a inserer :");
    scanf("%d",&l);
    printf("Veuillez saisir sa position :");
    scanf("%d",&pos);
    if(pos<=0 || pos>n+1){
        printf("position invalide Veuillez entre une position entre 1 et %d",n+1);
    }
    else{
        for(i=n;i>=pos;i--){
            T[i]=T[i-1];
        }
        T[pos-1]=l;
        n++;
        printf("\n element du tableau apres insertion sont :\n");
        for(i=0;i<n;i++)
        printf("%.2f\n",T[i]);
    }
     }
   void moidifierunenote(float T[]){
   printf("\n---Notes avant modification---\n");
   for(i = 0;i<n;i++){
    printf("T[%d]:%.2f\n",i,T[i]);
   }
   
    do{
         printf("ENTRE LA NOTE:");
   scanf("%f",&newnote);
    }while (newnote<0 || newnote>20);
    
   
   
    do{
    printf("\nIndice de la note a modifier (0..%d) :",n-1);
    scanf("%d",&index);
   }while (newnote<0 || newnote>20);
   T[index]=newnote;
   printf("\n---Notes apres modification---\n");
   for(i=0;i<n;i++){
    printf("T[%d]=%.2f\n",i,T[i]);
   }
    }
   void supprimerunenote(float T[]){
    
    printf("Veuillez saisir sa position :");
    scanf("%d",&pos);
    if(pos<=0 || pos>n){
        printf("position invalide Veuillez entre une position entre 1 et %d",n+1);
    }
    else{
        for(i=pos;i<n;i++){
            T[i-1]=T[i];
        }
        
        n--;
        printf("\n element du tableau apres la suppression sont :\n");
        for(i=0;i<n;i++)
        printf("T[%d]=%.2f\n",i+1,T[i]);
    }


   }
   
   
   

   
   
         

         
   





int main()
{
    
    int a;
    do{
        printf("=====MENU=====");
        printf("\n1-Saisir N notes\n");
        printf("2-Afficher les notes\n");
        printf("3-Statistiques (moyenne, max, min, admis/non admis)\n");
        printf("4-Ajouter une note\n");
        printf("5-Modifier une note (par index)\n");
        printf("6-Supprimer une note (par index)\n");
        printf("0-Quitter\n");
        printf("CHOIX:\n");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            
            saisirnotes(T);
            break;
        case 2:
        afficherNotes(T);
        break;
        case 3:afficherStatistiques(T);
        break;
        case 4:ajouterunenotes(T);
        break;
        case 5:moidifierunenote(T);
        
        break;
        case 6:supprimerunenote(T);
        break;
        
        default:printf("FIN");
            break;
        }

    }while (a!=0);
    
    return 0;
}