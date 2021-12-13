#include <stdio.h>
#include <string.h>
	
	//variabel global
	int masukan;
	int massa;
	float tinggi;
	float IMT; 
	int massa_min;
	int massa_maks;
	
//=======================================================================//
//>>>>>>>>>>>>>>   Fungsi Untuk Menampilkan Menu Pilihan   <<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menu                                                 //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan menampilkan pilihan menu yang ada    //
//                  pada program ProHealth, kemudian user akan diminta   //
//                  untuk memasukkan pilihan yang diinginkan. Maka       //
//                  selanjutnya program secara automatis mengantarkan    //
//                  user ke menu pilihan yang diinginkan.                //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 06-12-2021                               Tgl: 09-12-2020      //
// Putu Nanda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
// Revisi: Menambahkan menu Info dan mengeluarkan variabel int masukan   //
//         menjadi variabel global                                       //
//=======================================================================//

void menu(){

	
	printf ("pilihan menu : \n");
	printf ("\t 1) Info \n");
	printf ("\t 2) Menghitung IMT \n");
	printf ("\t 3) Daftar kalori makanan \n");
	printf ("\t 4) Menulis catatan kalori \n");
	printf ("\t 5) keluar");
	
	printf ("\n");
	printf ("masukkan pilihan anda ");
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : 
			printf ("Coming Soon");
			break;
		
		case 2 :
			menghitung_IMT();
			break;
			
		case 3 :
			printf ("Coming Soon");
			break;
			
		case 4 :
			printf ("Coming Soon");
			break;
		
		case 5 :
			keluar();
			break;
			
		default:
			printf ("Coming Soon");
	}
}	

void menghitung_IMT () { /*IMT adalah singkatan dari Indeks Massa Tubuh*/
	
	system("cls"); /*Layar nantinya akan dibersihkan sebelum menjalankan kode di baris selanjutnya*/
	

        printf ( "Masukkan tinggi badan anda (dalam cm) : ");
	    scanf ("%f", &tinggi);
	    fflush (stdin);
	    printf ("Masukkan massa tubuh anda (dalam kg) : ");
	    scanf ("%d", &massa);
	    fflush (stdin);
	
	system("cls");
	
	    tinggi = tinggi / 100;
	
	    IMT = (massa / (tinggi*tinggi)); /*IMT Normal yaitu 18.5 - 25*/
	
	    massa_min = (18.5 *(tinggi*tinggi));
	    massa_maks = (25 * (tinggi*tinggi));
	
	printf ("Penasaran sama hasilnya? Ini diaaa\n Angka Indeks Massa Tubuh (IMT) anda adalah: ");
        
	if (IMT < 16) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong sangat kurus (Severe Thinnes)\n");
		printf ("Perhatikan asupan nutrisi Anda! (Konsultasikan dengan dokter bila perlu) \nTubuh Anda perlu tambahan massa tubuh setidaknya %d kg untuk mencapai keadaan normal", (massa_min -  massa));
	}
	
	else if (IMT >= 16 && IMT <= 17) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong kurus (Moderate Thinnes)\n");
		printf ("Anda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal", (massa_min -  massa));
	}
	
	else if (IMT > 17 && IMT <= 18.5) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong cukup kurus (Mild Thinnes)\n");
		printf ("Anda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal", (massa_min -  massa));
	}
	
	else if (IMT > 18.5 && IMT <= 25) {
		printf ("%f \n",IMT);
		printf ("Kondisi Anda saat ini sudah dalam kategori normal\n");
		printf ("Tetap jaga pola makan Anda dan teruskan pola hidup yang sehat agar IMT tetap stabil!\n");
	}
	
	else if (IMT > 25 && IMT <= 30) {
		printf ("%f \n",IMT);
		printf ("Kondisi tubuh mulai di atas normal\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal", (massa - massa_maks));
	}
	
	else if (IMT > 30 && IMT <= 35) {
		printf ("%f \n",IMT);
		printf ("Massa tubuh anda mulai berlebih di kategori obesitas kelas I\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal", (massa - massa_maks));
	}
	
	else if (IMT > 35 && IMT <= 40) {
		printf ("%f \n",IMT);
		printf ("Tolong Anda mengalami kondisi obesitas kelas II\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal", (massa - massa_maks));
	}
	
	else if (IMT > 40) {
		printf ("%f \n",IMT);
		printf ("Saat ini, tubuh Anda termasuk kategori obesitas kelas III\n");
		printf ("Untuk itu perbanyak gerak anda dan atur pola makan dengan baik  \nkarena Anda perlu menurunkan massa tubuh paling tidak %d kg untuk mencapai keadaan normal", (massa_maks -  massa));
	}
	
	else {
		printf ("IMT tidak valid! Mohon masukkan angka yang sesuai.\n");
	}
	
}

//=======================================================================//
//>>>>>>>>>>>>>>>>   Fungsi Untuk Keluar dari Program   <<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : keluar                                               //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan membantu pengguna untuk keluar dari  //
//                  program Pro Health. Di dalam fungsi pengguna akan    //
//                  ditanya kembali apakah ingin keluar atau kembali ke  //
//                  tampilan menu dengan memasukkan nilai integer 1      //
//                  untuk keluar dan 0 untuk kembali ke menu             //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 13-12-2021                               Tgl: -               //
// Putu Nanda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void keluar(){
	int keluar = 1;
	while(keluar == 1) {
		system ("cls");
		
		printf ("apakah ingin keluar?\n");
		printf ("0) kembali\n");
		printf ("1) keluar\n");
		printf ("masukkan : ");
		
		scanf ("%d", &keluar);
		fflush (stdin);
		
		if (keluar == 1) { 
		printf ("terima kasih\n");
		break;	
		}
		
		if (keluar == 0) {
			system ("cls");
			menu();
		}
		
		if (keluar != 0 && keluar != 1){
				keluar = 1;
				system ("cls");
				system ("pause");
		printf ("masukkan angka 1 atau 0");
		
		}
		}
	}

int main() {
		
	char inputusername [20];
	char inputpassword [20];
	
	char username[20] = "userapa";
	char password[20] = "passapa";
	
	while (1) {
			system("cls");
			
	
	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
		scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);
	
		
	if (strcmp(username, inputusername) == 0 && strcmp(username, inputusername) == 0 )	{
		system ("cls");
		
		printf (" \n\tusername atau password yang anda masukkan benar\n");
		
		printf ("selamat datang\n");
		
		system ("pause");
		
		system ("cls");
		
		menu();
		
		break;
	
	}
	else {
		system ("cls");
		
		printf (" \n\tusername atau password yang anda masukkan salah\n");
		
		system ("pause");
	}
	}

	return 0;
}
