#include<stdio.h>

float Area,Largo,Ancho;

//RECABANDO DATOS//

int main()
{
	printf("\n Dame el Largo: ");
	scanf("%f",&Largo);
	printf("\n Dame el Ancho: ");
	scanf("%f",&Ancho);
	if (Ancho==0 || Largo==0)
	{
		printf("\n Los datos no son validos");
	}
	//Proceso matematico//
	
	else
	{
		if (Ancho==Largo && Ancho>0 && Largo>0)
		{
			printf("\n Los datos indican que se trata de un cuadrado \n ");		
		}
		
		else
		{
			if (Ancho>0 && Largo>0)
			{
				Area=(Ancho*Largo);
				printf("\n El area es: %f \n ",Area);
			}
			
			else
			{
				printf("\n Los datos no son validos");
			}
		}
	}	
}
