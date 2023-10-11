#include <stdio.h>
#include <stdlib.h>
int main()
{   system("cls");
    printf("Aqu¡ un mensaje y un salto de l¡nea:\n");
    const char* Fac = "FCI";
    printf("\t.%10s.\n\t.%-10s.\n\t.%*s.\n", Fac, Fac, 10, Fac);

    printf("Muestra el caracter de un c¢digo y el signo porcentaje:\t%c %%\n", 66);

    printf("Manipulaci¢n de enteros:\n");
    printf("Sistema de numeraci¢n en decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 13, 17, 22, 4, -10);
    printf("Sistema de numeraci¢n en hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf("Sistema de numeraci¢n en octal:\t%o %#o %#o\n", 10, 10, 4);

    printf("Manipulaci¢n de puntos flotantes:\n");
    printf("Completando:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    printf("Ajustado:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("Notaci¢n cient¡fica:\t%E %e\n", 1.5, 1.5);

    system("pause");
return 0;
}
