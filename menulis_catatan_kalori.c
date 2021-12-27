#include <stdio.h>
#include <time.h>

int kalori;
	
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

int main() {
	
	menulis_kalori();
	
	return 0;
}
