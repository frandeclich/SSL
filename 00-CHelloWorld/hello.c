#include <stdio.h>
int main()
{
    FILE* salida;
    salida = fopen("output.txt", "wt");
    fputs("Hello World!\n", salida);
    fputs("This is the best code I have written in my hole life\n", salida);
    fputs("See you next friday!\n", salida);
    fclose(salida);
    printf("Proceso completado");
    return 0;
return 0;
}
