#include<stdio.h>

int main( )

	/************************************** * 
	Trabalho 2 de Programacao de Computadores I 
	- Retangulo * Curso de Sistemas da informacao *
	Aluno: vanderquintanilha - matricula: 0055013538* 
	Professor: Alex Salgado 
	***************************************/

{
	
	int i , largura, altura;
	char  x;
	int j;
	int z;
	int v;
	int sn=1;


      
         	
	while (sn<2)// while aqui!
     	
    	{
    		altura=-1;
    		largura=-1;
    		x=33;
    		
    		
      while((x<33) || (x>127) || (x>47) && (x<58)) //tirei os numeros e delimitei os caracteres
        {
         		
         {
         	
     	    printf("\n\nEntre com caractere desejado.\n");
     	      
            scanf("%c",&x);
	     
	        printf("\nVocê digitou %c\n\n",x);
       	}
         	
       }		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
	     
	     while ( (altura<1 ) || (altura>30))
	     {
	     
	       {
	      	printf("\nEntre com a altura.\n\n");
	      	
	      	printf("\nEntre ( 1 e 30)\n\n");
	      	
	      	scanf("%d",&altura);
	        }
	        
	        if ( ( altura<1) || (altura>30))
	        {
	        	printf(" \n\nErro\n");
	        	altura=1;
	        }
	      
	     }
	      
	      while ( ( largura<1) || ( largura>30))
	      {
	      
	      {
	      	printf("\nEntre com a largura.\n\n");
	      	
	      	printf("\n Entre (1 e 30)\n\n");
	      	
	      	scanf("%d",&largura);
	      }	  
	      
	      if ( (largura<1) || (largura>30))
	      {
	      	printf("\n\nErro\n");
	      	altura=1;
	      }
	      
}//while	      


// começo do retangulo
	      
	      {
	      		      
	      printf(" \n\nOla meu nome é vander e o retangulo ficou assim.\n\n"); 
	      
	      }
	      
        	for (i=0; i< largura;i++)
        	
	  	  	{
	  	     	printf("%2.1c",x);
	     		}	
	     			
	     	for (z = 0; z < altura; z++) 
	     	
	     	{    	
	     		     		  		
	     	 	{
	     		 	printf("\n%c",x);
	      		}
	      	
	     			for (j=0 ; j < largura-1; j++)
	     			
	  	          	{	          		
	  	  	  	      printf(" ");  
	  	  	  	      printf(" ");     	   
	  	          	}
	  	          	
	  	       {
	  	       	printf(" ");   	
	  	       }   	
   	      	
	  	  	{
	  	  		printf("%c",x);		
	  	  	}	   	  	
	  	
    	  }	//z colona
	  
	  
         	  {
	                 printf(" \n");
         	  }
	   
	  	 for (v=0; v< largura;v++)
	  	 {
	  	 
	  	  	{
	  	     	printf("%2.1c",x);
	     		}		
	     		
	  
      	  }
	  
	
// fechamento do retangulo
	 
	   {
	   	
     	printf ("\n\ndeseja continuar?\n");
     	
        }
 
   
       {
       	
     	printf(" \nDigite ( 1 ) para sim e ( 2 ) para não.\n");
   	
	 scanf("%d",&sn);
	 
      }
      
 if ( sn>2)
 {
 
   while (( sn>2 ) || ( sn<1))
   {
 
      printf(" \n\nErro: digite (1) para sim e  (2) pra não.");
 
      scanf("%d",&sn);
 
   }
   
 }
 	
}// while sn	  
	  
}
	
	
	
	
	
	
	
	
	
	
	
	