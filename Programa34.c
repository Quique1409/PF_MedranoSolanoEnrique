//LLene un arreglo de 100 elementos (del 200 al 101)

#include <stdio.h>

int main(){

    int arreglo [100];
    int i;

    //LLenar arreglo
    for (i = 200; i > 100; i--)
    {
        arreglo[i] = i;
    }

    return 0;
}