#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primjer1();
void primjer2();
void primjer3();
void primjer4();
void zadatak1();
void zadatak2();
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

/*Primjer 1. Omogućiti korisniku unos jednog cijelog broja. Ispisati na ekran odgovarajuću poruku ovisno 
o tome je li broj negativan, pozitivan ili jednak nula.*/

void primjer1() {
	int broj;
	printf("Unesite jedan cijeli broj: ");
	scanf("%d", &broj);

	if (broj > 0) {
		printf("Broj %d je pozitivan.\n",broj);
	}
	else if (broj < 0) {
		printf("Broj %d je negativan.\n",broj);
	}
	else {
		printf("Broj %d je jednak 0.\n", broj);
	}
}

/*Primjer 2. Omogućiti korisniku unos jednog cijelog broja. Izračunati i na ekran ispisati apsolutnu
vrijednost unesenog broja.*/

void primjer2() {
	
	int broj, abs;
	
	printf("Unesite jedan cijeli broj: ");
	scanf("%d", &broj);

	/*if (broj < 0) {
		broj = -broj;
		printf("Apsolutna vrijednost: %d", broj);
	}
	else if (broj >= 0) {
		printf("Apsolutna vrijednost: %d", broj);
	}*/

	abs = broj < 0 ? -broj : broj;
	printf("Apsolutna vrijednost broja %d je %d.", broj, abs);
}

/*Primjer 3. Tražiti od korisnika unos dva realna broja. Potom, omogućiti mu unos aritmetičke operacije
kao znaka +, -, * ili /. Ovisno o unosu željene operacije, izvršiti odgovarajući izračun nad unesenim
brojevima i na ekran ispisati rezultat.*/

void primjer3() {
	float br1, br2, rez;
	char operacija;
	int f = 1;

	printf("Unesite dva realna broja: ");
	scanf("%f %f", &br1, &br2);

	getchar();

	printf("Unesite operaciju koju zelite izvrsiti nad brojevima (+,-,*,/): ");
	scanf("%c", &operacija);

	switch (operacija) {
	case '+':
		rez = br1 + br2;
		break;
	case '-':
		rez = br1 - br2;
		break;
	case '*':
		rez = br1 * br2;
		break;
	case '/':
		rez = br1 / br2;
		break;
	default:
		printf("Nepoznata operacija.");
		f = 0;				// zastavice se postavlja na drugu vrijednost kako bi se izbjegao nevaljani izraz

	}
	
	if (f == 1) {			// rezultat se ispisuje ukoliko je bila upisana poznata operacija!
		printf("%.2f %c %.2f = %.2f", br1, operacija, br2, rez);
	}
}

/*Primjer 4. Tražiti od korisnika unos tri realna broja. Ispisati ih silaznim redoslijedom (od najvećeg prema najmanjem).*/

void primjer4() {
	float a, b, c, temp;	// temp -> ”među spremnik” (može se zamisliti kao zamjena tekućina iz dvije posude).

	printf("Unesi tri realna broja: ");
	scanf("%f %f %f", &a, &b, &c);

	if (a < b) {
		temp = a;			// zamjena varijabli a i b, ako je b veće
		a = b;
		b = temp;
	}
	if (a < c) {
		temp = a;			// zamjena varijabli a i c, ako je c veće
		a = c;
		c = temp;
	}
	if (b < c) {
		temp = b;			// zamjena varijabli b i c, ako je c veće
		b = c;
		c = temp;
	}

	printf("%f %f %f", a, b, c);
}

/*1. Omogućiti korisniku unos tri realna broja. Odrediti i ispisati na ekran najveći od njih.*/

void zadatak1() {
	float a, b, c, max;
	
	printf("Unesi tri realna broja: ");
	scanf("%f %f %f", &a, &b, &c);

	/*if (a > b && a > c) {
		printf("Najveci broj je %f.", a);
	}
	else if (b > a && b > c) {
		printf("Najveci broj je %f.", b);
	}
	else {
		printf("Najveci broj je %f.", c);
	}*/

	max = a;

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("Najveci broj je %.2f", max);
}

/*2. Omogućiti korisniku unos realnih brojeva x i y. Izračunati i ispisati na ekran vrijednost izraza |x| × min{x,y}. */

void zadatak2() {
	float x, y, min, rez;

	printf("Unesite 2 realna broja: ");
	scanf("%f %f", &x, &y);

	if (x > y) {
		min = y;
	}
	else {
		min = x;
	}
	if (x < 0) {
		x = -x;
	}
	
	rez = x * min;
	printf("%f", rez);
}

/*3. Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti switch-case.*/

void zadatak3() {
	int dan;

	printf("Unesite cijeli broj (1-7): ");
	scanf("%d", &dan);

	switch (dan) {
	case 1: printf("Ponedjeljak."); break;
	case 2: printf("Utorak."); break;
	case 3: printf("Srijeda."); break;
	case 4: printf("Cetvrtak."); break;
	case 5: printf("Petak."); break;
	case 6: printf("Subota."); break;
	case 7: printf("Nedjelja."); break;
	default:
		printf("Unjeli ste pogresan broj.");
	}
}

/*4. Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti višestruki if-else.*/

void zadatak4() {
	int dan;
	printf("Unesite cijeli broj (1-7): ");
	scanf("%d", &dan);

	if (dan == 1) {
		printf("Ponedjeljak.");
	}
	else if (dan == 2) {
		printf("Utorak.");
	}
	else if (dan == 3) {
		printf("Srijeda.");
	}
	else if (dan == 4) {
		printf("Cetvrtak.");
	}
	else if (dan == 5) {
		printf("Petak.");
	}
	else if (dan == 6) {
		printf("Subota.");
	}
	else if (dan == 7) {
		printf("Nedjelja.");
	}
	else {
		printf("Unjeli ste pogresan broj.");
	}
}

/*5. Omogućiti korisniku unos ocjena koje su predstavljene velikim ili malim slovima od A do F te ispisati
postotak za određenu ocjenu (A: 90 – 100, B: 80 – 89, C: 70 – 79, D: 60 – 69, F: 0 – 59). U slučaju da
je unesen znak koji ne predstavlja ocjenu potrebno je ispisati poruku o pogrešci. Koristiti switchcase.*/

void zadatak5() {
	char ocjena;

	printf("Unesite ocjenu (A,B,C,D,F): ");
	scanf("%c", &ocjena);

	ocjena = toupper(ocjena);

	switch (ocjena) {
	case 'A': printf("90 - 100"); break;
	case 'B': printf("80 - 89"); break;
	case 'C': printf("70 - 79"); break;
	case 'D': printf("60 - 69"); break;
	case 'F': printf("0 - 59"); break;
	default:
		printf("Unjeli ste pogresan znak.");
	}
}

/*6. Omogućiti korisniku unos tri znaka te odrediti koji ima najmanju ASCII vrijednost. Za svaki od
preostala dva znaka ispisati vrijednost u heksadekadskom brojevnom sustavu koja je jednaka razlici
njega i najmanjeg.*/

void zadatak6() {
	char zn1, zn2, zn3;
	unsigned min,hex1,hex2;

	printf("Unesite tri znaka: ");
	scanf("%c %c %c", &zn1, &zn2, &zn3);
	
	if (zn1 < zn2 && zn1 < zn3) {
		min = zn1;
		hex1 = zn2 - min;
		hex2 = zn3 - min;
	}
	else if (zn2 < zn1 && zn2 < zn3) {
		min = zn2;
		hex1 = zn1 - min;
		hex2 = zn3 - min;
	}
	else {
		min = zn3;
		hex1 = zn1 - min;
		hex2 = zn2 - min;
	}

	printf("Znak 1: %x\nZnak 2: %x", hex1, hex2);
}

/*7. Omogućiti korisniku unos duljine tri stranice a, b i c. Ispisati postoji li trokut s takvim stranicama i
ako postoji, ispisati na ekran kakav je (jednakostraničan, jednakokračan, raznostraničan).*/

void zadatak7() {
	float a, b, c;

	printf("Unesite stranice trokuta a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);

	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
		printf("Trokut ovih stranica postoji.\n");
		if (a == b && a == c) {
			printf("Trokut je jednakostranican.\n");
			}
		else if ((a == b && a != c) || (a == c && a != b)) {
			printf("Trokut je jednakokracan.\n");
		}
		else {
			printf("Trokut je raznostranican.\n");
		}
	}
	else {
		printf("Takav trokut ne postoji.\n");				// npr a=2, b=2, c=5
	}
}

/*8. Omogućiti korisniku unos jednog znaka te ako je unešeni znak samoglasnik ispisati koji je po redu
(od samoglasnika) i ispisati njegovu ASCII vrijednost. Ako unešeni znak nije samoglasnik ispisati
odgovarajuću poruku.*/

void zadatak8() {
	char znak;

	printf("Unesite znak: ");
	scanf("%c", &znak);
	
	znak = toupper(znak);

	switch (znak) {
	case 'A': printf("A je prvi samoglasnik i njegova ASCII vrijednost je %d.", znak); break;
	case 'E': printf("E je drugi samoglasnik i njegova ASCII vrijednost je %d.", znak); break;
	case 'I': printf("I je treci samoglasnik i njegova ASCII vrijednost je %d.", znak); break;
	case 'O': printf("O je cetvrti samoglasnik i njegova ASCII vrijednost je %d.", znak); break;
	case 'U': printf("U je peti samoglasnik i njegova ASCII vrijednost je %d.", znak); break;
	default:
		printf("Unjeli ste suglasnik.");
	}
}
