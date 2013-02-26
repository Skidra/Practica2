#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	system("title Cronometro ");
	char salir;
	int h, m, s,ml, constante=30;
	h=m=s=ml=0;
	while(constante>0)
	{
		while( !kbhit() )
		{
			system("cls");
			printf("Presione una tecla para detener\n\n");
			printf("%02d : %02d : %02d :%02d",h,m,s,ml); 
			ml++;
		
			if (ml == 18) 
			{
				s++;
				ml= 0;
			}
			if(s == 60)
			{
				m++;
				s=0;
				if(m==60)
				{
					h++;
					m=0;
					if(h>23)
					{
						h=0;
					}
				}
			}
			Sleep(20);
		}
		
		printf("\nDesea Salir?? Presione S=si N=no\n");
		printf("Desea reiniciar el proceso? Presione R\n");
		printf("Desea regresar al menu? Presione M    ");
		scanf("%s",&salir);
		if(salir=='s'){
			constante=0;
			printf("\nSaliendo\n\n");
			system("pause");
		}else{
			constante=1;
		}
		if(salir=='r') {
			h=m=s=0;
			constante=1;			
		}	
		if(salir=='m'){
			constante=0;
			system("principal.exe");
		}
	}	
}
