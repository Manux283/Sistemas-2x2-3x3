/*
Grupo:
NIELSEN THOMAS
OLAIZOLA JULIAN
MOLFINO MANUEL
TRONCOSO FERNANDO
*/

#include <stdio.h>
#include <cmath>

int cant1, cant2, i;

int main(){

	int n=0;
	int n1=0;
	int n2=0;
	int opcion;
	int opcion1;
	int opcion2;
	int resultadoSuma=0;
	int resultadoResta=0;
	int resultadoMultiplicacion=0;
	float resultadoDivision=0;
	int resultadoPotencia=0;
	float resultadoRaices=0;

	while(n<300){


	printf("---------------------------------------------------- \n");
	printf("1) Operaciones con numeros naturales \n");
	printf("2) Operaciones con Vectores \n");
	printf("3) Operaciones con Matrices \n");
	printf("4) Sistemas de Ecuaciones \n");
	printf("5) Salir del programa \n\n");

	printf("ingrese una opcion del [1-5]: ");
	scanf("%d", &opcion);

	switch(opcion){
		case 1:

			printf("---------------------------------------------------- \n");
			printf("1) Suma \n");
			printf("2) Resta \n");
			printf("3) Multiplicacion \n");
			printf("4) Division \n");
			printf("5) Potencia \n");
			printf("6) Raices \n");
			printf("7) Salir del programa \n\n");

			printf("ingrese una opcion del [1-7]: ");
			scanf("%d", &opcion1);

			switch(opcion1){
				case 1:

					printf("---------------------------------------------------- \n");

					printf("ingrese el primer numero para realizar la suma: \n");
					scanf("%d",&n1);

					printf("ingrese el segundo numero para realizar la suma: \n");
					scanf("%d",&n2);

					 resultadoSuma = n1 + n2;

					printf("la suma de los dos numeros son: [%d]\n", resultadoSuma);

				break;

				case 2:

					printf("---------------------------------------------------- \n");

					printf("ingrese el primer numero para realizar la resta: \n");
					scanf("%d",&n1);

					printf("ingrese el segundo numero para realizar la resta: \n");
					scanf("%d",&n2);

					 resultadoResta = n1 - n2;

					printf("la resta de los dos numeros son: [%d]\n", resultadoResta);

				break;

				case 3:

					printf("---------------------------------------------------- \n");

					printf("ingrese el primer numero para realizar la multiplicacion: \n");
					scanf("%d",&n1);

					printf("ingrese el segundo numero para realizar la multiplicacion: \n");
					scanf("%d",&n2);

					 resultadoMultiplicacion = n1 * n2;

					printf("la multiplicacion de los dos numeros son: [%d]\n", resultadoMultiplicacion);

				break;

				case 4:

					printf("---------------------------------------------------- \n");

					printf("ingrese el primer numero para realizar la division: \n");
					scanf("%d",&n1);

					printf("ingrese el segundo numero para realizar la divicion: \n");
					scanf("%d",&n2);

					if (n2 == 0) {
						printf("Error: Division por cero no permitida.\n");
					} else {
						resultadoDivision = (float)n1 / n2;
						printf("la division de los dos numeros son: [%f]\n", resultadoDivision);
					}

				break;

				case 5:

					printf("---------------------------------------------------- \n");

					printf("ingrese el primer numero para realizar la potenciasion(base): \n");
					scanf("%d",&n1);

					printf("ingrese el segundo numero para realizar la potenciasion(exponente): \n");
					scanf("%d",&n2);

					resultadoPotencia = pow(n1, n2);

					printf("la potenciasion de los dos numeros son: [%d]\n", resultadoPotencia);

				break;

				case 6:

					printf("---------------------------------------------------- \n");

					printf("ingrese el numero para realizar la raiz: \n");
					scanf("%d",&n1);

					if (n1 < 0) {
						printf("no se pueden numeros negativos en una raiz \n");
					} else {
						resultadoRaices = sqrt(n1);
						printf("la raiz del numero es: [%f]\n", resultadoRaices);
					}

				break;

				case 7:

					return 0;

				break;

				default:

					printf("opcion no valida\n");

				break;

			}

		break;

		case 2:

			printf("---------------------------------------------------- \n");
			printf("1) Realizar suma\n");
			printf("2) Realizar resta\n");
			printf("3) Realizar multiplicacion de escalar\n");
			printf("4) Realizar producto escalar\n");
			printf("5) Realizar producto vectorial\n");
			printf("6) Salir\n\n");

			printf("Ingrese la operacion a realizar: ");
			scanf("%d", &opcion2);

			switch(opcion2){
				case 1: {
					printf("Ingrese la cantidad de posiciones del vector: ");
					scanf("%d", &cant1);
					int vec[cant1];

					for(i=0;i<cant1;i++){
						printf("Ingrese un numero en la posicion [%d]: ", i+1);
						scanf("%d", &vec[i]);
					}

					printf("Ingrese la cantidad de posiciones del vector 2: ");
					scanf("%d", &cant2);
					int vec2[cant2];

					for(i=0;i<cant2;i++){
						printf("Ingrese un numero en la posicion [%d] ", i+1);
						scanf("%d", &vec2[i]);
					}

					if(cant1==cant2){
					

					printf("El resultado es: ");
					for(i=0;i<cant1;i++){
						vec[i]+=vec2[i];
						printf("%d ", vec[i]);
					}
					printf("\n");
			
			}else{
				printf("\nNo se puede realizar la operacion debido a que los vectores son de diferentes tamaños\n");
			}
			
				}
				
				
				break;

				case 2: {
					printf("Ingrese la cantidad de posiciones del vector: ");
					scanf("%d", &cant1);
					int vec[cant1];

					for(i=0;i<cant1;i++){
						printf("Ingrese un numero en la posicion [%d]: ", i+1);
						scanf("%d", &vec[i]);
					}

					printf("Ingrese la cantidad de posiciones del vector 2: ");
					scanf("%d", &cant2);
					int vec2[cant2];

					for(i=0;i<cant2;i++){
						printf("Ingrese un numero en la posicion [%d] ", i+1);
						scanf("%d", &vec2[i]);
					}


				if(cant1==cant2){

					printf("El resultado es: ");
					for(i=0;i<cant1;i++){
						vec[i]-=vec2[i];
						printf("%d ", vec[i]);
					}
					printf("\n");
					
				}else{
				printf("\nNo se puede realizar la operacion debido a que los vectores son de diferentes tamaños\n");
			}
					
				}
				break;

				case 3: {
					printf("Ingrese la cantidad de posiciones del vector: ");
					scanf("%d", &cant1);
					int vec[cant1];

					for(i=0;i<cant1;i++){
						printf("Ingrese un numero en la posicion [%d]: ", i+1);
						scanf("%d", &vec[i]);
					}

					int aux;
					printf("Ingresar por cuanto multiplicar al vector: ");
					scanf("%d", &aux);

					printf("El resultado es: ");
					for(i=0;i<cant1;i++){
						vec[i]*=aux;
						printf("%d ", vec[i]);
					}
					printf("\n");
				}
				break;

				case 4: {
					printf("Ingrese la cantidad de posiciones del vector: ");
					scanf("%d", &cant1);
					int vec[cant1];

					for(i=0;i<cant1;i++){
						printf("Ingrese un numero en la posicion [%d]: ", i+1);
						scanf("%d", &vec[i]);
					}

					printf("Ingrese la cantidad de posiciones del vector 2: ");
					scanf("%d", &cant2);
					int vec2[cant2];

					for(i=0;i<cant2;i++){
						printf("Ingrese un numero en la posicion [%d] ", i+1);
						scanf("%d", &vec2[i]);
					}

			if(cant1==cant2){

					for(i=0;i<cant1;i++){
						vec[i]*=vec2[i];
					}

					for(i=0;i<cant1;i++){
						vec[0]+=vec2[i];
					}

					printf("El resultado es: ");
					for(i=0;i<cant1;i++){
						printf("%d ", vec[i]);
					}
					printf("\n");
					
			}else{
				printf("\nNo se puede realizar la operacion debido a que los vectores son de diferentes tamaños\n");
			}
					
					
				}
				break;

				case 5: {
					printf("Ingrese la cantidad de posiciones del vector: ");
					scanf("%d", &cant1);
					if(cant1!=3){
						printf("El vector debe ser de 3 dimensiones\n");
						break;
					}
					int vec[cant1];

					for(i=0;i<cant1;i++){
						printf("Ingrese un numero en la posicion [%d]: ", i+1);
						scanf("%d", &vec[i]);
					}

					printf("Ingrese la cantidad de posiciones del vector 2: ");
					scanf("%d", &cant2);
					if(cant2!=3){
						printf("El vector debe ser de 3 dimensiones\n");
						break;
					}
					int vec2[cant2];

					for(i=0;i<cant2;i++){
						printf("Ingrese un numero en la posicion [%d] ", i+1);
						scanf("%d", &vec2[i]);
					}

					int resultado[3];

					resultado[0] = (vec[1]*vec2[2]) - (vec[2]*vec2[1]);
					resultado[1] = (vec[2]*vec2[0]) - (vec[0]*vec2[2]);
					resultado[2] = (vec[0]*vec2[1]) - (vec[1]*vec2[0]);

					printf("El producto vectorial es: (%d, %d, %d)\n", resultado[0], resultado[1], resultado[2]);
				}
				break;

            case 6:
                break;

            default:
                printf("Opcion no valida para vectores.\n");
                break;
			}

		break;

		case 3:
			
	int cantFC;
	printf("Ingrese la cantidad de filas y columnas de las matrices: ");
	scanf("%d", &cantFC);

	printf("---------------------------------------------------- \n");


	printf("1) Suma de matrices\n");
	printf("2) Resta de matrices\n");
	printf("3) Multiplicacion de escalar por una matriz\n");
	printf("4) Multiplicacion de matrices\n");
	printf("5) Determinante de una matriz 2x2 o 3x3\n");
	printf("6) Inversa de una Matriz 2x2 o 3x3\n");
	printf("7) Division de matrices 2x2 o 3x3\n\n");

	int op3;

	printf("Elija un opcion: ");
	scanf("%d", &op3);

	switch(op3){

		case 1:{

			int mat1[cantFC][cantFC];
			int mat2[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la primera matriz: ",k+1 ,i+1 );
					scanf("%d", &mat1[i][k]);
				}
			}

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la segunda matriz: ",k+1 ,i+1 );
					scanf("%d", &mat2[i][k]);
				}
			}

			int matN[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					matN[i][k]=(mat1[i][k]+mat2[i][k]);
				}
			}

			printf("\nLa matriz resultante es: \n");

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%d]", matN[i][k]);
				}
				printf("\n");
			}

			break;
		}

		case 2:{

				int mat1[cantFC][cantFC];
			int mat2[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la primera matriz: ",k+1 ,i+1 );
					scanf("%d", &mat1[i][k]);
				}
			}

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la segunda matriz: ",k+1 ,i+1 );
					scanf("%d", &mat2[i][k]);
				}
			}

			int matN[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					matN[i][k]=(mat1[i][k]-mat2[i][k]);
				}
			}

			printf("\nLa matriz resultante es: \n");

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%d]", matN[i][k]);
				}
				printf("\n");
			}


			break;
		}
		case 3:{

			int mat[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d: ",k+1 ,i+1 );
					scanf("%d", &mat[i][k]);
				}
			}

			printf("\n\ningresar el numero por el cual se quiere multiplicar: ");
			int x;
			scanf("%d", &x);

			int matN[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				matN[i][k]=mat[i][k]*x;
				}
			}

		for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				printf("[%d]  ", matN[i][k]);
				}
				printf("\n");
			}

			break;
		}
		case 4:{

			int mat1[cantFC][cantFC];
			int mat2[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la primera matriz: ",k+1 ,i+1 );
					scanf("%d", &mat1[i][k]);
				}
			}

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la segunda matriz: ",k+1 ,i+1 );
					scanf("%d", &mat2[i][k]);
				}
			}

			int matN[cantFC][cantFC];

			for(int i=0;i<cantFC;i++) {
				for (int k=0;k<cantFC;k++) {
					matN[i][k] = 0;
					for (int j=0;j<cantFC; j++) {
						matN[i][k] += (mat1[i][j]*mat2[j][k]);
					}
				}
			}

		for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				printf("[%d]  ", matN[i][k]);
				}
				printf("\n");
			}


			break;
		}
		case 5:{

					int mat[cantFC][cantFC];

					if(cantFC==2){
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d: ",k+1 ,i+1 );
					scanf("%d", &mat[i][k]);
				}
			}

			int DetM;

			DetM=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);

			printf("\nel determinante de la matriz es %d\n ", DetM);
					}

			else if(cantFC==3){
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d: ",k+1 ,i+1 );
					scanf("%d", &mat[i][k]);
				}
			}

			int DetM;
			DetM = (mat[0][0] * mat[1][1] * mat[2][2]) +
				   (mat[0][1] * mat[1][2] * mat[2][0]) +
				   (mat[0][2] * mat[1][0] * mat[2][1]) -
				   (mat[0][2] * mat[1][1] * mat[2][0]) -
				   (mat[0][0] * mat[1][2] * mat[2][1]) -
				   (mat[0][1] * mat[1][0] * mat[2][2]);

			printf("\nel determinante de la matriz es %d\n ", DetM);

					}


				else{
					printf("\nNo se puede calcular el determinante para una matriz de %dx%d. Solo se implementa para matrices de 2x2 o 3x3.\n", cantFC, cantFC);
					break;
				}


			break;
		}
		case 6:{
			
		
			
			int mat[cantFC][cantFC];

					if(cantFC==2){
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d: ",k+1 ,i+1 );
					scanf("%d", &mat[i][k]);
				}
			}

			int DetM;

			DetM=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);

			printf("\nel determinante de la matriz es %d\n ", DetM);
			
			
			if(DetM!=0){
				
			float matT[cantFC][cantFC];
			
			matT[0][0]= (mat[1][1]);
			matT[0][1]= -(mat[0][1]);
			matT[1][0]= -(mat[1][0]);
			matT[1][1]= (mat[0][0]);
			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				matT[i][k]=matT[i][k]/DetM;
				}
			}
			
			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%f] ",matT[i][k] );
				}
				printf("\n");
			}
			
			}else{
				
				printf("\nNo se puede realizar la inversa de esta matriz porque su determinante es igual a 0\n");
			}
			
					}

			else if(cantFC==3){
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d: ",k+1 ,i+1 );
					scanf("%d", &mat[i][k]);
				}
			}
			int DetM;
						DetM = (mat[0][0] * mat[1][1] * mat[2][2]) +
							   (mat[0][1] * mat[1][2] * mat[2][0]) +
							   (mat[0][2] * mat[1][0] * mat[2][1]) -
							   (mat[0][2] * mat[1][1] * mat[2][0]) -
							   (mat[0][0] * mat[1][2] * mat[2][1]) -
							   (mat[0][1] * mat[1][0] * mat[2][2]);
			
						
						if(DetM!=0){
			int matN[cantFC][cantFC];

			matN[0][0]= ((mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1]));
			matN[0][1]= -((mat[1][0]*mat[2][2])-(mat[1][2]*mat[2][0]));
			matN[0][2]= ((mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0]));
			matN[1][0]= -((mat[0][1]*mat[2][2])-(mat[0][2]*mat[2][1]));
			matN[1][1]= ((mat[0][0]*mat[2][2])-(mat[0][2]*mat[2][0]));
			matN[1][2]= -((mat[0][0]*mat[2][1])-(mat[0][1]*mat[2][0]));
			matN[2][0]= ((mat[0][1]*mat[1][2])-(mat[0][2]*mat[1][1]));
			matN[2][1]= -((mat[0][0]*mat[1][2])-(mat[0][2]*mat[1][0]));
			matN[2][2]= ((mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]));


			float matNT[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					matNT[i][k]=matN[k][i];
				}
			}

			
				for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				matNT[i][k]=matNT[i][k]/DetM;
				}
			}
			
			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%f] ",matNT[i][k] );
				}
				printf("\n");
			}

			}else{
				
				printf("\nNo se puede realizar la inversa de esta matriz porque su determinante es igual a 0\n");
			}


					}


					else{
					printf("\nNo se puede calcular la inversa para una matriz de %dx%d. Solo se usa para matrices de 2x2 o 3x3.\n", cantFC, cantFC);
					break;
				}
		

			break;
		}
		case 7:{

		if(cantFC<4&&cantFC>1){
	

			float mat1[cantFC][cantFC];
			float mat2[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la primera matriz: ",k+1 ,i+1 );
					scanf("%f", &mat1[i][k]);
				}
			}

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("\nIngrese el valor de la columna %d de la fila %d de la matriz divisora: ",k+1 ,i+1 );
					scanf("%f", &mat2[i][k]);
				}
			}


			float matN[cantFC][cantFC];


			if(cantFC==2){
			

			int DetM;

			DetM=(mat2[0][0]*mat2[1][1])-(mat2[0][1]*mat2[1][0]);

			printf("\nel determinante de la matriz es %d\n ", DetM);
			
			
			if(DetM!=0){
				
			float matT[cantFC][cantFC];
			
			matT[0][0]= (mat2[1][1]);
			matT[0][1]= -(mat2[0][1]);
			matT[1][0]= -(mat2[1][0]);
			matT[1][1]= (mat2[0][0]);

			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				matT[i][k]=matT[i][k]/DetM;
				}
			}
			
			for(int i=0;i<cantFC;i++) {
				for (int k=0;k<cantFC;k++) {
					matN[i][k] = 0;
					for (int j=0;j<cantFC; j++) {
						matN[i][k] += (mat1[i][j]*matT[j][k]);
					}
				}
			}
			
			
			printf("\n El resultado de esta division es:\n");
			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%f] ",matN[i][k] );
				}
				printf("\n");
			}
			
			}else{
				
				printf("\nNo se puede realizar la inversa de esta matriz porque su determinante es igual a 0\n");
			}
			
					}

			else if(cantFC==3){
			
			
			
			int DetM;
						DetM = (mat2[0][0] * mat2[1][1] * mat2[2][2]) +
							   (mat2[0][1] * mat2[1][2] * mat2[2][0]) +
							   (mat2[0][2] * mat2[1][0] * mat2[2][1]) -
							   (mat2[0][2] * mat2[1][1] * mat2[2][0]) -
							   (mat2[0][0] * mat2[1][2] * mat2[2][1]) -
							   (mat2[0][1] * mat2[1][0] * mat2[2][2]);
			
						
						if(DetM!=0){
			int matN2[cantFC][cantFC];

			matN2[0][0]= ((mat2[1][1]*mat2[2][2])-(mat2[1][2]*mat2[2][1]));
			matN2[0][1]= -((mat2[1][0]*mat2[2][2])-(mat2[1][2]*mat2[2][0]));
			matN2[0][2]= ((mat2[1][0]*mat2[2][1])-(mat2[1][1]*mat2[2][0]));
			matN2[1][0]= -((mat2[0][1]*mat2[2][2])-(mat2[0][2]*mat2[2][1]));
			matN2[1][1]= ((mat2[0][0]*mat2[2][2])-(mat2[0][2]*mat2[2][0]));
			matN2[1][2]= -((mat2[0][0]*mat2[2][1])-(mat2[0][1]*mat2[2][0]));
			matN2[2][0]= ((mat2[0][1]*mat2[1][2])-(mat2[0][2]*mat2[1][1]));
			matN2[2][1]= -((mat2[0][0]*mat2[1][2])-(mat2[0][2]*mat2[1][0]));
			matN2[2][2]= ((mat2[0][0]*mat2[1][1])-(mat2[0][1]*mat2[1][0]));


			float matNT[cantFC][cantFC];

			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					matNT[i][k]=matN2[k][i];
				}
			}

			
				for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
				matNT[i][k]=matNT[i][k]/DetM;
				}
			}
			
			for(int i=0;i<cantFC;i++) {
				for (int k=0;k<cantFC;k++) {
					matN[i][k] = 0;
					for (int j=0;j<cantFC; j++) {
						matN[i][k] += (mat1[i][j]*matNT[j][k]);
					}
				}
			}
			
			
				printf("\n El resultado de esta division es:\n");
			
			
			
			for(int i=0;i<cantFC; i++){
				for(int k=0;k<cantFC;k++){
					printf("[%f] ",matN[i][k] );
				}
				printf("\n");
			}



			}else{
				
				printf("\nNo se puede realizar la inversa de esta matriz porque su determinante es igual a 0\n");
			}


					}

			}
				else{
					printf("\nNo se puede calcular la inversa para una matriz de %dx%d. Solo se usa para matrices de 2x2 o 3x3.\n", cantFC, cantFC);
					break;
				}



			break;
		}


	}
		break;

		case 4:
	int opcion4;

	printf("---------------------------------------------------- \n");
    printf("1) Sistema 2x2\n");
    printf("2) Sistema 3x3\n");
    
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion4);

    if (opcion4 == 1) {
        float a1, b1, c1;
        float a2, b2, c2;
        float det, detX, detY, x, y;

        printf("Ingrese los valores del sistema 2x2:\n");
        
        printf("Ecuacion 1 (a1 b1 c1): ");
        scanf("%f %f %f", &a1, &b1, &c1);
        printf("Ecuacion 2 (a2 b2 c2): ");
        scanf("%f %f %f", &a2, &b2, &c2);

        det = a1 * b2 - a2 * b1;

        if (det == 0) {
            printf("El sistema no tiene solucion unica.\n");
        } 
		else {
            detX = c1 * b2 - c2 * b1;
            detY = a1 * c2 - a2 * c1;
            x = detX / det;
            y = detY / det;

            printf("Solucion:\n");
            printf("x = %.2f\n", x);
            printf("y = %.2f\n", y);
        }

    } 
	else if (opcion4 == 2) {
        float a1, b1, c1, d1;
        float a2, b2, c2, d2;
        float a3, b3, c3, d3;
        float D, Dx, Dy, Dz;
        float x, y, z;

        printf("Ingrese los valores del sistema 3x3:\n");
        printf("Ecuacion 1 (a1 b1 c1 d1): ");
        scanf("%f %f %f %f", &a1, &b1, &c1, &d1);
        printf("Ecuacion 2 (a2 b2 c2 d2): ");
        scanf("%f %f %f %f", &a2, &b2, &c2, &d2);
        printf("Ecuacion 3 (a3 b3 c3 d3): ");
        scanf("%f %f %f %f", &a3, &b3, &c3, &d3);

        D = a1*(b2*c3 - b3*c2) - b1*(a2*c3 - a3*c2) + c1*(a2*b3 - a3*b2);

        if (D == 0) {
            printf("El sistema no tiene solucion unica.\n");
        } 
		else {
            Dx = d1*(b2*c3 - b3*c2) - b1*(d2*c3 - d3*c2) + c1*(d2*b3 - d3*b2);
            Dy = a1*(d2*c3 - d3*c2) - d1*(a2*c3 - a3*c2) + c1*(a2*d3 - a3*d2);
            Dz = a1*(b2*d3 - b3*d2) - b1*(a2*d3 - a3*d2) + d1*(a2*b3 - a3*b2);

            x = Dx / D;
            y = Dy / D;
            z = Dz / D;

            printf("Solucion:\n");
            printf("x = %.2f\n", x);
            printf("y = %.2f\n", y);
            printf("z = %.2f\n", z);
        }
        
    }
	 else {
        printf("Error, elija una opcion valida.\n");
    }

		break;

		case 5:
			printf("Saliendo del programa.\n");
			return 0;

		break;

		default:
			printf("opcion no valida\n");
		break;
	}

	}

	return 0;
}
