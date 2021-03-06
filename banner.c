/*
	author->maddy
	version:2.0
	email:neerajlakhotia08@gmail.com
	fb	 :www.facebook.com/neeraj.lakhotia08
	quora:www.quora.com/Neeraj-Lakhotia
	git: www.github.com/neeraj08

	program: This prints the input string consisting of multiple words in n no. of lines.
	Its somewhat similar to the banner command in linux.

	Differences with linux banner command:
		1.it can print string in n no. of lines  where user implicitly decides value of n in code unlinke banner command
		2.A particular char is printed with that char by default.This can easily be modified in code as A(i,n,'B') or A(i,n,'C')  
		3.it has support for printing more than 8 chars and printing in multiple lines when one gets filled
*/
#include <stdio.h>
//prototypes for functions to  print ith line of char c such that c is displayed in n lines..eg A(i,n,'A')
void A(int,int,char);
void B(int,int,char);
void C(int,int,char);
void D(int,int,char);
void E(int,int,char);
void F(int,int,char);
void G(int,int,char);
void H(int,int,char);
void J(int,int,char);
void I(int,int,char);
void K(int,int,char);
void L(int,int,char);
void M(int,int,char);
void N(int,int,char);
void O(int,int,char);
void P(int,int,char);
void Q(int,int,char);
void R(int,int,char);
void S(int,int,char);
void T(int,int,char);
void U(int,int,char);
void V(int,int,char);
void W(int,int,char);
void X(int,int,char);
void Y(int,int,char);
void Z(int,int,char);
void _(int,int,char);
void space(int);

int main(int argc,char *argv[])
{
	//n ->font size
	int n=12,i,pos,pos2=-1,cnt=0,cnt2=-10,flag=1;
	char str[100];
	if(argc>1)//if string given as command line argument
	for(i=1;i<argc;i++)
	{
		pos=-1;
		while((str[++pos2]=argv[i][++pos])!='\0');
		if(i!=argc-1)
		str[pos2]=' ';
	}
	else	//else ask for input
	{
		printf("Enter string\n");
		gets(str);
	}
	//printf("Enter font size\n");
	//scanf("%d",&n);
	while(putchar('\n'),cnt2+=10,str[cnt]!='\0')
	for(i=1;i<=n;i++)
	{
		cnt=cnt2;
		//omit starting spaces at beginning of a line
		while(str[cnt]==' ')cnt++;
		
		for(;cnt<cnt2+10 && str[cnt]!='\0';cnt++)	
		switch(str[cnt])
		{
			//each such function A(i,n,'A') is responsible for printing i'th line of letter that will appear full when n lines are print
			//the letter will be printed via char passed as third argument to function
			case 'a':case 'A':A(i,n,'A');printf("  ");break; 
			case 'b':case 'B':B(i,n,'B');printf("  ");break;
			case 'c':case 'C':C(i,n,'C');printf("  ");break;
			case 'd':case 'D':D(i,n,'D');printf("  ");break;
			case 'e':case 'E':E(i,n,'E');printf("  ");break;
			case 'f':case 'F':F(i,n,'F');printf("  ");break;
			case 'g':case 'G':G(i,n,'G');printf("  ");break;
			case 'h':case 'H':H(i,n,'H');printf("  ");break;
			case 'i':case 'I':I(i,n,'I');printf("  ");break;
			case 'j':case 'J':J(i,n,'J');printf("  ");break;
			case 'k':case 'K':K(i,n,'K');printf("  ");break;
			case 'l':case 'L':L(i,n,'L');printf("  ");break;
			case 'm':case 'M':M(i,n,'M');printf("  ");break;
			case 'n':case 'N':N(i,n,'N');printf("  ");break;
			case 'o':case 'O':O(i,n,'O');printf("  ");break;
			case 'p':case 'P':P(i,n,'P');printf("  ");break;
			case 'q':case 'Q':Q(i,n,'Q');printf("  ");break;
			case 'r':case 'R':R(i,n,'R');printf("  ");break;
			case 's':case 'S':S(i,n,'S');printf("  ");break;
			case 'u':case 'U':U(i,n,'U');printf("  ");break;
			case 't':case 'T':T(i,n,'T');printf("  ");break;
			case 'v':case 'V':V(i,n,'V');printf("  ");break;
			case 'x':case 'X':X(i,n,'X');printf("  ");break;
			case 'w':case 'W':W(i,n,'W');printf("  ");break;
			case 'y':case 'Y':Y(i,n,'Y');printf("  ");break;
			case 'z':case 'Z':Z(i,n,'Z');printf("  ");break;
			case '_':_(i,n,'_');printf("  ");break;
			default:space(n);printf("  ");break;
			
			
		}//while and switch ends
		printf("\b\b\n");
	}
	return 0;
}
void N(int i,int n,char c)
{
	int j;
	putchar(c);
	for(j=3;j<=i;j++)
	printf(" ");
	if(i!=1&&i!=n)
	putchar(c);
	for(j=n-i;j>=2;j--)
	printf(" ");
	putchar(c);
}

void E(int i,int n,char c)
{
	int j;
	putchar(c);
	for(j=2;j<=n;j++)
	if(i==1||i==n||i==n/2)
	putchar(c);
	else
	printf(" ");
}
void R(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i<=n/2)
	{
		for(j=2;j<=n-1;j++)
		if(i==1||i==n/2)
		putchar(c);
		else 
		printf(" ");
		putchar(c);
	}
	else
	{
		for(j=1;j<=(2*(i-1)-n);j++)
		printf(" ");
		putchar(c);
		for(j=(n-2)-2*i+(n+2);j>=1;j--) 
		printf(" ");
	}
}


void A(int i,int n,char c)
{
	int j;
	putchar(c);
	for(j=2;j<n;j++)
	if(i==1||i==n/2)
	putchar(c);
	else
	printf(" ");
	putchar(c);
}
void J(int i,int n,char c)
{
	int j;
	if(i==1 || i>=n/2)
	putchar(c);
	else printf(" ");
	for(j=2;j<n/2;j++)
	if(i==1||i==n)
	putchar(c);
	else
	printf(" ");
	putchar(c);
	for(j=n/2+1;j<=n;j++)
	if(i==1)
	printf("J");
	else
	printf(" ");
}

void P(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i<=n/2)
	{
		for(j=2;j<=n-1;j++)
		if(i==1||i==n/2)
		putchar(c);
		else 
		printf(" ");
		putchar(c);
	}
	else
	{
		for(j=1;j<n;j++)
		printf(" ");
	}
}

void B(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i<=n/2)
	{
		for(j=2;j<=n-n/4;j++)
		if(i==1||i==n/2)
		putchar(c);
		else 
		printf(" ");
		putchar(c);
		if(i!=n/2)
		for(j=1;j<=n/4-1;j++)
		printf(" ");
		else
		for(j=1;j<=n/4-1;j++)
		putchar(c);
	}
	else
	{
		if(i<n)
		{
			for(j=1;j<n-1;j++)
			printf(" ");
		}
		else
		for(j=1;j<n-1;j++)
		putchar(c);
		putchar(c);
	}
}


void C(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==1 || i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else 
	for(j=2;j<n;j++)
	printf(" ");
}

void F(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==1||i==n/2)
	for(j=2;j<n;j++)
	putchar(c);
	else 
	for(j=2;j<n;j++)
	printf(" ");
}


void G(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i<=n/2)
	{
		if(i==1)
		for(j=2;j<=n;j++)
		putchar(c);
		else
		{
			for(j=2;j<n;j++)
			putchar(' ');
			if(i<=n/4)		
			putchar(c);
			else
			putchar(' ');
			
		}
	}
	else
	{
		if(i<n)
		{
			for(j=2;j<=n/2;j++)
			putchar(' ');
			if(i==n/2+1)
			{
				for(j=n/2+1;j<n;j++)
				putchar(c);
			}
			else
			{
				for(j=n/2+1;j<n;j++)
				putchar(' ');
			}
			putchar(c);
		}
		else
		for(j=2;j<=n;j++)
		putchar(c);
	}
}

void I(int i,int n,char c)
{
	int j;
	if(i==1 || i==n)
	for(j=1;j<=n;j++)
	putchar(c);
	else
	{
		for(j=1;j<n/2;j++)
		printf(" ");
		putchar(c);
		for(j=n/2+1;j<=n;j++)
		printf(" ");
	}
}

void L(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else 
	for(j=2;j<n;j++)
	printf(" ");
}

void T(int i,int n,char c)
{
	int j;
	if(i==1)
	for(j=1;j<=n;j++)
	putchar(c);
	else
	{
		for(j=1;j<n/2;j++)
		printf(" ");
		putchar(c);
		for(j=n/2+1;j<=n;j++)
		printf(" ");
	}
}

void H(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==n/2)
	for(j=2;j<n;j++)
	putchar(c);
	else
	for(j=2;j<n;j++)
	printf(" ");
	putchar(c);
}

void U(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else
	for(j=2;j<n;j++)
	printf(" ");
	putchar(c);
}

void O(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==1 || i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else
	for(j=2;j<n;j++)
	printf(" ");
	putchar(c);
}

void Q(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==1 || i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else
	if(i<=n/2)
	for(j=2;j<n;j++)
	putchar(' ');
	else
	for(j=2;j<n;j++)
	if(i==j)
	putchar(c);
	else
	putchar(' ');
	putchar(c);
}


void S(int i,int n,char c)
{
	int j;
	if(i<=n/2 || i==n)
	putchar(c);
	else printf(" ");
	
	if(i==1 ||i==n/2 ||i==n)
	for(j=2;j<n;j++)
	putchar(c);
	else
	for(j=2;j<n;j++)
	printf(" ");
	
	if(i<n/2 && i>1)
	printf(" ");
	else putchar(c);
}

void Z(int i,int n,char c)
{
	int j;
	if(i==1 ||i==n)
	for(j=1;j<=n;j++)
	putchar(c);
	else
	{
		for(j=i;j<n;j++)
		printf(" ");
		putchar(c);
		for(j=1;j<i;j++)
		printf(" ");
	}
}

void X(int i,int n,char c)
{
	int j;
	for(j=1;j<=n;j++)
	if(i+j==n+1 ||i==j)
	putchar(c);
	else printf(" ");
}

void Y(int i,int n,char c)
{
	int j;
	for(j=1;j<=n;j++)
	if(i+j==n+1 ||(i==j && i<=n/2))
	putchar(c);
	else printf(" ");
}

void K(int i,int n,char c)
{
	int j;
	putchar(c);
	for(j=2;j<=n;j++)
	if(2*i==n+2-j ||2*i==j+n)
	putchar(c);
	else printf(" ");
}

void V(int i,int n,char c)
{
	int j;
	for(j=1;j<=n;j++)
	if(((i+1)/2)*2==2*j || i/2*2==2*n-2*j)
	putchar(c);
	else printf(" ");
}

void space(int n)
{
	int j;
	for(j=1;j<n-1;j++)
	printf(" ");
}

void _(int i,int n,char c)
{
	int j;
	if(i==n)
	for(j=1;j<=n;j++)
	putchar(c);
	else
	for(j=1;j<=n;j++)
	printf(" ");
}

void D(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i==1||i==n)
	for(j=2;j<=n/2;j++)
	putchar(c);
	else
	for(j=2;j<=n/2;j++)
	putchar(' ');
	for(j=n/2+1;j<=n;j++)
	if(i==j-n/2 || i+j==n+n/2+1)
	putchar(c);
	else
	putchar(' ');
}

void M(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i<=n/2)
	{
		for(j=2;j<n;j++)
		if(i==j||i+j==n+1)
		putchar(c);
		else
		putchar(' ');
		
	}
	else
	for(j=2;j<n;j++)
	putchar(' ');
	putchar(c);
}

void W(int i,int n,char c)
{
	int j;
	putchar(c);
	if(i>n/2)
	{
		for(j=2;j<n;j++)
		if(i==j||i+j==n+1)
		putchar(c);
		else
		putchar(' ');
		
	}
	else
	for(j=2;j<n;j++)
	putchar(' ');
	putchar(c);
}
