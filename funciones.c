/*
  Declaraciones
*/

int obtener_mayor(int numeros[], int narreglos);

void par_impar(int numero);

/*
  Funciones
*/

int obtener_mayor(int num[], int narreglos){
    for(cont = 0; cont<narreglos; cont++){
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
