#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zadatak1();
void zadatak2();
void zadatak3();
void zadatak4();

int main() {            // u int main() pozivam zadatak koji želim provjeriti
    
    zadatak1();

    return 0;
}


void zadatak1() {

    #define _CRT_SECURE_NO_WARNINGS
	int a;
	
    printf("Unesite cijeli broj: ");
	scanf("%d", &a);
	
    printf("Unijeli ste broj %d.\n", a);
	
    return 0;
}

void zadatak2() {

    int a;
    int b;

    printf("Unesi dvije cjelobrojne vrijednosti!\n");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d %d", a, b);

    return 0;
}

void zadatak3() {
    
    int visina;
    int masa;

    printf("Unesite svoju visinu u cm i masu u kilogramima!\n");

    printf("Visina: ");
    scanf("%d", &visina);

    printf("Masa: ");
    scanf("%d", &masa);

    printf("Tvoja visina je %d cm, a tvoja masa je %d kg!", visina, masa);

    return 0;
}


void zadatak4() {
    int a;
    int b;
    int c;
    
    printf("Unesite duljinu prve stranice trokuta: ");
    scanf("%d", &a);

    printf("Unesite duljinu druge stranice trokuta (dvostruka veća od prethodne): ");
    scanf("%d", &b);

    printf("Unesite duljinu treće stranice trokuta (dvostruka veća od prethodne): ");
    scanf("%d", &c);

    printf("Stranice trokuta u obrnutom redoslijedu su: %d %d %d", c, b, a);

    return 0;
}
