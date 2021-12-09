#include <stdio.h>

void menghitung_IMB () {
	int massa;
	float tinggi;
	float IMB;
	int berat_minimal;
	int berat_maksimal;
	
	system("cls");
	
	printf ("Masukkan tinggi badan anda (dalam centimeter) : ");
	scanf ("%f", &tinggi);
	fflush (stdin);
	printf ("Masukkan berat badan anda (dalam kilogram) : ");
	scanf ("%d", &massa);
	fflush (stdin);
	
	system("cls");
	
	tinggi = tinggi / 100;
	
	IMB = (massa / (tinggi*tinggi));
	//IMB Normal yaitu 18.5 - 25
	berat_minimal = (18.5 *(tinggi*tinggi));
	berat_maksimal = (25 * (tinggi*tinggi));
	
	
	printf ("Indeks Massa Tubuh anda sebesar ");
	
	if (IMB < 16) {
		printf ("%f \n",IMB);
		printf ("kondisi anda kurus parah (Severe Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal", (berat_minimal -  massa));
	}
	
	else if (IMB >= 16 && IMB <= 17) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi sedang (Moderate Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal", (berat_minimal -  massa));
	}
	
	else if (IMB > 17 && IMB <= 18.5) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi kurus ringan (Mild Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal", (berat_minimal -  massa));
	}
	
	else if (IMB > 18.5 && IMB <= 25) {
		printf ("%f \n",IMB);
		printf ("kondisi anda saat ini sudah normal\n");
		printf ("tetap jaga pola makan anda\n");
	}
	
	else if (IMB > 25 && IMB <= 30) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi kegemukan\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal", (massa - berat_maksimal));
	}
	
	else if (IMB > 30 && IMB <= 35) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas I\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal", (massa - berat_maksimal));
	}
	
	else if (IMB > 35 && IMB <= 40) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas II\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal", (massa - berat_maksimal));
	}
	
	else if (IMB > 40) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas III\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal", (berat_maksimal -  massa));
	}
	
	else {
		printf ("IMB tidak valid\n");
	}
	
}


int main () {
	
	menghitung_IMB();
	
	return 0;
}