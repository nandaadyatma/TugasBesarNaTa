#include <stdio.h>

void membaca_catatan_kalori();

int main()
{
    membaca_catatan_kalori();

    return 0;
}
void membaca_catatan_kalori() {
	char data[50];
    int i=1;
    FILE *fp;

    fp=fopen("catatan_kalori.txt", "r");
	
		printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
		printf ("\t\t\t\t|                  C A T A T A N   K A L O R I                  | \n");  
    	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    	printf ("\t\t\t\t%c%c=============================================================%c%c \n\n",219,220,220,219);
	
    while(fgets(data,50,fp)!=NULL) //membaca dan mengulang sampai data habis
    {
        printf("\t\t\t\t|%s", data);
        i++;
    }
    fclose(fp);
}

