#include<stdio.h>

int x, Teika;
double y, Zei,z,c;
double price(Teika, Zei);//Å‚İ‰¿Ši
int main(void)
{
	x = 100;
	y = 0.0800;
	
	c = price(x,y);

	printf("’è‰¿%d,Å—¦%f,Å‚İ‰¿Ši%f",x,y,c);
	return 0;


}

double price(int Teika,double Zei)//Å‚İ‰¿Ši
{
	z;
	z = Teika * (1+Zei);
	return z;
}

/*
int Teika()//’è‰¿‚Ìˆø”
{

}

int Shouhizei()//Á”ïÅ—¦‚Ìˆø”
{

}
*/