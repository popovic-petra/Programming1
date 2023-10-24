#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primjer1();
void primjer2();
void primjer3();
void primjer4();
void primjer6();
void zadatak3();
void zadatak4();
void zadatak5();
void zadatak6();
void zadatak7();
void zadatak8();

int main() {
	zadatak8();
	return 0;
}

/*Primjer 1. - Omogućiti korisniku unos dva cijela pozitivna broja a i b.Izračunati izraz a2 + b - 2 - 1 
i ispisati njegovu vrijednost na ekran.*/

void primjer1() {

	unsigned int a=0;
	unsigned int b=0;
	float rezultat;

	printf("Unesite dva cijela pozitivna broja:\n");
	scanf("%u %u", &a, &b);

	rezultat = (a * a) + (1.0f/(b * b)) - 1;

	printf("Rezultat izračuna je %.4f", rezultat);
}

/*Primjer 2. - Omogućiti korisniku unos dva realna broja.Ispisati na ekran vrijednosti relacija ta dva broja*/

void primjer2() {

	double a, b;

	printf("Unesite dva realna broj :\n");
	scanf("%lf %lf", &a, &b);

	printf("Izraz %f < %f ima vrijednost %2d\n", a, b, a < b);     //%2d označava prazan prostor prije ispisa d 
	printf("Izraz %f <= %f ima vrijednost %d\n", a, b, a <= b);
	printf("Izraz %f > %f ima vrijednost %2d\n", a, b, a > b);
	printf("Izraz %f >= %f ima vrijednost %d\n", a, b, a >= b);
	printf("Izraz %f == %f ima vrijednost %d\n", a, b, a == b);
	printf("Izraz %f != %f ima vrijednost %d\n", a, b, a != b);

}

/*Primjer 3. Omogućiti korisniku unos jednog realnog broja. Napisati izraz koji provjerava nalazi li se
uneseni broj unutar intervala [-10, 100] te ispisati njegovu vrijednost na ekran.*/

void primjer3() {

	double a;
	unsigned rez;

	printf("Unesite realni broj: ");
	scanf("%lf", &a);

	rez = (a >= -10) && (a <= 100);

	printf("Vrijednost izraza je %u", rez);

}

/*Primjer 4. Omogućiti korisniku unos realnog broja d. Ispisati na ekran 1 ako je 0 < d <= 10, a u
suprotnom ispisati 0.*/

void primjer4() {
	double d;
	unsigned rez;
	printf("Unesite realni broj: ");
	scanf("%lf", &d);

	rez = (d > 0) && (d <= 10);

	printf("%u", rez);
}

/*Primjer 6. Omogućiti korisniku unos polumjer kruga r i središnji kut u stupnjevima. Izračunati te ispisati
na ekran duljinu kružnog luka i kružni isječak.*/

void primjer6() {
	const pi = 3.1415;
	double polumjer, kut, l, P;
	
	printf("Unesite polumjer kruga r: ");
	scanf("%lf", &polumjer);

	printf("Unesite sredisnji kut u stupnjevima: ");
	scanf("%lf", &kut);

	l = (polumjer * pi * kut) / 180;
	P = (kut * (polumjer * polumjer) * pi) / 360;

	printf("\nDuljina kruznog luka: %.2lf\n", l);
	printf("Povrsina kruznog isjecka: %.2lf", P);

}

/*3. Omogućiti korisniku unos jednog realnog broja. Ispisati na ekran 1 ukoliko je broj nenegativan, a u
suprotnom ispisati 0.*/

void zadatak3() {

	double broj;
	unsigned provjera;

	printf("Unesite realan broj: ");
	scanf("%lf", &broj);

	provjera = (broj >= 0);
	
	printf("%u", provjera);
}

/*4. Omogućiti korisniku unos mase u kilogramima te visine u metrima. Izračunati te ispisati na ekran
indeks tjelesne mase l = m / (h2), gdje je m masa, a h visina.*/

void zadatak4() {

	double m, h,indeks;
	
	printf("Unesite masu u kilogramima: ");
	scanf("%lf", &m);

	printf("Unesite visinu u metrima: ");
	scanf("%lf", &h);

	indeks = m / (h * h);

	printf("Indeks tjelesne mase = %.1lf", indeks);
}

/*5. Omogućiti korisniku unos realnih brojeva x i a. Provjeriti je li x unutar intervala [-a, a]. Ukoliko je
unutar zadanog intervala ispisati na ekran vrijednost 1, a u suprotnom vrijednost 0.*/

void zadatak5() {

	double x, a;
	unsigned provjera;

	printf("Unesite dva realna broja: ");
	scanf("%lf %lf", &x, &a);				//izmedju %lf ne ide zarez
	
	printf("Provjeravamo nalazi li se broj %.2lf u intervalu [%.2lf, %.2lf].", x, -a, a);
	provjera = (x > -a) && (x < a);

	printf("\n%u", provjera);
}

/*6. Omogućiti korisniku unos jednog cijelog broja x koji predstavlja broj dana te iz tog broja izračunati
i ispisati na ekran broj godina, tjedana i dana*/

void zadatak6() {
	unsigned x, g, t, d;

	printf("Unesite broj dana: ");
	scanf("%u", &x);

	g = x / 365;
	t = (x % 365) / 7;
	d = x - (g * 365 + t * 7);

	printf("%u godina, %u tjedana, %u dana", g, t, d);
}

/*7. Omogućiti korisniku unos duljine tri stranice a, b i c. Ispitati postoji li trokut s takvim stranicama i
ispisati na ekran 1 ako da, u suprotnom ispisati 0.*/

void zadatak7() {
	float a, b, c;
	unsigned rez;

	printf("Unesite stranice trokuta a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);

	rez = ((a + b) > c) && ((a + c) > b) && ((b + c) > a);

	printf("%u",rez);
}

/*8. Omogućiti korisniku unos 2 realna broja a i b. Korištenjem pomoćne varijable međusobno
zamijeniti vrijednosti varijablama a i b. Ispisati na ekran vrijednosti varijabli prije i poslije zamjene.*/

void zadatak8() {
	float a, b;
	float temp;

	printf("Unesi dva realna broja: ");
	scanf("%f %f", &a, &b);
	printf("Trenutna vrijednost a je %.2f, a b je %.2f\n", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("Trenutna vrijednost a je %.2f, a b je %.2f", a, b);
}