#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop *///

int main(int argc, char *argv[]) {
int thang;
printf ("Nhap so thang: ");
 scanf("%d", &thang);
switch (thang){
	case 1: case 2: case 3: printf ("Mua Xuan"); break;
	case 4: case 5: case 6: printf ("Mua Ha"); break;
	case 7: case 8: case 9: printf ("Mua Thu"); break;
	case 10: case 11: case 12: printf ("Mua Dong"); break;
	default: printf ("Thang nay khong co trong nam");
} 

	return 0;
}
