#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char a='a';char b='b';char c='c';char d='d';char e='e';char f='f';char g='g';char h='h';char i='i';int x=0;char val;
void box()
{
	clrscr();
	cout<<"      |      |      |\n";
    cout<<"  "<<a<<"   |  "<<b<<"   |  "<<c<<"   |\n";
    cout<<"      |      |      |\n";
    cout<<"------|------|------|\n";
    cout<<"      |      |      |\n";
    cout<<"  "<<d<<"   |  "<<e<<"   |  "<<f<<"   |\n";
    cout<<"      |      |      |\n";
    cout<<"------|------|------|\n";
    cout<<"      |      |      |\n";
    cout<<"  "<<g<<"   |  "<<h<<"   |  "<<i<<"   |\n";
    cout<<"      |      |      |\n";
}
void play()
{
	if((x%2)==0)
	{
		cout<<"Player X Please enter your choice : ";
		cin>>val;
		x++;
	}
	else
	{
		cout<<"Player O Please enter your choice : ";
		cin>>val;
		x++;
	}
}
void change_val()
{
	if((x%2)==0)
	{
		switch(val)
		{
			case 'a' : a='O';
			           break;
			case 'b' : b='O';
			           break;
			case 'c' : c='O';
			           break;
			case 'd' : d='O';
			           break;
			case 'e' : e='O';
			           break;
			case 'f' : f='O';
			           break;
			case 'g' : g='O';
			           break;
			case 'h' : h='O';
			           break;
			case 'i' : i='O';
			           break;
		};		
	}
	else
	{
		switch(val)
		{
			case 'a' : a='x';
			           break;
			case 'b' : b='x';
			           break;
			case 'c' : c='x';
			           break;
			case 'd' : d='x';
			           break;
			case 'e' : e='x';
			           break;
			case 'f' : f='x';
			           break;
			case 'g' : g='x';
			           break;
			case 'h' : h='x';
			           break;
			case 'i' : i='x';
			           break;
		};
	}
}
int check_win()
{
	if((a=='x'&&b=='x'&&c=='x')||(a=='x'&&d=='x'&&g=='x')||(a=='x'&&e=='x'&&i=='x'))
	{
		return 1;
	}
	else if(b=='x'&&e=='x'&&h=='x')
	{
		return 1;
	}
	else if(c=='x'&&f=='x'&&i=='x')
	{
		return 1;
	}
	else if(d=='x'&&e=='x'&&f=='x')
	{
		return 1;
	}
	else if(g=='x'&&h=='x'&&i=='x'||g=='x'&&e=='x'&&c=='x')
	{
		return 1;
	}
	else if((a=='O'&&b=='O'&&c=='O')||(a=='O'&&d=='O'&&g=='O')||(a=='O'&&e=='O'&&i=='O'))
	{
		return 2;
	}
	else if(b=='O'&&e=='O'&&h=='O')
	{
		return 2;
	}
	else if(c=='O'&&f=='O'&&i=='0')
	{
		return 2;
	}
	else if(d=='0'&&e=='O'&&f=='O')
	{
		return 2;
	}
	else if(g=='O'&&h=='O'&&i=='O'||g=='O'&&e=='O'&&c=='O')
	{
		return 2;
	}
	else
		return 0;
}
int main()
{
	int sec=0;
	char con;
	start :
	box();
	play();
	change_val();
	sec=check_win();
	if(sec==1)
	{
		box();
		printf("Player X has won the match\n");
		printf("do you want to play again(Y/N) : ");
		cin>>con;
		if(con=='y'||con=='Y')
		{
			a='a';b='b';c='c';d='d';e='e';f='f';g='g';h='h';i='i';x=0;sec=0;
			goto start;
		}
		else
			return 0;
	}
	else if(sec==2)
	{
		box();
		printf("Player O has won the match\n");
		printf("do you want to play again(Y/N) : ");
		cin>>con;
		if(con=='y'||con=='Y')
		{
			a='a';b='b';c='c';d='d';e='e';f='f';g='g';h='h';i='i';x=0;sec=0;
			goto start;
		}
		else
			return 0;
	}
	goto start;
}
