#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
#include <windows.h>

int main()
{
	system("title Reloj ");
	int hora, minuto, segundo, constante=30,salir;
	while(constante>0)
	{
		//hora=minuto=segundo=0;
		printf("Introduce la hora: ");
			scanf("%d",&hora);
			if(hora>23){
				printf("ERROR\n");
				return 0;
			}
			printf("Introduce los minutos: ");
			scanf("%d",&minuto);
			if(minuto>59){
				printf("ERROR\n");
				return 0;
			}
			printf("Introduce los segundos: ");
			scanf("%d",&segundo);
			if(segundo>59){
				printf("ERROR\n");
				return 0;
			}
			while(constante>0)
			{
				while( !kbhit() )
				{
				system("cls");
				printf("Presione una tecla para detener\n\n");
				printf("%02d : %02d : %02d ",hora,minuto,segundo);
				segundo++;
				segundo=segundo;
				if(segundo == 60)
				{
					minuto++;
					segundo=0;
				if(minuto==60)
					{
						hora++;
						minuto=0;
						if(hora>23)
						{
							hora=0;
						}
					}
				}
				
				Sleep(1000);
			}
				printf("\n\n**MENU**\n");	
				printf("1. Salir");
				printf("\n2. Menu Principal  ");
				printf(" ");
				scanf("%d",&salir);
				if(salir==1){
					constante=0;
					printf("\nSaliendo\n\n");
					system("pause");
					printf(" ");
					system("exit");
				}
				if(salir==2){
					constante=0;
					system("principal.exe");
				}
		}
		
	}
}
