# Leport_Dai_2_kai
//改良版
#include<stdio.h>

int x, Teika;
double y, Zei, z, c;
double price(Teika, Zei);//税込み価格
int main(void)
{
	x;
	y;

	printf("xとyの値を入力せよ:");
	fflush(stdout);
	scanf_s("%ld, %lf", &x, &y);
	printf("入力データは　x=%d y=%f\n", x, y);

	c = price(x, y);

	printf("税込み価格＝%f", c);
	return 0;


}


double price(int Teika, double Zei)//税込み価格
{
	z;
	z = Teika * (1 + Zei);
	return z;
}

