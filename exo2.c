#include <stdlib.h>
#include <stdio.h>


int main( int argc, char* argv[] ){
 int i;
                         /*affichage du nom de lexecutable*/
                         
 printf("Nom de l'executable :  %s\n", argv[0]);
 
                             /*avec la boucle while*/
                 i = 1 ;
  while(i< argc) {
     
                 /*affichage des arguments*/
                 
                    
            
     printf("   parametre n°%d : ‘%s’\n", i, argv[i]);
     
     i ++;
     
}
 
 
                           /*avec la boucle for*/
 
 for(i = 1 ; i< argc ; i ++) {
     
                        /*affichage des arguments*/
                            
     printf("   parametre n°%d : ‘%s’\n", i, argv[i]);
     
}
 
 
 
 return 0 ;}
