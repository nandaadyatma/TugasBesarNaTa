#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//mendefinisikan warna pada teks
#define RED "\e[31m\e[1m"
#define YELLOW "\033[0;33m"
#define GREEN "\e[32m\e[1m"


	//variabel global

	
	int regislogin;						//variabel dalam fungsi registrasi
	
	
	typedef struct user{				//variabel dalam fungsi registrasi dan login
	char namalengkap [50];
	char username [20];
	char password [20];
	} user;

	user Pengguna;
	
	char inputusername [20];			//variabel dalam fungsi login
	char inputpassword [20];
	char username[20] = "userapa";
	char password[20] = "passapa";	
	
	int masukan;						//variabel dalam perhitungan IMT
	int massa;
	float tinggi;
	float IMT; 
	int massa_min;
	int massa_maks;
	
	int berat_badan;					//variabel dalam menghitung kebutuhan kalori perhari
	int tinggi_badan;
	int umur;
	int jenis_kelamin;
	float BMR;
	int intensitas;
	float kebutuhan_kalori_harian; 
	
	int total_kalori = 0;				//menghitung kalori
	int j = 2;
	int i = 2;

typedef struct makanan {
	char nama_makanan[50];
	int gram;
	int kalori;
} makanan;

	
makanan yangDimakan[];
	
makanan Makanan[] = {
	//nama makanan           //gram //kalori  //indeks
	
	//karbohidrat
	{"Nasi Putih           ", 100, 175},    //0
	{"Nasi Tim             ", 100, 88},     //1
	{"Nasi Uduk            ", 200, 506},    //2
	{"Nasi Goreng          ", 150, 296},    //3
	{"Jagung Rebus         ", 250, 90},     //4 dst.
	{"Singkong Rebus       ", 100, 125},
	{"Talas Rebus          ", 100, 98},
	{"Kentang Rebus        ", 200, 166},
	{"Kentang Goreng       ", 150, 211},
	{"Ketan Putih          ", 120, 217},
	{"Ketupat              ", 160, 32},
	{"Roti Tawar           ", 60, 149},
	{"Lontong              ", 200, 38},
	{"Bubur                ", 200, 44},
	{"Bubur Ayam           ", 200, 165},
	{"Bubur Sum-sum        ", 100, 178},
	{"Bihun Goreng         ", 150, 296},
	{"Crackers             ", 50, 229},
	{"Makaroni             ", 25, 91},
	{"Mie Instant          ", 50, 168},
	{"Mie Goreng           ",100, 263},
	{"Mie Instant          ", 50, 168},
	{"Spaghetti            ", 300,642},    //22
	
	//lauk pauk
	{"Ayam Panggang        ", 80, 385},    //23
	{"Telur Mata Sapi      ", 60, 40},
	{"Telur Ayam Rebus     ", 60, 97},
	{"Telur Asin Rebus     ", 75, 138},
	{"Ati Ayam Goreng      ", 50, 98},
	{"Bakso Sapi           ", 100, 260},
	{"Bandeng Goreng       ", 160, 180},
	{"Lele Goreng          ", 60, 57},
	{"Tempe Goreng         ", 50, 118},
	{"Abon Sapi            ", 50, 118},
	{"Ayam Goreng Kecap    ", 75, 358},
	{"Dendeng Balado       ", 50, 147},
	{"Gulai Ayam           ", 190, 165},
	{"Gulai Cumi           ", 100, 183},
	{"Keripik Tempe        ", 25, 68},
	{"Ayam Kentucky        ", 150, 130},
	{"Tahu Goreng          ", 150, 130},
	{"Perkedel Jagung      ", 50, 108},
	{"Perkedel Kentang     ", 50, 123},
	{"Fuyung Hai           ", 50, 114},
	{"Rendang Daging       ", 75, 285},   //43
	
	//sayuran
	{"Acar Kuning          ", 75, 53},    //44
	{"Bening Bayam         ", 50, 18},
	{"Cah Labu Siam        ", 100, 42},
	{"Sayur Asam           ", 100, 88},
	{"Sop Ayam             ", 100, 95},
	{"Sop Bayam            ", 50, 78},
	{"Sayur Lodeh          ", 100, 59},
	{"Cah Kacang Panjang   ", 75, 53},
	{"Tumis Buncis         ", 100, 52},
	{"Tumis Daun Singkong  ", 75, 53},
	{"Tumis Kacang + Jagung", 75, 53},
	{"Gudeg                ", 150, 132},  //55

	//buah
	{"Apel                 ", 160, 92},   //56 
	{"Apel Merah           ", 140, 82},
	{"Apel Merah           ", 140, 82},
	{"Belimbing            ", 160, 80},
	{"Duku                 ", 200, 81},
	{"Jambu Air            ", 60, 35},
	{"Jambu Biji           ", 320, 157},
	{"Jeruk Medan          ", 140, 46},
	{"Jeruk Pontianak      ", 150, 67},
	{"Jeruk Sunkist        ", 200, 40},
	{"Mangga Manalagi      ", 100, 72},
	{"Nanas                ", 200, 81},
	{"Pepaya               ", 100, 81},
	{"Pir                  ", 200, 80},
	{"Pir Hijau            ", 200, 105},
	{"Pisang Rebus         ", 250, 136},
	{"Salak                ", 150, 64},
	{"Semangka             ", 150, 48},
	{"Alpukat              ", 100, 85},
	{"Anggur               ", 125, 60},
	{"Klengkeng            ", 200, 79},
	{"Melon                ", 200, 46},
	{"Mangga Harum Manis   ", 300, 90},
	{"Pisang Ambon         ", 100, 74},
	{"Pisang Mas           ", 125, 11},
	{"Pisang Raja          ", 150, 126},
	{"Sirsak               ", 125, 55},     //81


};
	
	//variabel dalam menulis catatan kalori
	int kalori;
	
	//variabel pada menu tampilan
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
	void registrasi();
	void login();
	void loading();
	void judul_ProHealth();
	void menu();
	void info();
	void info_ProHealth();
	void layanan_ProHealth();
	void tentang_pembuat();
	void info_IMT();
	void judul_IMT();
	void menghitung_IMT();
	void daftar_kalori_makanan();
	void menghitung_kebutuhan_kalori_perhari();
	void info_TAKARI();
	void menghitung_kalori();
	void memasukkan_jenis_kelamin();
	void BMR_laki_laki(); //BMR singkatan dari Body Metabolic Rate
	void BMR_perempuan();
	void intensitas_aktivitas();
	void menulis_kalori();
	void membaca_catatan_kalori();
	void mode_terangGelap();
	void keluar();
	

//fungsi utama
int main() {
		
		regis_login();

	return 0;
	}


//=======================================================================//
//>>>>>>>>>>>>>>>   Fungsi Untuk Registrasi atau Login   <<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : regis_login                                          //
// Input Argumen  : -                                                    //
//                  -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan mengarahkan pengguna untuk           //
//                  melakukan registrasi atau login dengan memasukkan    //
//                  pilihan.                                             //
//                                                                       //
// Versi : 1                                        Rev. 0               //
// Tgl   : 23-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
// Revisi: -						                                     //
//=======================================================================//

void regis_login() {
	printf("\t\t\t\t\t1) registrasi\n");
	printf("\t\t\t\t\t2) login\n\n");
	printf("\t\t\t\t\tMasukkan Anda : ");
	
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

//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>  Fungsi Untuk Registrasi  <<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : void registrasi                                      //
// Input Argumen  : -                                                    //
//                  -                                                    //
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
// Revisi: -						                                     //
//=======================================================================//

void registrasi() {	//deklarasi fungsi void
		system("cls");
		
		printf ("\t\t\t\t\t\t<REGISTRASI>\n\n");
		printf ("\t\t\t\tMasukkan nama lengkap : ");
		gets (Pengguna.namalengkap);	//memanggil array of char nama lengkap dengan spasi
		fflush (stdin);

		printf ("\t\t\t\tBuat username : ");
		scanf ("%s",&Pengguna.username);
		fflush (stdin);

		printf ("\t\t\t\tBuat password : ");
		scanf ("%s", &Pengguna.password);
		fflush (stdin);
		system ("cls");
		}

//=======================================================================//
//>>>>>>>>>>>>>>             Fungsi Untuk Login            <<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : login                                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan mengarahkan user untuk login saat    //
//                  berhasil registrasi, dengan memasukkan kembali       //
//                  username dan password yang telah dibuat atau         //
//                  sudah direservasi sebelumnya. Jika penginputan benar //
//                  user akan diarahkan ke menu, namun jika salah user   //
//                  akan diminta kembali memasukkan username dan         //
//                  password hingga benar.                               //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 21-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void login() {
	
	system("cls");
			
	
	printf ("\t\t\t\t\t\t<LOGIN>\n");
	printf ("\n");
	printf ("\t\t\t\tMasukkan username : ");
	scanf ("%s", &inputusername);
	fflush (stdin);
		
	printf ("\t\t\t\tMasukkan password : ");
	scanf ("%s", &inputpassword);
	fflush (stdin);
	
	//basis
	if ((strcmp(username, inputusername) == 0 || strcmp(Pengguna.username, inputusername) == 0) && ( strcmp(password, inputpassword) == 0 || strcmp(Pengguna.password, inputpassword) == 0 )	){
		system ("cls");
		
		printf (GREEN "\n\t\t\t\t Username dan password yang Anda masukkan BENAR \n\n");
		
		sleep(1);
		tampilan();
		
		printf ("\t\t\t\t\tSelamat  Datang  %s !\n\n\t\t\t\t", Pengguna.namalengkap);
		
		system ("pause");
		
		system ("cls");
		
		loading ();
		
		menu();
	}
	
	//rekurens
		else {
		system ("cls");
		
		printf (RED "\n\t\t\t\tUsername atau password yang Anda masukkan SALAH\n\n\t\t\t\t\t");
		
		sleep(1);
		tampilan();
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
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void loading () {
    system ("cls");                                                   
	char loading1[55] = "\t\t\t\t|================================================|";
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

//=======================================================================//
//>>>>>>>>>>>    Fungsi Untuk Menampilkan Judul ProHealth    <<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : judul_ProHealth                                      //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan menampilkan tulisan judul            //
//                  pada program ProHealth menggunakan character block   //
//                  yang disusun satu persatu                            //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 22-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void judul_ProHealth() {

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
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
// Revisi: Menambahkan menu Info dan mengeluarkan variabel int masukan   //
//         menjadi variabel global                                       //
//=======================================================================//

void menu() {
	system ("cls");
	
	judul_ProHealth();
	
	printf ("\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<<<  M E N U  >>>>>>>>>>>>>>>>>>%c\n",186,186);
    printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|   No  |            Pilihan Menu                |\n");
    printf ("\t\t\t\t|-------|----------------------------------------|\n");
    printf ("\t\t\t\t|   1   |  Info Program                          |\n");
    printf ("\t\t\t\t|   2   |  Menghitung IMT                        |\n");
    printf ("\t\t\t\t|   3   |  Menghitung Kebutuhan Kalori Per Hari  |\n");
    printf ("\t\t\t\t|   4   |  Daftar Kalori Makanan                 |\n");
    printf ("\t\t\t\t|   5   |  Menghitung Kalori pada Makanan        |\n");
    printf ("\t\t\t\t|   6   |  Menulis Catatan Kalori Per Hari       |\n");
    printf ("\t\t\t\t|   7   |  Membaca Catatan Kalori                |\n");
    printf ("\t\t\t\t|   8   |  Pengaturan Tampilan                   |\n");
    printf ("\t\t\t\t%c   9   |  Keluar                                %c\n",186,186);
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
	
	printf ("\n");
	printf ("\t\t\t\t\t  Masukkan pilihan Anda : ");
	
	scanf ("%d", &masukan);
	fflush(stdin);
	
	switch (masukan) { 
		case 1 : {    //info program          
			info();
			system ("pause");
			menu();
		}
			break;
		
		
		case 2 : {    //menghitung IMT
			menghitung_IMT();   
			system ("pause");
			menu();
		}
			break;
			
		case 3 : {    //menghitung kebutuhan kalori perhari
			menghitung_kebutuhan_kalori_perhari();
			system ("pause");
			menu();
		}
			break;
			
		case 4 : {    //daftar kalori makanan
			menu_daftar_kalori_makanan();
			system ("pause");
			menu();
		}
			break;
		
		case 5 : {    //menghitung kalori pada makanan
			menghitung_kalori();
			system ("pause");
			menu();
		}
			break;
		
		case 6 : {    //menulis catatan konsumsi kalori
			menulis_kalori();
			system ("pause");
			menu();
		}
			break;
			
		case 7 : {    //membaca catatan kalori
			membaca_catatan_kalori();
			system ("pause");
			menu();
		}
			break;
			
		case 8 : {    //mengatur tampilan console (terminal)
			mode_terangGelap();
			menu();
		}
			break;
		
		case 9 : {    //keluar
			keluar();
		}
			break;
			
		default: {
			menu();
			break;
		}
		
		
	}
	}	


//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>>>>       Fungsi Info     <<<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : info                                                 //
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
            printf ("\t\t\t\t%c%c========================================%c%c \n\n",219,220,220,219);
            
            printf ("\t\t\t\t\t 1) Apa itu ProHealth\n");
            printf ("\t\t\t\t\t 2) Layanan ProHealth\n");
            printf ("\t\t\t\t\t 3) Tentang Pembuat\n\n");
            printf ("\t\t\t\t\t Masukkan pilihan : ");
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
            printf ("\t\t\t\t%c%c=============================================================%c%c \n\t\t\t\t",219,220,220,219);
}

void layanan_ProHealth() {
	
	   		printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|                 L A Y A N A N    P R O H E A L T H            | \n");
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|    Hitung IMT (HIMT), yang akan membantu kalian mengetahui    | \n");
	    	printf ("\t\t\t\t|       apakah status gizi kalian sudah sesuai berdasarkan      | \n");
            printf ("\t\t\t\t|  perbandingan massa tubuh dan perkalian tinggi badan kalian.  | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|      Takaran Kalori (TAKARI), yang akan menginformasikan      | \n");
            printf ("\t\t\t\t|    seberapa kalori yang tubuh kalian butuhkan per harinya.    | \n");
	    	printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|   Kalori Saat Ini (KALONI), yang akan membantu kalian dalam   | \n");
            printf ("\t\t\t\t|        mencatat berapa banyak kalori yang sudah kalian        | \n");
            printf ("\t\t\t\t|       Konsumsi di tiap makanan yang dimakan per harinya.      | \n");
	    	printf ("\t\t\t\t|                                                               | \n"); 
	    	printf ("\t\t\t\t|  Selain itu ProHealth juga menyediakan menu untuk menampilkan | \n");  
            printf ("\t\t\t\t|  daftar kalori makanan, menghitung, mencatat dan menampilkan  | \n");
	    	printf ("\t\t\t\t|           konsumsi kalori dari masing-masing user.            | \n");
	    	printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n\t\t\t\t",219,220,220,219);
}

void tentang_pembuat() {
	
			printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                 T E N T A N G     P E M B U A T               | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|                   ProHealth ini dibuat oleh  :                | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|               Putu NAnda Arya Adyatma (2105551035))           | \n");
            printf ("\t\t\t\t|                    (github.com/nAndaadyatma)                  | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|                 I Putu Martin Winata (2105551049))            | \n");
            printf ("\t\t\t\t|                       (github.com/winataa)                    | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|                          Desember 2021                        | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n\t\t\t\t",219,220,220,219);
}

void info_IMT() {
		    printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                    T E N T A N G    H I M T                   | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|   IMT (Indeks Massa Tubuh) merupakan nilai untuk menentukan   | \n");
            printf ("\t\t\t\t|   apakah tubuh suatu indidu tergolong ideal atau tidak. HIMT  | \n");
            printf ("\t\t\t\t|   (HITUNG IMT) akan dapat dihitung dengan menggunakan rumus   | \n");
            printf ("\t\t\t\t|                 IMT = massa / (tinggi * tinggi)               | \n");
            printf ("\t\t\t\t|                     masssa (kg),tinggi (cm)                   | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t|      IMT tergolong normal yaitu berada diantara 18.5 - 25     | \n");
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
}

void menampikan_karbohidrat() {
	printf ("\t\t\t\t %c%c===============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------          Karbohidrat          --------==\n");
	printf ("\t\t\t\t ===================================================\n");
	
	for (i = 0; i < 9 ; i++ ) {
		printf ("\t\t\t\t %d  | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
	for	(i = 9; i < 23 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}

void menampikan_lauk() {
	printf ("\t\t\t\t %c%c===============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------           Lauk Pauk            --------==\n");
	printf ("\t\t\t\t ===================================================\n");
	
	for (i = 23; i < 44 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
}

void menampikan_sayur() {
	printf ("\t\t\t\t %c%c===============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------             Sayur              --------==\n");
	printf ("\t\t\t\t ===================================================\n");

	for (i = 44; i < 56 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s| ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}

void menampikan_buah() {
	printf ("\t\t\t\t %c%c===============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------              Buah             --------==\n");
	printf ("\t\t\t\t ===================================================\n");
	 
	for (i = 56; i < 83 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}

//=======================================================================//
//>>>>>>>>>>>   Fungsi Untuk Menampilkan Kalori Pada Makanan   <<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menu_daftar_kalori_makanan                           //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini bertujuan agar user menjadi lebih tahu    //
//                  berapa kandungan kalori yang ada di setiap makanan   //
//                  berdasarkan kategori karbohidrat, lauk pauk, buah    //
//                  dan sayur                                            //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 24-12-2021                               Tgl: 24-12-21        //
// I Putu Martin Winata - 2105551049                                     //
// Kelas B                                                               //
//                                                                       //
// Revisi: Melengkapi daftar buah dan sayur pada daftar makanan          //
//                                                                       //
//=======================================================================//

void menu_daftar_kalori_makanan(){
	system ("cls");
	
	printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	printf ("\t\t\t\t|             D A F T A R   K A L O R I   M A K A N A N         | \n");  
  	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
    	
    daftar_kalori_makanan();
}

void daftar_kalori_makanan(){
	int pilihan_makanan;

	printf ("\n\t\t\t\t ==------               Jenis makanan:                ------==\n");
	printf ("\t\t\t\t                       1) Karbohidrat                            \n");
	printf ("\t\t\t\t                       2) Lauk Pauk                             \n");
	printf ("\t\t\t\t                       3) Buah                                  \n");
	printf ("\t\t\t\t                       4) Sayur                                 \n\n");
	 
	printf ("\t\t\t\t\t    Masukkan pilihan makanan (Pilih 1-4): ");
	scanf ("%d", &pilihan_makanan);
	fflush(stdin);
	
	system ("cls");
	switch (pilihan_makanan) {
		case 1 :
		{	menampikan_karbohidrat();
		}
			break;
			
		case 2 :
		{	menampikan_lauk();
		}
			break;
			
		case 3 :
		{	menampikan_buah();
		}
			break;
		
		case 4 :
		{	menampikan_sayur();
		}
			break;
		
	}
}

//=======================================================================//
//>>>>>>>>>>      Fungsi Untuk Menghitung Kalori Makanan       <<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menghitung_kebutuhan_kalori_perhari                  //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini bertujuan untuk menghitung kebutuhan      //
//                  kalori perhari individu (user). Fungsi ini nantinya  //
//                  juga akan memanggil fungsi lain yakni daftar_kalori  //
//                  makanan, jumlah_gram, kalori_makanan_ dan menambah   //
//                                                                       //
//                                                                       //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 19-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//


void menghitung_kalori() {
	int makanan;
	int jumlah_gram;
	int kalori_makanan = 0;
	int menambah;
	
	
	system ("cls");
	
	printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	printf ("\t\t\t\t|        M E N G H I T U N G   K A L O R I   M A K A N A N      | \n");  
  	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
	
	
	daftar_kalori_makanan();
	printf ("\t\t\t\t %c%c===============================================%c%c\n\n",219,220,220,219);
	printf("\t\t\t\t\t    Masukkan pilihan makanan : ");
	scanf("%d", &makanan);
	fflush(stdin);
	makanan = makanan - 1;
	
	
	printf("\t\t\t\t\t    Masukkan jumlah makanan (Gram) : ");
	scanf("%d", &jumlah_gram);
	fflush(stdin);
	
	kalori_makanan = Makanan[makanan].kalori * jumlah_gram / Makanan[makanan].gram;
	
	total_kalori += kalori_makanan;
	
	printf("\n\t\t\t\t\t    Jumlah kalorinya yaitu : %d kalori\n",  kalori_makanan);
	
	strncpy (yangDimakan[j].nama_makanan,Makanan[makanan].nama_makanan,21);
	yangDimakan[j].kalori = kalori_makanan;	j++;
		
	printf("\n\t\t\t\t\t    Makanan Anda\n",  kalori_makanan);
	for (i = 2; i < j; i++){
		printf("\t\t\t\t\t    %s |: %d  kalori  \n", yangDimakan[i].nama_makanan ,yangDimakan[i].kalori);
	
	}
	
	printf("\t\t\t\t\t    Total kalori Anda : %d kalori\n", total_kalori);

	
	printf("\n\t\t\t\t\t    Ingin menambah kalori pada makanan lain? (1/0) :");
	scanf ("%d", &menambah);
	fflush(stdin);
	

	
		
	switch (menambah) {
		case 0 : {
		system ("cls");
		printf ("\n\t\t\t\t\t    Terima kasih \n");
		}
		break;
		
		case 1 : {menghitung_kalori();
		}
			break;
	}
	
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
// Nama Fungsi    : menghitung_IMT                                       //
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

void menghitung_IMT() { //IMT adalah singkatan dari Indeks Massa Tubuh
	
	system("cls"); //Layar nantinya akan dibersihkan sebelum menjalankan kode di baris selanjutnya
	
	info_IMT();
	
	system("pause");
	
	system("cls");
	
	judul_IMT();
	
        printf ("\t\t\t\t\tMasukkan tinggi badan Anda (dalam cm) : ");
	    scanf ("%f", &tinggi);
	    fflush (stdin);
	    printf ("\t\t\t\t\tMasukkan massa  tubuh Anda (dalam kg) : ");
	    scanf ("%d", &massa);
	    fflush (stdin);
	
	system("cls");
	
	judul_IMT();
	
	    tinggi = tinggi / 100;
	
	    IMT = (massa / (tinggi*tinggi)); //IMT Normal yaitu 18.5 - 25
	
	    massa_min = (18.5 *(tinggi*tinggi));
	    massa_maks = (25 * (tinggi*tinggi));
	
	printf ("\n\t\t\t\t\t   Angka Indeks Massa Tubuh (IMT) Anda adalah: \n ");
        
	//kondisi masing-masing rentang angka IMT	
	if (IMT < 16) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh Anda tergolong sangat kurus (Severe Thinnes)\n");
		printf ("\t\t\t\tPerhatikan asupan nutrisi Anda! (Konsultasikan dengan dokter bila perlu) \n\t\t   Tubuh Anda perlu tambahan massa tubuh setidaknya %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_min -  massa));
	}
	
	else if (IMT >= 16 && IMT <= 17) {
		printf (RED "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh Anda tergolong kurus sedang (Moderate Thinnes)\n");
		printf ("\t\t\tAnda perlu menambah massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_min -  massa));
	}
	
	else if (IMT > 17 && IMT <= 18.5) {
		printf (YELLOW "\t\t\t\t\t\t\t   %0.3f \n",IMT );
		sleep(2);
		tampilan();
		printf ("\n\t\t\t\t\tTubuh Anda tergolong cukup kurus (Mild Thinnes)\n");
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
		printf ("\n\t\t\t\t\tMassa tubuh Anda mulai berlebih di kategori obesitas kelas I\n");
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
		printf ("\t\t\t\t    Untuk itu perbanyak gerak Anda dan atur pola makan dengan baik  \n\t\t\tAnda perlu menurunkan massa tubuh paling tidak %d kg untuk mencapai keadaan normal\n\t\t\t\t\t", (massa_maks -  massa));
	}
	
	else {
		printf ("\t\t\t\t\tIMT tidak valid! Mohon masukkan angka yang sesuai.\n");
	}
	
}

void BMR_laki_laki() {
	printf("\t\t\t\t\tMasukkan berat badan Anda : ");
	scanf ("%d", &berat_badan);
	fflush(stdin);
	
	printf("\t\t\t\t\tMasukkan tinggi badan Anda : ");
	scanf ("%d", &tinggi_badan);
	fflush(stdin);
	
	printf("\t\t\t\t\tMasukkkan umur Anda : ");
	scanf ("%d", &umur);
	fflush(stdin);
	
	system ("cls");
	
	//Untuk laki-laki: (88,4 + 13,4 x berat dalam kilogram) + (4,8 x tinggi dalam sentimeter) - (5,68 x usia dalam tahun)
	
	BMR = (88.4 + (13.4 * berat_badan)) + (4.8 * tinggi_badan) - (5.68 * umur);
	
	
}

void BMR_perempuan() {
	printf("\t\t\t\t\tMasukkan berat badan Anda : ");
	scanf ("%d", &berat_badan);
	fflush(stdin);
	
	printf("\t\t\t\t\tMasukkan tinggi badan Anda : ");
	scanf ("%d", &tinggi_badan);
	fflush(stdin);
	
	printf("\t\t\t\t\tMasukkkan umur Anda : ");
	scanf ("%d", &umur);
	fflush(stdin);
	
	system ("cls");
	
	//Untuk wanita: (447,6 + 9,25 x berat dalam kilogram) + (3,10 x tinggi dalam sentimeter) - (4,33 x usia dalam tahun)

	BMR = (447.6 + (9.25 * berat_badan)) + (3.10 * tinggi_badan) - (4.33 * umur);

}

void memasukkan_jenis_kelamin() {
	printf("\t\t\t\t\tJenis kelamin :\n");
	printf("\t\t\t\t\t1) Laki_laki\n");
	printf("\t\t\t\t\t2) Perempuan\n");
	printf("\t\t\t\t\tMasukkan jenis kelamin Anda : ");
	scanf ("%d", &jenis_kelamin);
	fflush (stdin);
	
	system ("cls");
}

void intensitas_aktivitas() {
		
		system ("cls");
		
		printf("\t\t\t\tIntensitas aktivitas\n");
		printf("\t\t\t\t1) Tidak aktif   (Jarang berolahraga)\n");
		printf("\t\t\t\t2) sedikit aktif (Berolahraga ringan 1-3 hari seminggu)\n");
		printf("\t\t\t\t3) Cukup aktif   (Berolahraga intensitas sedang 3-5 hari seminggu)\n");
		printf("\t\t\t\t4) Sangat aktif  (Berolahraga intensitas berat 6-7 hari seminggu)\n");
		printf("\t\t\t\t5) Ekstra aktif  (Berolahraga intensitas sangat berat 6-7 hari \n");
		printf("\t\t\t\tSeminggu atau bekerja di bidang yang membutuhkan stamina dan fisik yang kuat)\n");
		printf("\n\t\t\t\tMasukkan pilihan Anda (1-5) : ");
		
		scanf("%d", &intensitas);
		fflush(stdin);
		
		switch (intensitas) {
		case 1 : {
			kebutuhan_kalori_harian = BMR * 1.2;
			printf ("\t\t\t\tKebutuhan kalori perhari Anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 2 : {
			kebutuhan_kalori_harian = BMR * 1.375;
			printf ("\t\t\t\tKebutuhan kalori perhari Anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 3 : {
			kebutuhan_kalori_harian = BMR * 1.55;
			printf ("\t\t\t\tKebutuhan kalori perhari Anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 4 : {
			kebutuhan_kalori_harian = BMR * 1.725;
			printf ("\t\t\t\tKebutuhan kalori perhari Anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		case 5 : {
			kebutuhan_kalori_harian = BMR * 1.9;
			printf ("\t\t\t\tKebutuhan kalori perhari Anda yaitu %f kalori\n", kebutuhan_kalori_harian);
		}
		break;
		
		default : {
		printf ("\t\t\t\t\tPilihan tidak valid!\n");
		system ("pause");
		system ("cls");
		memasukkan_jenis_kelamin();
		}
		}
		
	
}



void info_TAKARI() {
	    	printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	    	printf ("\t\t\t\t|                  T E N T A N G    T A K A R I                 | \n");  
            printf ("\t\t\t\t|---------------------------------------------------------------| \n");
            printf ("\t\t\t\t|===============================================================| \n");
            printf ("\t\t\t\t|                                                               | \n");
	  		printf ("\t\t\t\t|      Beda orang, beda gender, beda usia, beda aktivitas       | \n");
            printf ("\t\t\t\t|      maka pasti akan berbeda pula kebutuhan kalori tubuh      | \n");
            printf ("\t\t\t\t|       mereka per harinya. Dengan TAKARI (Takaran Kalori       | \n");
            printf ("\t\t\t\t|       Per Hari) Anda akan jadi lebih tahu berapa banyak       | \n"); 
			printf ("\t\t\t\t|           kebutuhan kalori yang tubuh Anda butuhkan.          | \n");  
            printf ("\t\t\t\t|                                                               | \n");
            printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
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
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void menghitung_kebutuhan_kalori_perhari() {
	system("cls");
	
	info_TAKARI();
	system ("pause");
	
	system("cls");
	
	
	memasukkan_jenis_kelamin();
	fflush (stdin);
	
	switch (jenis_kelamin) {
		case 1 : {
			BMR_laki_laki();
			
			printf ("\t\t\t\t\tBMR Anda yaitu %f\n", BMR);
		}
		break;
		case 2 : {
			BMR_perempuan();
		
			printf ("\t\t\t\t\tBMR Anda yaitu %f\", BMR");
		}
		break;
		default : {
		printf ("\t\t\t\t\tpilihan tidak valid\n");
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
//>>>>>>>>>>>   Fungsi Untuk Menulis Catatan Kalori Per Hari  <<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : menulis_kalori		                                 //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan mencatat berapa konsumsi kalori      //
//                  kalori perhari individu (user), dan menampilkannya   //
//                  kembali di layar.                                    //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 24-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void menulis_kalori() {
	struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);

	FILE *fp;      //membuat pointer file external
	int ulang = 1; //menyimpan integer perulangan
	
	fp = fopen ("catatan_kalori.txt","a");
	

	
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
		fprintf(fp,"\t\t\tJumlah kalori : %d kal\n", kalori); 
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
		
		
	}
	
	fclose(fp);
	
	printf ("\t\t\t\tData berhasil ditulis!\n\t\t\t\t");

}

//=======================================================================//
//>>>>>>>>>>>   Fungsi Untuk Membaca Catatan Kalori Per Hari  <<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : membaca_catatan_kalori  	                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan membaca data pada catatan_kalori     //
//                  yang telah ditulis sebelumnya dan menampilkannya     //
//                  kembali di layar.                                    //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 24-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void membaca_catatan_kalori() {
	char data[50];
    int i=1;
    FILE *fp;

    fp=fopen("catatan_kalori.txt", "r");
	
		system("cls");
		printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
		printf ("\t\t\t\t|                  C A T A T A N   K A L O R I                  | \n");  
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    	printf ("\t\t\t\t================================================================= \n\n",219,220,220,219);
	
    while(fgets(data,50,fp)!=NULL) //membaca dan mengulang sampai data habis
    {
        printf("\t\t\t\t|%s", data);
        i++;
    }
    printf ("\t\t\t\t%c%c=============================================================%c%c \n\n",219,220,220,219);
    fclose(fp);
}

//=======================================================================//
//>>>>>>>>>>>>>>>>    Fungsi Untuk Mengatur Tampilan    <<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : mode_terangGelap                                     //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Fungsi ini akan membantu pengguna untuk mengatur     //
//                  tampilan terminal program. User akan diminta untuk   //
//                  memilih tampilan yang diinginkan                     //
//                                                                       //
// Versi : 1.0                                      Rev. -               //
// Tgl   : 22-12-2021                               Tgl: -               //
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void mode_terangGelap() {
	

	printf("\t\t\t\t\tPilihan mode\n");
	printf("\t\t\t\t\t1) Terang \n");
	printf("\t\t\t\t\t2) Gelap  \n");
	printf("\t\t\t\t\t\tMasukkan : ");
	
	scanf("%d",&terangGelap);
	fflush (stdin);
	
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
// Putu NAnda Arya Adyatma - 2105551035                                  //
// Kelas B                                                               //
//                                                                       //
//=======================================================================//

void keluar() {
	int keluar = 1;
	while(keluar == 1) {
		system ("cls");
		
		printf ("\t\t\t\t\tApakah yakin ingin keluar?\n");
		printf ("\t\t\t\t\t0) Kembali\n");
		printf ("\t\t\t\t\t1) Keluar\n");
		printf ("\t\t\t\t\tMasukkan pilihan : ");
		
		scanf ("%d", &keluar);
		fflush (stdin);
		
		if (keluar == 1) { 
		system ("cls");
		printf ("\t\t\t\t\t\tT e r i m a   k a s i h !\n");
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

		printf ("Masukkan angka 1 atau 0 ya!");
		
		}
		}
	}
