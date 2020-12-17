#include <stdio.h>
 float elevi[9], min, max,s,med,dif,ss;
 int n,i;
int main()
{
    
    printf("Introdu numarul de probe la care a participat concurentul: ");
    scanf("%d", &n);
    if (n<4) {
        printf("numar de probe insuficient!\n"); 
        return 1;
    } 
    
    if (n>10) {
        printf("numar de probe depasit!\n"); 
        return 1;
    } 
    
    
    printf("Introduceti notele pentru probe: \n");
        for (int i=0; i<n; i++)
              scanf("%f",&elevi[i]);
            
    //prelucrare tablou 
       min=elevi[0]; max=elevi[0];
     for (int i=1; i<n; i++){
          if (elevi[i]<min) min=elevi[i];
          if (elevi[i]>max) max=elevi[i];
     }
      
      for (int i=0; i<n; i++){
      s=s+elevi[i];
      dif=(min+max);
      ss=s-dif;
      med=(ss/(n-2));
      }
    
        //afisare rezultat
    /*printf("Minim este: %f \n", min);
    printf("Maxim este: %f \n", max);
    printf("Suma este: %f \n", s);
    printf("Diferenta este: %f \n", dif);
    printf("Suma noua este: %f \n", ss);*/
    printf("Media este: %f \n", med);
    
   
    if ((med>=5.00) && (med<=7.00)){
              printf("Nu este totul pierdut!");
          }
          
          if ((med>=7.01) && (med<=8.50)){
              printf("Minunat, poti si mai mult!");
              return 1;
          }
          
          if ((med>=8.51) && (med<=9.49)){
              printf("Bravo, te descurci foarte bine!");
              return 1;
          }
          
          if ((med>=9.50) && (med<=10.00)){
              printf("Excelent!");
             return 1;
          }
        
    return 0;
}





