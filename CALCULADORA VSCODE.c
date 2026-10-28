 #include <stdio.h>
 
 int main () {
    int nota1;
	int nota2;
	int nota3;
	int nota4;
	int notaf;
	int respuesta;
	int nota_definitiva;
	double promedio;
	
    printf("    CALCULADORA DE PROMEDIOS - UDO      \n");
    
 	printf( "Ingrese la nota de el primer parcial: " );
	scanf("%d", &nota1);
	
	printf( "Ingrese la nota de el segundo parcial:");
	scanf("%d", &nota2);
	
	printf( "Ingrese la nota de el tercer parcial: ");
	scanf("%d", &nota3); 
	
	printf( "Quieres agregar una cuarta nota? (1: si, 0:no)");
    scanf("%d", &respuesta);
	
	if(respuesta == 1)
	 {
		printf( "Agregue la cuarta nota: ");
	 scanf("%d", &nota4);
	 
	 promedio = ((nota1 + nota2 + nota3 + nota4)* 0.70)/4.0;
	}
	 
	 
	 else
	  { promedio = ((nota1 + nota2 + nota3)* 0.70)/3.0;
	  
	 }
	 
	 printf( "\n Tu promedio es %.2lf \n", promedio);
	  
	 if(promedio < 3.5) {
	  	
	printf("Tu promedio no fue suficiente para alcanzar la prueba final, muchos exitos en tu proximo semestre, echale bola");
	  }

   else if (promedio >= 3.5)
   {printf("Felicidades, vas a la prueba final :)");
   	
	   printf("<<<<<<<<<Ingresa tu nota final:"); 
   }
   
   scanf("%d", &notaf);
   	
	   
	   nota_definitiva = promedio + (notaf * 0.30);
	    
	   
	   if(nota_definitiva >= 5)
	   {
	   printf ("\n FELICIDADES; HAS APROBADO TU NOTA FINAL ES: %d \n", nota_definitiva);
	   }
	   else {
	   	printf ("No aprobaste, muchos exitos en tu proximo semestre, tranquilo, caer es parte de el aprendizaje :)");
	   } 
	   
	   
	   	}
