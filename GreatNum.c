#include<stdio.h>
#include<stdlib.h>

int main()
{	
	float PrimerNum,SegundoNum,TercerNum;

	printf("\n Dame primer numero:");
	scanf("%f",&PrimerNum);

	printf("\n Dame segundo numero:");
	scanf("%f",&SegundoNum);

	printf("\n Dame tercer numero:");
	scanf("%f",&TercerNum);

	if (PrimerNum==SegundoNum && SegundoNum==TercerNum)
	{
		printf("\n los numeros son iguales");
		exit(-1);
	}

if(TercerNum>SegundoNum&&SegundoNum>PrimerNum) printf("\n El numero mas grande es: %f \n " ,TercerNum);

else if(PrimerNum>SegundoNum&&SegundoNum>TercerNum)printf("\n El numero mas grande es: %f \n",PrimerNum);

else if(PrimerNum>SegundoNum&&TercerNum>PrimerNum)printf("\n El numero mas grande es: %f \n",TercerNum);

else if(PrimerNum>TercerNum&&TercerNum>SegundoNum)printf("\n El numero mas grande es: %f \n",PrimerNum);

else if(SegundoNum>TercerNum&&SegundoNum>PrimerNum&&PrimerNum>TercerNum)printf("\n El numero mas grande es: %f \n",SegundoNum);

else printf("\n El numero mas grande es: %f " ,);

}
