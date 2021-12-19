#include<stdio.h>
int berat_badan;
int tinggi_badan;
int umur;
int jenis_kelamin;
float BMR;
int intensitas;
float kebutuhan_kalori_harian;

//Untuk laki-laki: (88,4 + 13,4 x berat dalam kilogram) + (4,8 x tinggi dalam sentimeter) - (5,68 x usia dalam tahun)

//Untuk wanita: (447,6 + 9,25 x berat dalam kilogram) + (3,10 x tinggi dalam sentimeter) - (4,33 x usia dalam tahun)

void BMR_laki_laki() {
	printf("masukkan berat badan anda :");
	scanf ("%d", &berat_badan);
	fflush(stdin);
	
	printf("masukkan tinggi badan anda :");
	scanf ("%d", &tinggi_badan);
	fflush(stdin);
	
	printf("masukkkan umur anda :");
	scanf ("%d", &umur);
	fflush(stdin);
	
	//Untuk laki-laki: (88,4 + 13,4 x berat dalam kilogram) + (4,8 x tinggi dalam sentimeter) - (5,68 x usia dalam tahun)
	
	BMR = (88.4 + (13.4 * berat_badan)) + (4.8 * tinggi_badan) - (5.68 * umur);
	
	
}

void BMR_perempuan() {
	printf("masukkan berat badan anda :");
	scanf ("%d", &berat_badan);
	fflush(stdin);
	
	printf("masukkan tinggi badan anda :");
	scanf ("%d", &tinggi_badan);
	fflush(stdin);
	
	printf("masukkkan umur anda :");
	scanf ("%d", &umur);
	fflush(stdin);
	
	//Untuk wanita: (447,6 + 9,25 x berat dalam kilogram) + (3,10 x tinggi dalam sentimeter) - (4,33 x usia dalam tahun)

	BMR = (447.6 + (9.25 * berat_badan)) + (3.10 * tinggi_badan) - (4.33 * umur);

}

void memasukkan_jenis_kelamin() {
	printf("Jenis kelamin :\n");
	printf("1) Laki_laki\n");
	printf("2) Perempuan\n");
	printf("masukkan jenis kelamin anda :");
	scanf ("%d", &jenis_kelamin);
	fflush (stdin);
	
	system ("cls");
}

void intensitas_aktivitas() {
	
		printf("Intensitas aktivitas\n");
		printf("1) tidak aktif   (sangat jarang berolahraga)\n");
		printf("2) sedikit aktif (berolahraga ringan 1-3 hari seminggu)\n");
		printf("3) cukup aktif   (berolahraga intensitas sedang 3-5 hari seminggu)\n");
		printf("4) sangat aktif  (berolahraga intensitas berat 6-7 hari seminggu)\n");
		printf("5) ekstra aktif  (berolahraga intensitas sangat berat 6-7 hari \n");
		printf("seminggu atau bekerja di bidang yang membutuhkan stamina dan fisik yang kuat)\n");
		printf("\nmasukkan pilihan anda (1-6) : ");
		
		scanf("%d", &intensitas);
		fflush(stdin);
		
		switch (intensitas) {
		case 1 : {
			kebutuhan_kalori_harian = BMR * 1.2;
			printf ("Kebutuhan kalori perhari anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 2 : {
			kebutuhan_kalori_harian = BMR * 1.375;
			printf ("Kebutuhan kalori perhari anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 3 : {
			kebutuhan_kalori_harian = BMR * 1.55;
			printf ("Kebutuhan kalori perhari anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 4 : {
			kebutuhan_kalori_harian = BMR * 1.725;
			printf ("Kebutuhan kalori perhari anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 5 : {
			kebutuhan_kalori_harian = BMR * 1.9;
			printf ("Kebutuhan kalori perhari anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		default : {
		printf ("pilihan tidak valid\n");
		system ("pause");
		system ("cls");
		memasukkan_jenis_kelamin();
		}
		}
}

void menghitung_kebutuhan_kalori_perhari(){
	
	memasukkan_jenis_kelamin();
	fflush (stdin);
	
	switch (jenis_kelamin) {
		case 1 : {
			BMR_laki_laki();
			
			printf ("BMR anda yaitu %f\n", BMR);
		}
		break;
		case 2 : {
			BMR_perempuan();
		
			printf ("BMR anda yaitu %f\", BMR");
		}
		break;
		default : {
		printf ("pilihan tidak valid\n");
		system ("pause");
		system ("cls");
		memasukkan_jenis_kelamin();
		}
	
	}

	intensitas_aktivitas();
	
}

int main() {
	
	menghitung_kebutuhan_kalori_perhari();
	
	
	
	
	
	return 0;
}
