#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c= conjunto_vacio();
    d= conjunto_vacio();
    e= conjunto_vacio();
    printf("El conjunto c está vacio %d\n", es_vacio(c));
    c= agregar(c, 2);
    c= agregar(c, 3);
    c= agregar(c, 19);
    c= agregar(c, 11);
    c= agregar(c, 15);
     prin_conjunto(c);
    d= agregar(c, 2);
    d= agregar(c, 3);
    d= agregar(c, 19);
    d= agregar(c, 11);
    d= agregar(c, 15);
    prin_conjunto(d);
    e= _union(c, d);

    prin_conjunto(e);
    return 0;
}