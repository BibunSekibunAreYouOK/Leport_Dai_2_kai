#include<stdio.h>

int x, Teika;
double y, Zei,z,c;
double price(Teika, Zei);//�ō��݉��i
int main(void)
{
	x = 100;
	y = 0.0800;
	
	c = price(x,y);

	printf("�艿��%d,�ŗ���%f,�ō��݉��i��%f",x,y,c);
	return 0;


}

double price(int Teika,double Zei)//�ō��݉��i
{
	z;
	z = Teika * (1+Zei);
	return z;
}

/*
int Teika()//�艿�̈���
{

}

int Shouhizei()//����ŗ��̈���
{

}
*/