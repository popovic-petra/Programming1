#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primjer1();
void primjer2();
void zadatak1();
void zadatak2();
void zadatak3();
void zadatak4();

int main(void) {
	primjer1();
	return 0;
}

void primjer1() {

	printf("Integer data types:\n");

	int a = 2147483648;                 // value range za int je u rasponu od -2147483648 do 2147483647
	unsigned b = 4294967295;            // uvijek pozitivan                       
	short e = -32768;
	unsigned short f = 32767;
	long long g = -9223372036854775808LL;
	unsigned long h = 18446744073709551615UL;

	char c = 'a';
	char d = 80;                        // ispiše 'P'


	printf("|int                    | %zu bajta | %d\n", sizeof(int), a);
	printf("|unsigned int           | %zu bajta | %u\n", sizeof(int), b);
	printf("|short int              | %zu bajta | %hi\n", sizeof(short int), e);
	printf("|unsigned short int     | %zu bajta | %hu\n", sizeof(unsigned short int), f);
	printf("|long int               | %zu bajta | %lli\n", sizeof(long int), g);
	printf("|unsigned long int      | %zu bajta | %lu\n", sizeof(unsigned long int), h);
	printf("|char                   | %zu bajta | %c\n", sizeof(char), c);
	printf("|char                   | %zu bajta | %c\n", sizeof(char), d);

	printf("Floating-point data types:\n");

	float i = 2.876534543f;             // bez obzira što sam zadala preciznost veću od 6 decimalnih mjesta, komp ispiše samo 6
	double j = 53.9867546511532534;     // preciznost na 15 dec mjesta 
	long double k = 7.76788243502135723781502137;

	printf("|float                  | %zu bajta | %f\n", sizeof(float), i);
	printf("|double                 | %zu bajta | %.15f\n", sizeof(double), j);     //ispiše broj s 15 decimalnih mjesta
	printf("|long double            | %zu bajta | %.19Lf\n", sizeof(long double), k);

	return 0;
}

void primjer2() {
	
	unsigned broj;

	printf("Upišite prirodni broj: ");
	scanf("%u", &broj);

	printf("OKT: %o; DEK: %u; HEX: %x", broj, broj, broj);

	getchar();

	char znak;

	printf("\nUpišite jedan znak: ");
	scanf("%c", &znak);

	printf("ASCII vrijednost znaka %c u OKT, DEC, HEX: %o (OKT), %d (DEK), %x (HEX)", znak, znak, znak, znak);

	return 0;
}

void zadatak1() {

	const int a = 1101;
	char znak = 'A';
	double broj;

	printf("Unesite realni broj: ");
	scanf("%lf", &broj);
	printf("Unijeli ste: %f\n", broj);

	return 0;
} 


void zadatak2() {
	char znak1;
	char znak2;

	printf("Unesite znak: ");
	scanf(" %c", &znak1);
	printf("ASCII vrijednost znaka %c je %d.\n", znak1, znak1);

	getchar();

	printf("\nUnesite znak: ");
	scanf(" %c", &znak2); // dodaka razmak prije %c kako bih spriječila program da uzima newline kao unos u scanf... ILI TO ILI getchar()!!

	printf("ASCII vrijednost znaka %c je %d.\n", znak2, znak2);

	return 0;
}

/*
Ovaj pristup je koristan kada želite unjeti karaktere, ali želite ignorirati praznine (bijeline) 
koje korisnik može slučajno unjeti. Na primjer, ako korisnik pritisne Enter nakon prvog unosa, 
bez ovog razmaka, scanf bi odmah završio unos i uzima newline karakter kao drugi unos, 
što često nije željen rezultat. Korištenjem razmaka, možete zaobići taj problem.
*/

// Umjesto praznine ispred %c mogli smo koristiti i funkciju getchar()

void zadatak3() {
	
	int a = 90701;
	float pi = 3.14;
	double duzi_pi = 3.14159265395;
	char znak = 'a';

	printf("Tip int: cijeli broj %d zauzima %zu bajtova.\n", a, sizeof(int));
	printf("Tip float: realni broj %f zauzima %zu bajtova.\n", pi, sizeof(float));
	printf("Tip double: precizniji realni broj %f zauzima %zu bajtova.\n", duzi_pi, sizeof(double));
	printf("Tip char: znak %c zauzima %zu bajtova.\n", znak, sizeof(char));

	return 0;
} 

// 4. ZADATAK

/* Kreirati na dva različita načina različite realne simboličke konstante napisane 
znanstvenom notacijom. 
Ispisati na ekran njihove vrijednosti i koliko bajta memorije zauzimaju.*/

#define brz_svj_u_vakuumu 2.99792458E5L
void zadatak4() {

	const float coulombova_konst = 9.0e9F;

	printf("Brzina svjetlosti u vakuumu iznosi %.2f, a tip long double zauzima %zu bajtova.\n", brz_svj_u_vakuumu, sizeof(long double));
	printf("Coubumbova konstanta iznosi %.2f, a tip float zauzima %zu bajtova.", coulombova_konst, sizeof(float));

	return 0;

}

	
