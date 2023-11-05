#include <stdio.h>

int main(int argc,char *argv[]){
    
    char* agenda[10][4];
    
    agenda[0][0] = "Jose Antonio";
    agenda[0][1] = "Prieto Mendez";
    agenda[0][2] = "98765";
    agenda[0][3] = "info@correo.com";
    
    agenda[1][0] = "Antonio";
    agenda[1][1] = "Mendez";
    agenda[1][2] = "918765";
    agenda[1][3] = "info2@correo.com";
    
    printf("El correo del segundo registro de la agenda es: %s \n", agenda[1][3]);
    
    return 0;
}