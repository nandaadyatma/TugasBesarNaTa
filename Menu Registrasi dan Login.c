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
	
	int main(){
		registrasi();
		
		login();
		
		return 0;
		
	}