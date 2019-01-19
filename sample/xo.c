 #include<stdio.h>
#include<windows.h>
void gotoxy(short x, short y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("x");
}
void gotoxyz(short x, short y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	
}
void x()
{
	printf("x");
}
void dash()
{
	printf("---------------");
}
void space()
{
	printf(" ");
}
void line()
{
	int i;
	for(i=0;i<3;i++)
	{
		space();
		if(i<2)
		{
		dash();
		}	
	}
	
}
void vline()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf(".\t\t.\t\t.");
		printf("\n");
		
	}
}
void box()
{
int i;
	for(i=0;i<3;i++)
	{
		
		line();
		if(i<2)
		{
		vline();
		}
	}
}
void data(char v[])
{
	int i;
	for(i=0;i<3;i++)
	{
	if(v[i]=='7')
	{
	gotoxy(0,0);
	}
	else if(v[i]=='8')
	{
	gotoxy(16,0);
	}
	else if(v[i]=='9')
	{
	gotoxy(32,0);
	}
	else if(v[i]=='4')
	{
	gotoxy(0,10);
	}
	else if(v[i]=='5')
	{
	gotoxy(16,10);
	}
	else if(v[i]=='6')
	{
	gotoxy(32,10);
	}
	else if(v[i]=='1')
	{
	gotoxy(0,20);
	}
	else if(v[i]=='2')
	{
	gotoxy(16,20);
	}
	else if(v[i]=='3')
	{
	gotoxy(32,20);
	}
	}
}
void game()
{

	box();
	
}
void main()
{
	int i;
	char v[10];
	for(i=0;i<3;i++)
	{
	scanf("%c",&v[i]);
	}
	system("cls");
	game();
	data(*v);
	gotoxyz(50,50);
	
}

