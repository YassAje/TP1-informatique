#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  
     int i ;
     unsigned char A;
     signed char B;
     int N_ITERATIONS = 260;

     
   
       
   while(i< N_ITERATIONS){ 
       
/* la boucle while allant de 0 à 259 pour éviter la répitition */
    

             /* l'affichage des valeurs*/
         
      printf(" %u \t 0x%x \t %d \t 0x%x \t ligne :%d \n",A,A,B,B,i);


      

     B++;
     A++;
     i++;
     
             /* on incrémente les valeurs 260 fois */

} 


  return(EXIT_SUCCESS);
}


/* les valeurs sont bien differentes entre 128eme et 255eme lignes puisque chaque type de ces variable interprete ces nombres differemment*/
