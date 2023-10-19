// 1. ZADATAK


/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const int a = 1101;
	char znak = 'A';
	double broj;

	printf("Unesite realni broj: ");
	scanf("%lf", &broj);
	printf("Unijeli ste: %f\n", broj);

	return 0;
} 
*/


// 2. ZADATAK

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
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
*/

/*
Ovaj pristup je koristan kada želite unjeti karaktere, ali želite ignorirati praznine (bijeline) 
koje korisnik može slučajno unjeti. Na primjer, ako korisnik pritisne Enter nakon prvog unosa, 
bez ovog razmaka, scanf bi odmah završio unos i uzima newline karakter kao drugi unos, 
što često nije željen rezultat. Korištenjem razmaka, možete zaobići taj problem.
*/

// Umjesto praznine ispred %c mogli smo koristiti i funkciju getchar()

// 3. ZADATAK
/*

int main(void) {
	
	int a = 90701;
	float pi = 3.14;
	double duzi_pi = 3.14159265395;
	char znak = 'a';

	printf("Tip int: cijeli broj %d zauzima %lu bajtova.\n", a, sizeof(int));
	printf("Tip float: realni broj %f zauzima %lu bajtova.\n", pi, sizeof(float));
	printf("Tip double: precizniji realni broj %f zauzima %lu bajtova.\n", duzi_pi, sizeof(double));
	printf("Tip char: znak %c zauzima %lu bajtova.\n", znak, sizeof(char));

	return 0;
} 
*/

// 4. ZADATAK

/* Kreirati na dva različita načina različite realne simboličke konstante napisane 
znanstvenom notacijom. 
Ispisati na ekran njihove vrijednosti i koliko bajta memorije zauzimaju.*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	long double brz_svj_u_vakuumu = 2.99792458E5L;
	float coulombova_konst = 9.0e9F;

	printf("Brzina svjetlosti u vakuumu iznosi %f, a tip long double zauzima %lu bajtova.\n", brz_svj_u_vakuumu, sizeof(long double));
	printf("Coubumbova konstanta iznosi %f, a tip float zauzima %lu bajtova.", coulombova_konst, sizeof(float));

	return 0;

}
*/
