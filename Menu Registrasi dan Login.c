#include <stdio.h>	/*input library*/
#include <string.h>

//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>  Fungsi Untuk Registrasi  <<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : void registrasi()                                    //
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
// Revisi: Menambahkan fungsi keluar pada menu Penghitungan IMT dan      //
//         melengkapi fungsi dengan tabel keterangan fungsi              //
//=======================================================================//

char inputusername [20];	/*variabel global*/
char inputpassword [20];

typedef struct user{
	char namalengkap [50];
	char username [20];
	char password [20];
	} user;

user Pengguna;

void registrasi() {	/*deklarasi fungsi void*/
		printf ("==REGISTRASI==\n");
		printf ("Masukkan nama lengkap : ");
		gets (Pengguna.namalengkap);	/*memanggil array of char nama lengkap dengan spasi*/
		fflush (stdin);
		
		printf ("Masukkan username : ");
		scanf ("%s",&Pengguna.username);
		fflush (stdin);
		
		printf ("Buat password : ");
		scanf ("%s", &Pengguna.password);
		system ("cls");
		}

//=======================================================================//
//>>>>>>>>>>>>>>>>>>>>>>>>>  Fungsi Untuk Login  <<<<<<<<<<<<<<<<<<<<<<<<//
//=======================================================================//
// Nama Fungsi    : int login()                                          //
// Input Argumen  : char namalengkap[50], char username[20],             //
//                  char password[20]                                    //
// Output Argumen : Pengguna.namalengkap                                 //
// Deskripsi      : Fungsi ini memberi akses masuk ke program ProHealth  //
//                  apabila pengguna sudah berhasil melakukan registrasi //
//                  yang setelahnya diarahkan untuk melakukan login      //
//                  dengan memasukkan username dan password yang telah   //
//                  sebelumnya dibuat saat registrasi.                   //
//                                                                       //
// Versi : 1.1                                        Rev. 1             //
// Tgl   : 21-12-2021                               Tgl: 21-12-21        //
// I Putu Martin Winata - 2105551049                                     //
// Kelas B                                                               //
//                                                                       //
// Revisi: Menambahkan fungsi main untuk memanggil registrasi dan login  //
//=======================================================================//
int login() {
		system("cls");

		printf ("\t\t==LOGIN==\n");
		printf ("\n");
		printf ("\tmasukkan username :");
		scanf ("%s", &inputusername);
		printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);

			/*basis*/
			
			if (strcmp (Pengguna.username, inputusername) == 0 && strcmp (Pengguna.password, inputpassword) == 0 )	
			{
				system ("cls");
		
				printf (" \n\tusername dan password yang anda masukkan benar\n");
		
				printf ("selamat datang %s\n", Pengguna.namalengkap);
				
				system ("pause");
		
				system ("cls");
		
			}
		
			/*rekurens*/
			else {
			
			system ("cls");
		
			printf ("\nusername atau password yang anda masukkan salah\n");

			system ("pause");
			}
	

	}
	
int main() {
		registrasi();
	
		login();
	
		return 0;
		
	}
