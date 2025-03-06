#include <stdio.h>
#include <math.h>

typedef struct _com{
    int r;
    int i;
}complejo;

complejo asignarreal(complejo a, int num){
    a.r= num;
    return a;
}

complejo asignarimag(complejo a, int num){
    a.i= num;
    return a;
}

void impimag(complejo a){
    printf("Parte imaginaria: %ii \n", a.i);
}

void impreal(complejo a){
    printf("Parte real: %i\n", a.r);
}

complejo sumacom(complejo a, complejo b){
    complejo o;
    o.r= o.i= 0;
    o.r= a.r + b.r;
    o.i= a.i + b.i;
    return o;
}

float modulo(complejo a){
    float modulo;
    modulo= sqrt(a.r*a.r + a.i*a.i);
    return modulo;
}

int main()
{
    complejo com1, com2, com3;
    com1.r= com1.i= 0;
    com2.r= com2.i= 0;
    com3.r= com3.i= 0;
    com1= asignarreal(com1, 3);
    com1= asignarimag(com1, 5);
    com2= asignarreal(com2, 4);
    com2= asignarimag(com2, 6);
    printf("El primer numero complejo es:\n");
    impreal(com1);
    impimag(com1);
    printf("El segundo numero complejo es:\n");
    impreal(com2);
    impimag(com2);
    printf("La suma de esos numeros complejos es:\n");
    com3= sumacom(com1, com2);
    impreal(com3);
    impimag(com3);
    printf("El modulo de este ultimo numero complejo es:\n");
    float mod= modulo(com3);
    printf("%3.f\n", mod);
    return 0;
}