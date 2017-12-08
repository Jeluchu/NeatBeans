/* 
 * File:   main.cpp
 * Author: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
 *
 * Created on 8 de diciembre de 2017, 16:24
 */

#include <cstdlib>

using namespace std;

#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m]"
#define NEGROAZU "\x1B[1;38m"

int main() {
    int op1;
    int op2;

    printf("\n");
    system("toilet --gay -fpagga MAYOR O MENOR");
    printf("\n");

    printf("A continuación, introduce dos números para saber\n");
    printf("cuál de los dos es mayor\n");
    printf("\n");


    printf(AZUL "Introduce el primer número: " NORMAL);
    scanf(" %i", &op1);
    printf(AZUL "Introduce el segundo número: " NORMAL);
    scanf(" %i", &op2);
    
    if(op1>op2){
    printf(NEGROAZU "El número mayor es: ");
    printf("%i\n" NORMAL, op1);
    }
    else
    {
    printf(NEGROAZU "El número mayor es: ");
    printf("%i\n" NORMAL, op2);
    }
    
    return EXIT_SUCCESS;

}