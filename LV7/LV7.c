# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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

/*1. Omogućiti korisniku unos vrijednosti elemenata u polje od 10 cijelih brojeva. Potom ispisati na
ekran sve indekse kod kojih je vrijednost elemenata djeljiva s 5.*/

void zadatak1() {
	int polje[10];
	printf("Unesite 10 cijelih brojeva: \n");
	for (int i = 0; i < 10; i++) {
		printf("Unesite vrijednost %d. elem.: ", i + 1);
		scanf("%d", &polje[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (polje[i] % 5 == 0) {
			printf("%d ", i);
		}
	}
	
	/*
	printf("\nIspis unesenih brojeva: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", polje[i]);
	}
	*/
}

/*2. Omogućiti korisniku unos n (5 ≤ n ≤ 15) vrijednosti elemenata u polje realnih brojeva. Potom
odrediti i na ekran ispisati koliko je vrijednosti veće od srednje vrijednosti svih elemenata. */

void zadatak2() {
	int n;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje [5,15]: ");
		scanf("%d", &n);
	} while (n < 5 || n > 15);

	float polje[15];
	for (int i = 0; i < n; i++) {
		printf("Unesite %d element: ",i+1);
		scanf("%f", &polje[i]);
	}

	float suma = 0.0;
	for (int i = 0; i < n; i++) {
		suma += polje[i];
	}

	float srednjaVrijednost = suma / n;

	int brojac = 0;
	for (int i = 0; i < n; i++) {
		if (polje[i] > srednjaVrijednost) {
			brojac++;
		}
	}

	printf("%d", brojac);
}

/*3. Omogućiti korisniku unos n (4 ≤ n < 21) vrijednosti elemenata u polje realnih brojeva. Povećati
vrijednost svakog elemenata većeg od srednje vrijednosti za 10%, a ostalim smanjiti vrijednost za
10%. */

void zadatak3() {
	int n;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (od 4 do 20): ");
		scanf("%d", &n);
	} while (n < 4 || n >= 21);

	float polje[20];
	for (int i = 0; i < n; i++) {
		printf("Unesite %d. element: ", i + 1);
		scanf("%f", &polje[i]);
	}

	float suma = 0.0;
	for (int i = 0; i < n; i++) {
		suma += polje[i];
	}

	float srednjaVrijednost = suma / n;

	printf("Srednja vrijednost je %f", srednjaVrijednost);

	for (int i = 0; i < n; i++) {
		if (polje[i] > srednjaVrijednost) {
			polje[i] *= 1.1;
		}
		if (polje[i] < srednjaVrijednost) {
			polje[i] *= 0.9;
		}
	}
	printf("\nIspis azuriranih elemenata:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2f ", polje[i]);
	}
}

/*4. Omogućiti korisniku unos q (4 < q ≤ 12) vrijednosti elemenata u polje realnih brojeva. Podijeliti
vrijednost svakog elementa polja koji ima neparni indeks s vrijednosti 2 te nakon toga na ekran
ispisati polje.*/

void zadatak4() {
	int q;
	int i = 0;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (od 5 do 12): ");
		scanf("%d", &q);
	} while (q <= 4 || q > 12);

	float polje[12];
	for (int i = 0; i < q; i++) {
		printf("Unesite %d. element: ", i + 1);
		scanf("%f", &polje[i]);
	}
	
	for (int i = 1; i < q; i += 2) {
		polje[i] /= 2.0;
	}
	
	printf("\Azurirano polje:\n");
	for (int i = 0; i < q; i++) {
		printf("%.2f ", polje[i]);
	}
}

/*5. Omogućiti korisniku unos vrijednosti elemenata u polje od 12 cijelih brojeva. Potom zamijeniti sve
pozitivne vrijednosti s aritmetičkom sredinom apsolutnih vrijednosti svih brojeva tog polja. Ispisati
izmijenjeno polje na ekran.*/

void zadatak5() {
	int bp = 0;
	int suma = 0;
	float polje[12];

	printf("Unesite 12 cijelih brojeva: \n");
	for (int i = 0; i < 12; i++) {
		printf("Unesite vrijednost %d. elementa: ", i + 1);
		scanf("%f", &polje[i]);

		float apsolutnaVrijednost = fabs(polje[i]);				// za svaki uneseni broj, računa se aps vr pomoću funkcije fabs() i rezultat se smjesta u apsolutnaVrijednost

		if (apsolutnaVrijednost != 0) {
			suma += apsolutnaVrijednost;
			bp++;
		}
	}
	
	float srednjaVrijednost = (bp > 0) ? (float)suma / bp : 0;
	printf("Srednja vrijednost je %.2f", srednjaVrijednost);

	for (int i = 0; i < 12; i++) {
		if (polje[i] > 0) {
			polje[i] = srednjaVrijednost;
		}
	}

	printf("\nAzurirano polje:\n");
	for (int i = 0; i < 12; i++) {
		printf("%.2f ", polje[i]);
	}
}

/*6. Omogućiti korisniku unos n (2 < n ≤ 13) vrijednosti elemenata u polje realnih brojeva. Izračunati
aritmetičku sredinu svih pozitivnih elemenata polja. Pronaći elemente manje od aritmetičke
sredine i zamijeniti ih s izračunatom aritmetičkom sredinom. Potom na ekran ispisati izmijenjeno
polje.*/

void zadatak6() {
	int n;

	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (od 3 do 13): ");
		scanf("%d", &n);
	} while (n <= 2 || n > 13);

	float polje[13];
	float suma = 0.0;
	int bp = 0;
	for (int i = 0; i < n; i++) {
		printf("Unesite %d. element: ", i + 1);
		scanf("%f", &polje[i]); 
	
		if (polje[i] > 0) {
			suma += polje[i];
			bp++;
		}
	}

	float srednjaVrijednost = (bp > 0) ? (float)suma / bp : 0;
	printf("Srednja vrijednost je %.2f", srednjaVrijednost);

	for (int i = 0; i < n; i++) {
		if (polje[i] < srednjaVrijednost) {
			polje[i] = srednjaVrijednost;
		}
	}

	printf("\nAzurirano polje:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2f ", polje[i]);
	}
}

/*7. Omogućiti korisniku unos n (2 < n < 13) vrijednosti elemenata u polje realnih brojeva. Pronaći
najmanju i najveću vrijednost u polju i zamijeniti njihova mjesta u polju. Potom na ekran ispisati
izmijenjeno polje.*/


void zadatak7() {
	int n;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (od 3 do 13): ");
		scanf("%d", &n);
	} while (n <= 2 || n >= 13);

	float polje[12];
	int bp = 0;
	for (int i = 0; i < n; i++) {
		printf("Unesite %d. element: ", i + 1);
		scanf("%f", &polje[i]);
	}

	float najmanji = polje[0];
	float najveci = polje[0];

	for (int i = 1; i < n; i++) {
		if (polje[i] < najmanji) {
			najmanji = polje[i];
		}
		if (polje[i] > najveci) {
			najveci = polje[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (polje[i] == najmanji) {
			polje[i] = najveci;
		}
		else if (polje[i] == najveci) {
			polje[i] = najmanji;
		}
	}

	printf("\nIzmijenjeno polje:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2f ", polje[i]);
	}
}

/*8. Omogućiti korisniku popunjavanje cjelobrojnog polja od 20 elemenata. Osigurati da svaka unesena
vrijednost bude u [0, 9], ukoliko nije, tražiti ponovni unos. Prebrojati i ispisati koliko se puta
ponovila pojedina vrijednost i za svaku ispisati broj ponavljanja.*/

void zadatak8() {
	int polje[20];
	int brojac[10] = { 0 };

	for (int i = 0; i < 20; i++) {
		do {
			printf("Unesite vrijednost %d. elementa (0-9): ", i + 1);
			scanf("%d", &polje[i]);

			if (polje[i] < 0 || polje[i] > 9) {
				printf("Vrijednost mora biti u [0, 9]. Ponovite unos.\n");
			}
		} while (polje[i] < 0 || polje[i] > 9);

		brojac[polje[i]]++;
	}

	printf("\nRezultati:\n");
	for (int i = 0; i < 10; i++) {
		printf("Vrijednost %d se pojavljuje %d puta.\n", i, brojac[i]);
	}
}

/*9. Omogućiti korisniku unos q (5 < q ≤ 12) vrijednosti elemenata u polje realnih brojeva. Podijeliti
vrijednosti svakog elementa polja koji ima parni indeks s vrijednosti 10, a koji ima neparni indeks s
vrijednosti -10. Potom na ekran ispisati izmijenjeno polje.*/

void zadatak9() {
	int q;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (6-12): ");
		scanf("%d", &q);
	} while (q <= 5 || q > 12);
	
	float polje[12];
	printf("Unesite %d realnih brojeva: \n", q);
	for (int i = 0; i < q; i++) {
		printf("Unesite vrijednost %d. elem.: ", i + 1);
		scanf("%f", &polje[i]);
	}
	
	for (int i = 0; i < q; i++) {
		if (i % 2 == 0) {
			polje[i] /= 10;
		}
		if (i % 2 != 0) {
			polje[i] /= -10;
		}
	}

	printf("Izmijenjeno polje: ");
	for (int i = 0; i < q; i++) {
		printf("%.2f", polje[i]);
	}
}


/*10. Omogućiti korisniku unos n (6 ≤ n < 25) vrijednosti elemenata u polje cijelih brojeva. Zamijeniti
mjesta prvoj polovici polja s drugom polovicom polja. Npr. zamijeniti mjesta prvom elementu polja
sa zadnjim elementom, drugom elementu polja s predzadnjim elementom i tako skroz do polovice
polja.*/

void zadatak10() {
	int q;
	do {
		printf("Unesite broj elemenata koje zelite unjeti u polje (6-24): ");
		scanf("%d", &q);
	} while (q < 6 || q >= 25);

	int polje[24];
	printf("Unesite %d cijelih brojeva: \n", q);
	for (int i = 0; i < q; i++) {
		printf("Unesite vrijednost %d. elem.: ", i + 1);
		scanf("%d", &polje[i]);
	}

	for (int i = 0; i < q / 2; i++) {
		int temp = polje[i];
		polje[i] = polje[q - 1 - i];
		polje[q - 1 - i] = temp;
	}

	printf("Izmijenjeno polje: ");
	for (int i = 0; i < q; i++) {
		printf("%d ", polje[i]);
	}
}
