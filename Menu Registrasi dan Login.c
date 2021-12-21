#include <stdio.h>	/*input library*/
#include <string.h>

char inputusername [20];	/*variabel global*/
char inputpassword [20];

typedef struct user{
	char namalengkap [50];
	char username [20];
	char password [20];
	} user;

user Pengguna;

	void registrasi(){	/*deklarasi fungsi void*/
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


