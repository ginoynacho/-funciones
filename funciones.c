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
