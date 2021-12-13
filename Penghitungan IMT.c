#include <stdio.h>

	int massa;
	float tinggi;
	float IMT; 
	int massa_min;
	int massa_maks;
	
void menghitung_IMT () { /*IMT adalah singkatan dari Indeks Massa Tubuh*/
	
//=======================================================================//
//>>>>>>>>>>>>>>>>>>>   Fungsi Untuk Menghitung IMT   <<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : Menu Penghitungan IMT                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan menghitung dan menampilkan analisis  //
//                  Indeks Massa Tubuh di ProHealth, dimana nanti user   //
//                  akan memasukkan tinggi badan dan massa tubuh, lalu   //
//                  nantinya program akan menampilkan analisis angka IMT //
//                  dan kondisi tubuh user secara otomatis.              //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 09-12-2021                               Tgl: 13-12-2021      //
// I Putu Martin Winata - 2105551049                                     //
// Kelas B                                                               //
//                                                                       //
// Revisi: Menambahkan fungsi keluar pada menu Penghitungan IMT dan      //
//         melengkapi fungsi dengan tabel keterangan fungsi              //
//=======================================================================//

	system("cls"); /*Layar nantinya akan dibersihkan sebelum menjalankan kode di baris selanjutnya*/
	

        printf ("Masukkan tinggi badan anda (dalam cm) : "); 
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
	
	printf ("Penasaran sama hasilnya? Ini diaaa\n
    Angka Indeks Massa Tubuh (IMT) anda adalah: ");
        
	if (IMT < 16) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong sangat kurus (Severe Thinnes)\n");
		printf ("Perhatikan asupan nutrisi Anda! (Konsultasikan dengan dokter bila perlu) 
        \nTubuh Anda perlu tambahan massa tubuh setidaknya %d kg untuk mencapai keadaan normal", (massa_min -  massa));
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
		printf ("Untuk itu perbanyak gerak anda dan atur pola makan dengan baik,
        \nkarena Anda perlu menurunkan massa tubuh paling tidak %d kg untuk mencapai keadaan normal", (massa_maks -  massa));
	}
	
	else {
		printf ("IMT tidak valid! Mohon masukkan angka yang sesuai.\n");
	}
	
}


int main () {
	
	menghitung_IMT();
	
	return 0;
}
