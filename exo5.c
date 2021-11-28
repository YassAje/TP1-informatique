#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])

{
    
        int i;
	unsigned bit = 0 ;
	unsigned mask = 1 ; 
        unsigned n;
        

/*tentative de convertir du decimal au binaire bit par bit*/

      n = argv[1];
      
        
	for (i=0; i<32; ++i)
            
	{
		bit = (n & mask) >> i ;
		printf("%d", bit) ;
		mask <<= 1 ;
                
	}
return 0; }
