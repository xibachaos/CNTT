#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float so1, so2, ketqua;
	char pheptoan;

	printf ("Nhap so thu nhat: "); scanf("%f", &so1);
	printf ("Nhap so thu hai: "); scanf("%f", &so2);
	fflush(stdin);
	printf ("Chon phep tinh: "); scanf("%c", &pheptoan);
	
	switch (pheptoan){
		case '+': ketqua = so1 + so2; break;
		case '-': ketqua = so1 - so2; break;
		case '*': ketqua = so1 * so2; break;
		case '/': if (so2 !=0){ketqua = so1/so2;} break;
	default: printf ("\nToan tu khong hop le\n");
	}
	printf ("Ket qua: %f %c %f = %f", so1, pheptoan, so2, ketqua);
	return 0;
}
