#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc,char *argv[]){
	
	unsigned int nombre = 0x12345678;
	
	char *premier_octet = (char*)(&nombre);
        
        /* on utilise un variable de type char pour couper le premier octet de 32bits mot stockee dans le memoire*/
	
	printf("Le premier octet stocké en mémoire c'est : 0x%x\n",*premier_octet);
        
	if(*premier_octet==(nombre&0xFF)){
            
		printf("C'est une machine en little-endien\n");
                
	}else{
            
		printf("C'est une machine en big-endien\n");
	}
	
	

	return(EXIT_SUCCESS);

}
