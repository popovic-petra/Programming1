# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void zadatak1();
void zadatak2();
void zadatak3();
void zadatak4();
void zadatak5();
void zadatak6();
void zadatak7();
void zadatak8();
void zadatak9();
void zadatak10();

int main() {
	zadatak10();
	return 0;
}

/*Zadatak 1. - Omogućiti korisniku unos cijelog broja n iz intervala [5, 25]. Potom, za svaki broj od 1 do n, u
posebnom retku, ispisati na ekran isto toliko zvjezdica (*).*/

void zadatak1() {
	int broj;

	do {
		printf("Unesite cijeli broj [5, 25]: ");
		scanf("%d", &broj);
	} while (broj < 5 || broj>25);

	for (int i = 1; i <= broj; i++) {
		printf("*");
	}
}

/*Zadatak 2. Omogućiti korisniku unos dva cijela broja. Osigurati da drugi bude veći u odnosu na prvi. Ispisati na
ekran sve cijele brojeve između njih.*/

void zadatak2() {
	int a, b;
	do {
		printf("Unesi dva cijela broja tako da drugi bude veci od prvog: ");
		scanf("%d %d", &a, &b);
	} while (a > b);
	
	for (int i = a+1; i < b; i++) {
		printf("%d ", i);
	}
}

/*Zadatak 3. Omogućiti korisniku unos osam realnih brojeva. Osigurati da svaki unos bude unutar [- 5, 5]. Potom,
izračunati i na ekran ispisati srednju vrijednost unesenih brojeva.*/

void zadatak3() {
	float a, arSredina;
	float suma = 0;

	for (int i = 0; i < 8; i++) {
		do {
			printf("Unesite realan broj: ");
			scanf("%f", &a);
		} while (a < -5 || a > 5);
		suma = suma + a;
		arSredina = suma / 8;
	}
	printf("Aritmeticka sredina je %.2f.", arSredina);
}

/*Zadatak 4. Omogućiti korisniku unos jednog cijelog broja. Potom, izračunati i ispisati na ekran produkt
znamenki tog broja.*/

void zadatak4() {
	int a, produkt = 1;

	printf("Unesite cijeli broj: ");
	scanf("%d", &a);

	while (a != 0) {
		produkt *= a % 10;
		a /= 10;
	}
	printf("%d",produkt);
}

/*Zadatak 5. Omogućiti korisniku unos ocjena koje su predstavljene slovim A do F, velikim ili malim slovima, sve
dok se ne unese uskličnik (!). Nakon toga ispisati koliko je bilo uneseno ocjena od A do F. Koristiti
naredbu Switch-case.*/

void zadatak5() {
	char ocjena;
	int brojac = 0;

	do {
		printf("Unesite ocjenu (A, B, C, D, F) ili '!' za ispis ocjena: ");
		scanf(" %c", &ocjena);

		ocjena = toupper(ocjena);

		switch (ocjena) {
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'F':
			brojac++;
			break;
		default:
			if (ocjena != '!') {					// provjera da se ispisuje "Nepoznata ocjena" samo ako se unese nepoznato slovo, a ne uskličnik -> za ostala slova provjeravamo u ostatku switch case
				printf("Nepoznata ocjena.\n");
			}
		}
	} while (ocjena != '!');

	printf("Unijeli ste %d ocjena.", brojac);
}

/*Zadatak 6. Omogućiti korisniku unos jednog cijelog broja. Provjeriti i na ekran ispisati je li broj prost (prost broj
je pozitivan cijeli broj veći od 1 koji nema djelitelja osim jedan i samog sebe).*/

void zadatak6() {
	int broj;
	int prost = 1;

	printf("Unesite cijeli broj veci od 1: ");
	scanf("%d", &broj);

	if (broj <= 1) {
		printf("Broj mora biti veci od 1.");
	}

	for (int i = 2; i <= broj; i++) {
		if (broj % i == 0) {
			prost = 0;
			break;
		}
	}

	if (prost == 1) {
		printf("Broj %d je prost broj.", broj);
	}
	else {
		printf("Broj %d nije prost broj.", broj);
	}
}

/*Zadatak 7. Omogućiti korisniku unos jednog cijelog broja. Pronaći i na ekran ispisati sve djelitelje tog broja.*/

void zadatak7() {
	int broj;
	
	printf("Unesite jedan cijeli broj: ");
	scanf("%d", &broj);

	printf("Svi djelitelji broja %d su:\n", broj);

	for (int i = 1; i <= broj; i++) {
		if ((broj % i) == 0) {
			printf("%d\n", i);
		}
	}
}

/* Zadatak 8. Omoguciti korisniku unos duljine tri stranice a, b i c. Ispitati postoji li trokut s takvim stranicama i
ako postoji, ispisati na ekran kakav je (jednakostranièan, jednakokraèan ili raznostranièan).*/

void zadatak8() {
	float a, b, c;

	printf("Unesite stranice a, b i c redom: ");
	scanf("%f %f %f", &a, &b, &c);

	if ((a + b > c) && (b + c > a) && (c + a > b)) {
		printf("Ovakav trokut postoji.\n");
		if (a == b != c || b == c != a || c == a != b) {
			printf("Trokut je jednakokracan");
		}
		else if (a == b == c) {
			printf("Trokut je jednakostranican");
		}
		else if (a != b && b != c && c != a) {
			printf("Trokut je raznostranican");
		}
	}
	else {
		printf("Takav trokut ne postoji.");
	}
}

/* Zadatak 9. Ispisati na ekran sve pozitivne troznamenkaste brojeve cija je zadnja znamenka djeljiva s 3. Na kraju,
dodatno ispisati aritmeticku sredinu ispisanih brojeva.*/

void zadatak9() {
	int a;
	int zbroj = 0;
	int br = 0;
	float aritmetickaSredina;

	for (int i = 100; i <= 999; i++) {
		a = i % 10;
		if (a % 3 == 0) {
			printf("%d\n", i);
			zbroj += i;
			br++;
		}
	}
	aritmetickaSredina = (float)zbroj / br;

	printf("Broj svih troznamenkastih brojeva cija zadnja znamenka je djeljiva sa 3 je: %d\n", br);
	printf("Aritmeticka sredina je : %.2f", aritmetickaSredina);
}

/* Zadatak 10.Omogućiti korisniku unos jednog prirodnog broja. Kreirati broj koji ima obrnuo napisane znamenke
naspram unesenog broja, npr. od broja 123 kreirati broj 321.*/

void zadatak10() {

	int x, y, z = 0;

	printf("Upiste jedan cijeli broj: ");
	scanf("%d", &x);

	while (x != 0) {
		y = x % 10;
		if (z == 0) {
			z += y;
		}
		else {
			z = z * 10 + y;
		}
		x /= 10;
	}
	printf("Broj s obrnuto napisanim znamenkama je: %d", z);
}