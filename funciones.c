/*
  Declaraciones
*/

int obtener_mayor(int numeros[], int narreglos);

void par_impar(int numero);

void imprimir(int arreglo[], int narreglos);

float promedio(int arreglo[], int narreglos);

int suma_func(int arreglo[], int narreglos);

int multiplicacion(int arreglo[], int narreglos);

void menor(int arreglo[], int narreglos);

void seEncuestra(char frase[], char caracter);

void seEncuestra(int array[], int len_arreglos, int digito_buscar);

float PorcentajePares(int array[], int narreglos);

float PorcentajeImpares(int array[], int narreglos);

int ContadorTermina0(int array[], int narreglos);

int ContadorNumNegativos(int array[], int narreglos);

void Factorial(int array[], int narreglos);

void Invertir(float array[], int narreglos);

void ultimoprimo(int num[],int narreglos);

void cuartoparidad(int num[],int narreglos);

void divisor2elem(int num[],int narreglos);

void elem2perfecto(int num[],int narreglos);

void mult3(int num[],int narreglos);

void mostrarhastamitad(int num[],int narreglos);

void BusacarMayor(float arreglo_numeros[][5],  int filas);

/*
  Funciones
*/

int obtener_mayor(int num[], int narreglos){
    for(cont = 0; cont<narreglos; cont++){
      if(cont == 0){
        num_mayor = num[cont];
      }
      if(num[cont] > num_mayor){
            num_mayor = num[cont];
        }
    }
    return num_mayor;

}

void par_impar(int num){

    if(num%2 == 0){
        printf("Es par \n");
    }else{
        printf("Es impar \n");
    }
}

void imprimir(int arreglo[], int narreglos){
    for(cont = 0; cont < narreglos; cont++){
        printf("%d ", arreglo[cont]);
    }
  
float promedio(int arreglo[], int narreglos){
    suma = 0;
    for(cont = 0; cont < narreglos; cont++){
       suma = suma + arreglo[cont];
    }
    return suma/narreglos;
}

int suma_func(int arreglo[], int narreglos){
    suma = 0;
    for(cont =0; cont<narreglos; cont++){
      if(cont==0)  
      suma = suma+arreglo[cont];
    }
    return suma;
}
  
int multiplicacion(int arreglo[], int narreglos){
    int multiplicacion_total = 1;
    for(cont =0; cont<narreglos; cont++){
        multiplicacion_total = multiplicacion_total * arreglo[cont];
    }
    return multiplicacion_total;
}

void menor(int arreglo[], int narreglos){
    int num_menor, pos;
    for(cont =0; cont<narreglos; cont++){
        if(cont == 0){
            num_menor = arreglo[cont];
            pos = cont+1;
        }else{
            if(num_menor > arreglo[cont]){
                num_menor = arreglo[cont];
                pos = cont+1;
            }
        }

    }
    printf("el numero menor es: %d, esta en la pos: %d", num_menor, pos);
}
  
void seEncuestra(char frase[], char caracter){
    int long_frase = strlen(frase), veces_caracter= 0;
    for(cont = 0; cont<long_frase; cont++){
        if(frase[cont] == caracter){
            veces_caracter = veces_caracter+1;
        }
    }
    printf("El caracter a examinar se encuentra %d veces en la frase.", veces_caracter);
}
  
void seEncuestra(int array[], int len_arreglos, int digito_buscar){
    int veces_num = 0;
    for(cont = 0; cont<len_arreglos; cont++){
        if(array[cont] == digito_buscar){
            veces_num = veces_num+1;
        }
    }
    printf("El digito a examinar se encuentra %d veces en el arreglo.", veces_num);
}
  
float PorcentajePares(int array[], int narreglos){
    int cont_pares = 0;
    for(int cont = 0; cont < narreglos ; cont++){
        if(array[cont] %2 == 0 ){
            cont_pares = cont_pares+1;
        }
    }
    return ((float)cont_pares/(float)narreglos)*100;
}
  
float PorcentajeImpares(int array[], int narreglos){
    int cont_impares = 0;
    for(int cont = 0; cont < narreglos ; cont++){
        if(array[cont] %2 != 0 ){
            cont_impares = cont_impares+1;
        }
    }
    return ((float)cont_impares/(float)narreglos)*100;
}

int ContadorTermina0(int array[], int narreglos){
    int cont_termina_0 = 0;
    for(int cont =0; cont<narreglos; cont++){
        if(array[cont]%10 == 0){
            cont_termina_0++;
        }
    }
    return cont_termina_0;
}
  
int ContadorNumNegativos(int array[], int narreglos){
    int cont_num_neg = 0;
    for(int cont =0; cont<narreglos; cont++){
        if(array[cont] < 0){
            cont_num_neg++;
        }
    }
    return cont_num_neg;
}
  
void Factorial(int array[], int narreglos){
    int factorial_temp = 1;
    for(int cont =0; cont<narreglos; cont++){
        factorial_temp = 1;
        if(array[cont]==0){
            array[cont] = 0;
        }else{
            for(int cont2 = array[cont]; cont2>0; cont2--){
                factorial_temp = factorial_temp*cont2;
            }
            array[cont] = factorial_temp;
        }
    }
}

void Invertir(float array[], int narreglos){
    float temp;
    int ultimo = narreglos-1;
    float array_invertido[narreglos];
    for(int cont = 0; cont<narreglos; cont++){
        temp = array[ultimo];
        array_invertido[cont] = temp;
        ultimo = ultimo-1;;
    }
    printf("Arreglo invertido:");
    for(int cont = 0; cont<narreglos; cont++){
        printf(" %.2f", array_invertido[cont]);
    }
}
  
void ultimoprimo(int num[],int narreglos){
    int ultnum = num[narreglos-1], cont_div = 0;
    for(int cont = 1; cont<=ultnum; cont++){
        if(ultnum%cont== 0){
            cont_div = cont_div +1;
        }
    }
    if(cont_div <= 2 || ultnum == 1){
        printf("El ultimo numero es primo\n");
    }else{
        printf("El ultimo numero no es primo\n");
    }
}

void cuartoparidad(int num[],int narreglos){
    if(narreglos<4){
        printf("No existe un cuarto numero en el arreglo\n");
    }else{
         if(num[3]%2 == 0){
        printf("el 4to numero es par \n");
    }else{
        printf("el 4to numero es impar \n");
    }
}
}

void divisor2elem(int num[],int narreglos){
    if(narreglos<2){
            printf("No existe un segundo numero en el arreglo\n");
    }else{
            printf("Los divisores del segundo elemento son: ");
            for(int cont = 1; cont<=num[1];cont++ ){
                if(num[1]%cont == 0){
                    printf("%d ", cont);
                }
            }
            printf("\n");
}
}

void elem2perfecto(int num[],int narreglos){
    if(narreglos<2){
        printf("No existe un segundo numero en el arreglo\n");
    }else{
        int divisores = 0;
        for(int cont = 1; cont<num[1];cont++ ){
            if(num[1]%cont == 0){
                divisores = divisores+cont;
            }
        }
        if(divisores == num[1]){
            printf("El segundo numero es perfecto\n");
        }else{
            printf("El segundo numero no es perfecto\n");
        }
    }
}

void mult3(int num[],int narreglos){
    printf("Los numeros multiplos de 3 son: ");
    for(int cont = 0; cont < narreglos; cont++){
        if(num[cont]%3 == 0){
            printf("%d ", num[cont]);
        }
    }
    printf("\n");
}

void mostrarhastamitad(int num[],int narreglos){
    int mitad = 0;
    if(narreglos%2==0){
        mitad = narreglos/2;
    }else{
        mitad = (narreglos+1)/2;
    }
    printf("Los elementos hasta la mitad son: ");
    for(int cont = 0; cont<mitad; cont++){
        printf("%d ", num[cont]);
    }
}
  

void BusacarMayor(float arreglo_numeros[][5], int filas){
    float num_mayor;
    for(int cont_columnas = 0; cont_columnas < 5; cont_columnas++){
        for(int cont_filas = 0; cont_filas<filas; cont_filas++){
          if(cont_columnas == 0  && cont_filas == 0){
            num_mayor = arreglo_numeros[cont_filas][cont_columnas];
          }
          if(arreglo_numeros[cont_filas][cont_columnas] > num_mayor){
                num_mayor = arreglo_numeros[cont_filas][cont_columnas];
          }
        }
    }
    printf("Numero mayor %.2f", num_mayor);
}
