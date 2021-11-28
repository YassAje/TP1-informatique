#include <stdio.h>
#include <stdlib.h>

#define GN 2.0e9
#define PN 2.0e6

int main(int argc,char *argv[]){
    
float fa;

float fb;


int k=1;

int i;

int j;

for(i=0;i<7;i++)
{
    
    fa=GN;

    fb=PN;

    fb=fb/k;

        printf("Ajouter %7d fois %9e à %9e donne",k,fb,fa);

for(j=0;j<k;j++)fa=fa+fb;

k*=10;

 printf(" %9e (erreur relative : %f %)\n",fa,((fa-GN)-PN)/PN);
 
}




return(EXIT_SUCCESS);

}
/*

*/
