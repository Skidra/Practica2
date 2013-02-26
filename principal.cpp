#include <stdlib.h>
//#include <windows.h>
#include<stdio.h>
#include <windows.h>
int main()
{
	
	int op=0;
	system("cls");
	printf(" ***** M E N U *****\n\n\n");
	printf("Escoje una opcion\n");
	printf("1. Reloj\n");
	printf("2. Cronometro\n");
	printf("3. Salir      ");
	scanf("%d",&op);
	if(op==1){
		system("reloj.exe");
	}
	if(op==2){
		system("Cronometro.exe");
	}
	if(op==3){
		printf("Saliendo\n\n ");
		system("pause");
		printf("\n");
		system("exit");
	}
	
}
