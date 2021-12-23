#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//warna tulisan
#define RED "\e[31m\e[1m"
#define YELLOW "\033[0;33m"
#define GREEN "\e[32m\e[1m"


/*variabel global*/
	/*variabel dalam fungsi registrasi*/
	int regislogin;
	
	/*variabel dalam fungsi login*/
	typedef struct user{
	char namalengkap [50];
	char username [20];
	char password [20];
	} user;

	user Pengguna;
	
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
	
	/*variabel dalam menulis catatan kalori*/
	int kalori;
	
	/*variabel pada menu tampilan*/
	int terangGelap = 0;
	
	tampilan() {
		if (terangGelap == 1) {
			system ("color 70");
		}
		else {
			system ("color 07");
		}
	}

//prototype fungsi
	void regis_login();
	void info();
	void registrasi();
	void login();
	void loading();
	void judul_proHEALTH();
	void menu();
	void info();
	void info_ProHealth();
	void layanan_ProHealth();
	void tentang_pembuat();
	void info_IMT();
	void judul_IMT();
	void menghitung_IMT();
	void menghitung_kebutuhan_kalori_perhari();
	void memasukkan_jenis_kelamin();
	void BMR_laki_laki();
	void BMR_perempuan();
	void intensitas_aktivitas();
	void menulis_kalori();
	void mode_terangGelap();
	void keluar();

int main() {
		
		regis_login();

	return 0;
	}

//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>  Fungsi Untuk Registrasi  <<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : void registrasi                                      //
// Input Argumen  : char namalengkap[50], char username[20],             //
//                  char password[20]                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini memberi akses masuk ke program ProHealth  //
//                  apabila pengguna sudah berhasil melakukan registrasi //
//                  yang setelahnya diarahkan untuk melakukan login.     //
//                                                                       //
// Versi : 1                                        Rev. 0               //
// Tgl   : 21-12-2021                               Tgl: -               //
// I Putu Martin Winata - 2105551049                                     //
// Kelas B                                                               //
//                                                                       //
// Revisi: -						                 //
//=======================================================================//


void regis_login() {
	printf("\t\t\t\t\t1) registrasi\n");
	printf("\t\t\t\t\t2) login\n");
	printf("\t\t\t\t\tMasukkan anda : ");
	
	scanf("%d", &regislogin);
	fflush(stdin);
	
	switch (regislogin) {
		case 1 : {
			registrasi();
			login();
			break;
		}
		case 2 : {
			login();
			break;
		}
		default : {
			break;
		regis_login();
		}
}
}

void registrasi() {	/*deklarasi fungsi void*/
		system("cls");
		
		printf ("\t\t\t\t\t\t==REGISTRASI==\n");
		printf ("\t\t\t\tMasukkan nama lengkap : ");
		gets (Pengguna.namalengkap);	/*memanggil array of char nama lengkap dengan spasi*/
		fflush (stdin);

		printf ("\t\t\t\tMasukkan username : ");
		scanf ("%s",&Pengguna.username);
		fflush (stdin);

		printf ("\t\t\t\tBuat password : ");
		scanf ("%s", &Pengguna.password);
		system ("cls");
		}

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
			
	
	printf ("\t\t\t\t\t\t== LOGIN ==\n");
	printf ("\n");
	printf ("\t\t\t\tmasukkan username :");
	scanf ("%s", &inputusername);
		
	printf ("\t\t\t\tmasukkan password :");
	scanf ("%s", &inputpassword);
	
	/*basis*/
	if ((strcmp(username, inputusername) == 0 || strcmp(Pengguna.username, inputusername) == 0) && ( strcmp(password, inputpassword) == 0 || strcmp(Pengguna.password, inputpassword) == 0 )	){
		system ("cls");
		
		printf ("\n\t\t\t\tusername dan password yang anda masukkan benar\n\n");
		
		printf ("\t\t\t\t\t\tselamat datang\n\t\t\t\t\t");
		
		system ("pause");
		
		system ("cls");
		
		loading ();
		
		menu();
	}
	
	/*rekurens*/
		else {
		system ("cls");
		
		printf ("\n\t\t\t\tusername atau password yang anda masukkan salah\n\n\t\t\t\t\t");
		
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
	char loading1[52] = "\t\t\t\t|================================================|";
	int i;
	printf              ("\t\t\t\t                    loading...                  \n");
	for (i=0; i < 15; i++){
		Sleep(150);
		printf ("%c", loading1[i]);}
	for (i=15; i < 25; i++){
		Sleep(200);
		printf ("%c", loading1[i]);}
	for (i=25; i < 53; i++){
		Sleep(100);
		printf ("%c", loading1[i]);
	}
	
}

//fungsi judul
void judul_proHEALTH(){

    	printf("\n\n\t\t\t\t                                           %c  \n", 178);
    	printf("\t\t\t\t                                         %c%c%c%c%c\n",223,223,219,223,223);
    	printf("\t\t\t\t      %c%c%c %c%c%c  %c%c%c  %c %c %c%c%c %c%c%c %c  %c%c%c %c %c %c\n",
		219, 223, 219, 219, 223, 219, 219, 223, 219, 219, 219, 178, 223, 223,219, 223, 219, 219, 223, 178, 223, 219, 219, 223);
    	printf("\t\t\t\t      %c%c%c %c%c%c%c %c %c  %c%c%c %c%c%c %c%c%c %c   %c  %c%c%c\n",
		219,223,223,219,223,223,219,178,219,219,223,219,219,223,223,219,223,219,219,178,219,223,178);
		printf("\t\t\t\t      %c   %c  %c %c%c%c  %c %c %c%c%c %c %c %c%c%c %c  %c %c\n\n",
	    223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223);
	
	
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
	
	judul_proHEALTH();
	
	printf ("\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c                   << MENU >>                   %c\n",186,186);
    printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|   No  |            Pilihan Menu                |\n");
    printf ("\t\t\t\t|-------|----------------------------------------|\n");
    printf ("\t\t\t\t|   1   |  Info                                  |\n");
    printf ("\t\t\t\t|   2   |  Menghitung IMT                        |\n");
    printf ("\t\t\t\t|   3   |  Menghitung kebutuhan Kalori perhari   |\n");
    printf ("\t\t\t\t|   4   |  Daftar Kalori Makanan                 |\n");
    printf ("\t\t\t\t|   5   |  Menulis catatan kalori                |\n");
    printf ("\t\t\t\t|   6   |  Pengaturan Tampilan                   |\n");
    printf ("\t\t\t\t%c   7   |  Keluar                                %c\n",186,186);
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
	
	printf ("\n");
	printf ("\t\t\t\t\t  masukkan pilihan anda ");
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : {
			info();
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
			menulis_kalori();
			system ("pause");
			menu();
		}
			break;
			
		case 6 : {
			mode_terangGelap();
			menu();
		}
			break;
		
		case 7 : {
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
	
void info() {
			int masukan_info;
			
	    	system ("cls");
	    	
	    	printf ("\t\t\t\t%c%c=========================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|------------------------------------------| \n");
	    	printf ("\t\t\t\t|                  I N F O                 | \n");  
            printf ("\t\t\t\t|------------------------------------------| \n");
            printf ("\t\t\t\t%c%c========================================%c%c \n",219,220,220,219);
            
            printf ("\t\t\t\t\t 1) Apa itu ProHealth\n");
            printf ("\t\t\t\t\t 2) Layanan ProHealth\n");
            printf ("\t\t\t\t\t 3) Tentang Pembuat\n");
            printf ("\t\t\t\t\t Masukkan pilihan :");
            scanf ("%d", &masukan_info);
            fflush(stdin);
            
            switch (masukan_info) {
            	case 1 : {
            		system ("cls");
            		info_ProHealth();
					break;
				}
				case 2 : {
					system ("cls");
					layanan_ProHealth();
					break;
				}
				case 3 : {
					system ("cls");
					tentang_pembuat();
					break;
				}
				
				default :  {
					menu();
				}
			}
            
            
	    
			
}

void info_ProHealth() {
	
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|              T E N T A N G     P R O H E A L T H              | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|     ProHealth merupakan sebuah program kesehatan mahasiswa    | \n");
            printf ("\t\t\t\t|  yang ditujukan untuk teman-teman mahasiswa yang berkeinginan | \n");
            printf ("\t\t\t\t|  kuat untuk menjaga kesehatannya selama perkuliahan, apalagi  | \n");
            printf ("\t\t\t\t|    di situasi pandemi Covid-19 yang seolah tak berujung ini.  | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|   Bingung apakah sudah memiliki IMT normal, kalori per hari   | \n");
            printf ("\t\t\t\t|      yang tercukupi, dan apakah asupan cairan tubuh sudah     | \n");
            printf ("\t\t\t\t|              terpenuhi atau malah sampai dehidrasi?           | \n");
            printf ("\t\t\t\t|   ProHealth hadir di tengah masalah tersebut untuk membantu   | \n");
            printf ("\t\t\t\t|                 menjaga pola hidup sehat kalian!              | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
}

void layanan_ProHealth() {
	
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|                 L A Y A N A N    P R O H E A L T H            | \n");
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|     Count IMT (CIMT), yang akan membantu kalian mengetahui    | \n");
            printf ("\t\t\t\t|       apakah status gizi kalian sudah sesuai berdasarkan      | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|      Takaran Kalori (TAKARI), yang akan menginformasikan      | \n");
            printf ("\t\t\t\t|    seberapa kalori yang tubuh kalian butuhkan per harinya.    | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|   Kalori Saat Ini (KALONI), yang akan membantu kalian dalam   | \n");
            printf ("\t\t\t\t|      mengkalkulasi berapa banyak kalori yang sudah kalian     | \n");
            printf ("\t\t\t\t|       Konsumsi di tiap makanan yang dimakan per harinya.      | \n");
            printf ("\t\t\t\t|  Anti Dehidrasi (ANDI), yang akan memberi pesan untuk kalian  | \n");
            printf ("\t\t\t\t|      agar jangan sampai tubuh kita mengalami dehidrasi.       | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
}

void tentang_pembuat() {
	
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                 T E N T A N G     P E M B U A T               | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|                   ProHealth ini dibuat oleh  :                | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|               Putu Nanda Arya Adyatma (2105551035))           | \n");
            printf ("\t\t\t\t|                   (github.com/nandaadyatma)                   | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|                  Putu Martin Winata (105551049))              | \n");
            printf ("\t\t\t\t|                       (github.com/winataa)                    | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|                          Desember 2021                        | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
}

void info_IMT() {
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                  M E N G H I T U N G    I M T                 | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|   IMT (Indeks Massa Tubuh) merupakan nilai untuk menentukan   | \n");
            printf ("\t\t\t\t|   apakah tubuh suatu indidu tergolong ideal atau tidak. IMT   | \n");
            printf ("\t\t\t\t|            dapat dihitung dengan menggunakan rumus            | \n");
            printf ("\t\t\t\t|                 IMT = massa / (tinggi * tinggi)               | \n");
            printf ("\t\t\t\t|                     masssa (kg),tinggi (cm)                   | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|      IMT tergolong normal yaitu berada diantara 18.5 - 25     | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
}

void judul_IMT() {
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                  M E N G H I T U N G    I M T                 | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
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

void menghitung_IMT() { /*IMT adalah singkatan dari Indeks Massa Tubuh*/
	
	system("cls"); /*Layar nantinya akan dibersihkan sebelum menjalankan kode di baris selanjutnya*/
	
	info_IMT();
	
	system("pause");
	
	system("cls");
	
	judul_IMT();
	
        printf ("\t\t\t\t\tMasukkan tinggi badan anda (dalam cm) : ");
	    scanf ("%f", &tinggi);
	    fflush (stdin);
	    printf ("\t\t\t\t\tMasukkan massa  tubuh anda (dalam kg) : ");
	    scanf ("%d", &massa);
	    fflush (stdin);
	
	system("cls");
	
	judul_IMT();
	
	    tinggi = tinggi / 100;
	
	    IMT = (massa / (tinggi*tinggi)); /*IMT Normal yaitu 18.5 - 25*/
	
	    massa_min = (18.5 *(tinggi*tinggi));
	    massa_maks = (25 * (tinggi*tinggi));
	
	printf ("\n\t\t\t\t\t   Angka Indeks Massa Tubuh (IMT) anda adalah:\n ");
        
	if (IMT < 16) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh anda tergolong sangat kurus (Severe Thinnes)\n");
		printf ("\t\t\tPerhatikan asupan nutrisi Anda! (Konsultasikan dengan dokter bila perlu) \n\t\t\t\Tubuh Anda perlu tambahan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_min -  massa));
	}
	
	else if (IMT >= 16 && IMT <= 17) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh anda tergolong kurus sedang (Moderate Thinnes)\n");
		printf ("\t\t\tAnda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_min -  massa));
	}
	
	else if (IMT > 17 && IMT <= 18.5) {
		printf (YELLOW "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh anda tergolong cukup kurus (Mild Thinnes)\n");
		printf ("\t\t\tAnda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_min -  massa));
	}
	
	else if (IMT > 18.5 && IMT <= 25) {
		printf (GREEN "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tKondisi Anda saat ini sudah dalam kategori normal\n");
		printf ("\t\t\tTetap jaga pola makan Anda dan teruskan pola hidup yang sehat agar IMT tetap stabil!\n\t\t\t\t\t");
	}
	
	else if (IMT > 25 && IMT <= 30) {
		printf (YELLOW "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tKondisi tubuh mulai di atas normal\n");
		printf ("\t\t\tAnda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa - massa_maks));
	}
	
	else if (IMT > 30 && IMT <= 35) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tMassa tubuh anda mulai berlebih di kategori obesitas kelas I\n");
		printf ("\t\t\tAnda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa - massa_maks));
	}
	
	else if (IMT > 35 && IMT <= 40) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTolong Anda mengalami kondisi obesitas kelas II\n");
		printf ("\t\t\tAnda perlu menurunkan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa - massa_maks));
	}
	
	else if (IMT > 40) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tSaat ini, tubuh Anda termasuk kategori obesitas kelas III\n");
		printf ("\t\t\t\t    Untuk itu perbanyak gerak anda dan atur pola makan dengan baik  \n\t\t\tAnda perlu menurunkan massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_maks -  massa));
	}
	
	else {
		printf ("\t\t\t\t\tIMT tidak valid! Mohon masukkan angka yang sesuai.\n");
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

void menulis_kalori() {
	struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);

	int i = 0;     //menyimpan indeks
	FILE *fp;      //membuat pointer file
	int ulang = 1; //menyimpan integer pengulangan
	
	fp = fopen("catatan_kalori.txt","a");
	

	
	while(ulang == 1) {
		system("cls");
		
		printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
		printf ("\t\t\t\t|         M E N U L I S    C A T A T A N   K A L O R I          | \n");  
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    	printf ("\t\t\t\t%c%c=============================================================%c%c \n\n",219,220,220,219);
    	
		printf ("\t\t\t\tKonsumsi tanggal %d / %d / %d\n\t\t\t\tpukul : %d.%d \n", Sys_T->tm_mday, Sys_T->tm_mon+1, 1900+Sys_T->tm_year, Sys_T->tm_hour, Sys_T->tm_min);
        fprintf(fp, "\t\t%c %d / %d / %d\n",254, Sys_T->tm_mday, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);
        fflush(stdin); 
        
        fprintf(fp, "\t\t\tjam : %d.%d\n", Sys_T->tm_hour, Sys_T->tm_min);
       	fflush(stdin);
       	
		printf ("\t\t\t\tMasukkan jumlah kalori yang dikonsumsi (kal): ", i+1);
		scanf("%d",&kalori);
		fprintf(fp,"\t\t\tjumlah kalori : %d kal\n", kalori); 
		fprintf(fp,"\t\t\t\--------------------------------\n"); 
		fflush (stdin);
		
		
		system ("cls");
		
		printf ("\t\t\t\tData berhasil ditulis\n\t\t\t\t");
		
		system ("pause");
		
		system ("cls");
		
		printf ("\t\t\t\tApakah ingin mengulang? (1/0) : ");
		scanf ("%d", &ulang);
		fflush(stdin);
		
		system ("cls");
		
		fprintf("%d\n", i);
	}
	
	fclose(fp);
	
	printf ("\t\t\t\tData berhasil ditulis \n\t\t\t\t");

}

void mode_terangGelap() {
	

	printf("\t\t\t\t\tpilihan mode\n");
	printf("\t\t\t\t\t1) Terang \n");
	printf("\t\t\t\t\t2) Gelap  \n");
	printf("\t\t\t\t\t\tMasukkan : ");
	
	scanf("%d",&terangGelap);
	
	system ("cls");
	
	switch (terangGelap) {
		case 1 : {
			system ("cls");
			system ("color 70");
			menu();
			break;
		}
		
		case 2 : {
			system ("cls");
			system ("color 07");
			menu();
			break;
		
		default : menu();
		}
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

void keluar() {
	int keluar = 1;
	while(keluar == 1) {
		system ("cls");
		
		printf ("\t\t\t\t\tapakah yakin ingin keluar?\n");
		printf ("\t\t\t\t\t0) kembali\n");
		printf ("\t\t\t\t\t1) keluar\n");
		printf ("\t\t\t\t\tmasukkan : ");
		
		scanf ("%d", &keluar);
		fflush (stdin);
		
		if (keluar == 1) { 
		printf ("\t\t\t\t\t\t\n\nterima kasih\n");
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


