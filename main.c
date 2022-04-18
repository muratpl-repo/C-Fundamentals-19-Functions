#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define yazdir printf


void aliuclemesi() {
    yazdir("Ali\n");
    yazdir("Ali\n");
    yazdir("Ali\n");
}


float karesiniAl(float sayi) {
    return sayi*sayi;
}


int main()
{
    setlocale(LC_ALL,"Turkish");
    aliuclemesi();
    printf("%f",karesiniAl(3.1));
    return 0;
}
