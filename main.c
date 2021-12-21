#include <stdio.h>
#include <string.h>
#include <windows.h>
	
	/*variabel global*/
	
	/*variabel dalam fungsi login*/
	char inputusername [20];
	char inputpassword [20];
	char username[20] = "userapa";
	char password[20] = "passapa";	
	
	/*variabel dalam perhitungan IMT*/
	int masukan;
	int massa;
	float tinggi;
	float IMT; 
	int massa_min;
	int massa_maks;
	
	/*variabel dalam menghitung kebutuhan kalori perhari*/
	int berat_badan;
	int tinggi_badan;
	int umur;
	int jenis_kelamin;
	float BMR;
	int intensitas;
	float kebutuhan_kalori_harian; 
	
//=======================================================================//
//>>>>>>>>>>>>>>             Fungsi Untuk Login            <<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : login                                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan mengarahkan user untuk login saat    //
//                  awal menggunakan program. User akan diminta          //
//                  memasukkan username dan password yang sesuai pada    //
//                  variabel username dan password. Jika input benar     //
//                  user akan diarahkan ke menu, namun jika salah user   //
//                  akan diminta kembali memasukkan username dan         //
//                  password hingga benar.                               //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 21-12-2021                               Tgl: -               //
// Putu Nanda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void login() {
	
	system("cls");
			
	
	printf ("\t\t\t\t\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\t\tmasukkan username :");
	scanf ("%s", &inputusername);
		
	printf ("\t\tmasukkan password :");
	scanf ("%s", &inputpassword);
	
	/*basis*/
	if (strcmp(username, inputusername) == 0 && strcmp(password, inputpassword) == 0 )	{
		system ("cls");
		
		printf ("\n\t\t\t\t\tusername atau password yang anda masukkan benar\n\n");
		
		printf ("\t\t\t\t\t\tselamat datang\n\t");
		
		system ("pause");
		
		system ("cls");
		
		loading ();
		
		menu();
	}
	
	/*rekurens*/
		else {
		system ("cls");
		
		printf ("\n\t\t\t\t\tusername atau password yang anda masukkan salah\n\n\t");
		
		system ("pause");
		
		login();
	}
	}
	
//=======================================================================//
//>>>>>>>>>>>>>>            Fungsi Untuk Loading           <<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : loading                                              //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan memberikan animasi loading (memuat)  //
//                  setelah user berhasil melakukan login                //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 20-12-2021                               Tgl: -               //
// Putu Nanda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void loading () {
    system ("cls");                                                    
	char loading1[50] = "\t\t\t\t|=================================|";
	int i;
	printf ("\t\t\t\t             loading...             \n");
	for (i=0; i < 15; i++){
		Sleep(150);
		printf ("%c", loading1[i]);}
	for (i=15; i < 25; i++){
		Sleep(200);
		printf ("%c", loading1[i]);}
	for (i=25; i < 37; i++){
		Sleep(100);
		printf ("%c", loading1[i]);
	}
	
}

//=======================================================================//
//>>>>>>>>>>>>>    Fungsi Untuk Menampilkan Menu Pilihan    <<<<<<<<<<<<<//
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

void menu() {
	
	system ("cls");
	
	printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|                   << MENU >>                   |\n");
    printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|   No  |            Pilihan Menu                |\n");
    printf ("\t\t\t\t|-------|----------------------------------------|\n");
    printf ("\t\t\t\t|   1   |  Info                                  |\n");
    printf ("\t\t\t\t|   2   |  Menghitung IMT                        |\n");
    printf ("\t\t\t\t|   3   |  Menghitung kebutuhan Kalori perhari   |\n");
    printf ("\t\t\t\t|   4   |  Daftar Kalori Makanan                 |\n");
    printf ("\t\t\t\t|   5   |  Menulis catatan kalori                |\n");
    printf ("\t\t\t\t|   6   |  Keluar                                |\n");
    printf ("\t\t\t\t|================================================|\n");
	
	printf ("\n");
	printf ("\t\t\t\tmasukkan pilihan anda ");
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : {
			tentang_kami();
			system ("pause");
			menu();
		}
			break;
		
			
		
		case 2 : {
			menghitung_IMT();
			system ("pause");
			menu();
		}
			break;
			
		case 3 : {
			menghitung_kebutuhan_kalori_perhari();
			menu();
		}
			break;
			
		case 4 : {
			printf ("Coming Soon\n");
			system ("pause");
			menu();
		}
			break;
		
		case 5 : {
			printf ("Coming Soon\n");
			system ("pause");
			menu();
		}
			break;
			
		case 6 : {
			keluar();
		}
			break;
			
		default: 
			printf ("Coming Soon");
	}
	}	


//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>>   Fungsi Tentang Kami   <<<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : tentang_kami                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini merupakan fungsi yang berisi informasi    //
//                  seputaran apa itu program ProHealth yang juga berisi //
//                  deskripsi singkat mengenai menu-menu yang ada.       //
//                                                                       //
// Versi : 1                                        Rev. 0               //
// Tgl   : 21-12-2021                               Tgl: -               //
// I Putu Martin Winata - 2105551049                                     //
// Kelas B                                                               //
//                                                                       //
// Revisi: -						                 //
//=======================================================================//
	
void tentang_kami() {
	    system ("cls");
		
            printf ("\t\t\t\t----------------------------------------------------------------- \n");
	    	printf ("\t\t\t\t               T e n t a n g     P r o H e a l t h                \n");  
            printf ("\t\t\t\t----------------------------------------------------------------- \n");
            printf ("\t\t\t\t================================================================= \n");
            printf ("\t\t\t\t*     ProHealth merupakan sebuah program kesehatan mahasiswa    * \n");
            printf ("\t\t\t\t*  yang ditujukan untuk teman-teman mahasiswa yang berkeinginan * \n");
            printf ("\t\t\t\t*  kuat untuk menjaga kesehatannya selama perkuliahan, apalagi  * \n");
            printf ("\t\t\t\t*    di situasi pandemi Covid-19 yang seolah tak berujung ini.  * \n");
            printf ("\t\t\t\t*                                                               * \n");
            printf ("\t\t\t\t*                                                               * \n");
            printf ("\t\t\t\t*   Bingung apakah sudah memiliki IMT normal, kalori per hari   * \n");
            printf ("\t\t\t\t*      yang tercukupi, dan apakah asupan cairan tubuh sudah     * \n");
            printf ("\t\t\t\t*              terpenuhi atau malah sampai dehidrasi?           * \n");
            printf ("\t\t\t\t*   ProHealth hadir di tengah masalah tersebut untuk membantu   * \n");
            printf ("\t\t\t\t*                 menjaga pola hidup sehat kalian!              * \n");
            printf ("\t\t\t\t================================================================= \n\n");
            printf ("\t\t\t\t                   *** Layanan Kami di ProHealth***               \n");
            printf ("\t\t\t\t***************************************************************** \n");
            printf ("\t\t\t\t*     Count IMT (CIMT), yang akan membantu kalian mengetahui    * \n");
            printf ("\t\t\t\t*       apakah status gizi kalian sudah sesuai berdasarkan      * \n");
            printf ("\t\t\t\t*        perbandingan tinggi badan dan kadar lemak tubuh.       * \n");
            printf ("\t\t\t\t*                                                               * \n");
            printf ("\t\t\t\t*      Takaran Kalori (TAKARI), yang akan menginformasikan      * \n");
            printf ("\t\t\t\t*    seberapa kalori yang tubuh kalian butuhkan per harinya.    * \n");
            printf ("\t\t\t\t*                                                               * \n");
            printf ("\t\t\t\t*   Kalori Saat Ini (KALONI), yang akan membantu kalian dalam   * \n");
            printf ("\t\t\t\t*      mengkalkulasi berapa banyak kalori yang sudah kalian     * \n");
            printf ("\t\t\t\t*       Konsumsi di tiap makanan yang dimakan per harinya.      * \n");
            printf ("\t\t\t\t*                                                               * \n");
            printf ("\t\t\t\t*  Anti Dehidrasi (ANDI), yang akan memberi pesan untuk kalian  * \n");
            printf ("\t\t\t\t*    yang kurang minum air mineral dimana kita harus menjaga    * \n");
            printf ("\t\t\t\t*      agar jangan sampai tubuh kita mengalami dehidrasi.       * \n");
            printf ("\t\t\t\t***************************************************************** \n");
}
	
//=======================================================================//
//>>>>>>>>>>>>>>>>>>>   Fungsi Untuk Menghitung IMT   <<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menghitung_IMT                                //
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
		printf ("Perhatikan asupan nutrisi Anda! (Konsultasikan dengan dokter bila perlu) \nTubuh Anda perlu tambahan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n", (massa_min -  massa));
	}
	
	else if (IMT >= 16 && IMT <= 17) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong kurus (Moderate Thinnes)\n");
		printf ("Anda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n", (massa_min -  massa));
	}
	
	else if (IMT > 17 && IMT <= 18.5) {
		printf ("%f \n",IMT);
		printf ("Tubuh anda tergolong cukup kurus (Mild Thinnes)\n");
		printf ("Anda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n", (massa_min -  massa));
	}
	
	else if (IMT > 18.5 && IMT <= 25) {
		printf ("%f \n",IMT);
		printf ("Kondisi Anda saat ini sudah dalam kategori normal\n");
		printf ("Tetap jaga pola makan Anda dan teruskan pola hidup yang sehat agar IMT tetap stabil!\n");
	}
	
	else if (IMT > 25 && IMT <= 30) {
		printf ("%f \n",IMT);
		printf ("Kondisi tubuh mulai di atas normal\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n", (massa - massa_maks));
	}
	
	else if (IMT > 30 && IMT <= 35) {
		printf ("%f \n",IMT);
		printf ("Massa tubuh anda mulai berlebih di kategori obesitas kelas I\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n", (massa - massa_maks));
	}
	
	else if (IMT > 35 && IMT <= 40) {
		printf ("%f \n",IMT);
		printf ("Tolong Anda mengalami kondisi obesitas kelas II\n");
		printf ("Anda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n", (massa - massa_maks));
	}
	
	else if (IMT > 40) {
		printf ("%f \n",IMT);
		printf ("Saat ini, tubuh Anda termasuk kategori obesitas kelas III\n");
		printf ("Untuk itu perbanyak gerak anda dan atur pola makan dengan baik  \nkarena Anda perlu menurunkan massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n", (massa_maks -  massa));
	}
	
	else {
		printf ("IMT tidak valid! Mohon masukkan angka yang sesuai.\n");
	}
	
}

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
	
	system ("cls");
	
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
	
	system ("cls");
	
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
		
		system ("cls");
		
		printf("Intensitas aktivitas\n");
		printf("1) Tidak aktif   (Jarang berolahraga)\n");
		printf("2) sedikit aktif (Berolahraga ringan 1-3 hari seminggu)\n");
		printf("3) Cukup aktif   (Berolahraga intensitas sedang 3-5 hari seminggu)\n");
		printf("4) Sangat aktif  (Berolahraga intensitas berat 6-7 hari seminggu)\n");
		printf("5) Ekstra aktif  (Berolahraga intensitas sangat berat 6-7 hari \n");
		printf("Seminggu atau bekerja di bidang yang membutuhkan stamina dan fisik yang kuat)\n");
		printf("\nMasukkan pilihan anda (1-5) : ");
		
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
		
		system ("pause");
}

//=======================================================================//
//>>>>>>>>>   Fungsi Untuk Menghitung Kebutuhan Kalori Perhari  <<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menghitung_kebutuhan_kalori_perhari                  //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini bertujuan untuk menghitung kebutuhan      //
//                  kalori perhari individu (user). Pada fungsi ini      //
//                  akan dipanggil fungsi lain yaitu fungsi              //
//                  memasukkan_jenis_kelamin, BMR_laki_laki,             //
//                  BMR_perempuan, dan intensitas_aktivitas              //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 19-12-2021                               Tgl: -               //
// Putu Nanda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void menghitung_kebutuhan_kalori_perhari() {
	system("cls");
	
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
		
		system ("pause");
		system ("cls");
	}

	intensitas_aktivitas();
	
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

void keluar() {
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
		
		login();


	return 0;
}
