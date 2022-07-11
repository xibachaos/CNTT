#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int thang, nam;
	printf ("Nhap so thang trong nam: "); scanf ("%d", &thang);
	printf ("Nhap so nam: "); scanf ("%d", &nam);
	
	switch (thang){
	
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf ("Thang nay co 31 ngay"); break;
		case 4: case 6: case 9: case 11: printf ("Thang nay co 30 ngay"); break;
		case 2: if (nam%400==0 || nam%4==0 && nam%100!=0)
		printf ("Thang nay co 29 ngay");
		else
		printf ("Thang nay co 28 ngay");break;
		
	default: printf ("Mot nam chi co 12 thang, tu thang 1 den thang 12");
	}
	system("pause")
	return 0;
}
