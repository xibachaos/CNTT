#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop *///

int main(int argc, char *argv[]) {
	int thanhtien, thanhtien1,thanhtien2,km;
	int gia1 = 15000;
	int gia2 = 13500;
	printf("So Km di duoc: "); scanf("%d", &km);
	if (km <=1)
	{thanhtien=(km*gia1);
	printf("So tien can phai tra duoi 1km la: %d", thanhtien);}
	else
	{	 
	if((km > 1)&&(km<120))
	{thanhtien1=(gia1+(km-1)*gia2);
	printf("So tien can phai tra tren 2km la: %d", thanhtien1);}
	else
	{thanhtien2=(gia1+(km-1)*gia2)*0.9;{
	printf("So tien can phai tra tren 100km la: %d", thanhtien2);}

	return 0;
}
}
}
