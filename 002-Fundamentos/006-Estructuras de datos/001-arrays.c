#include <stdio.h>

int main(int argc,char *argv[]){
    
    int telefonos[20];
    
    telefonos[0] = 12345;
    telefonos[1] = 22345;
    telefonos[2] = 32345;
    telefonos[3] = 42345;
    
    printf("El primer telefono es: %i \n", telefonos[0]);
    printf("El segundo telefono es: %i \n", telefonos[1]);
    printf("El tercer telefono es: %i \n", telefonos[2]);
    printf("El cuarto telefono es: %i \n", telefonos[3]);
    
    return 0;
}