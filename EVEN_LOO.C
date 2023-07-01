#include<stdio.h>
#include<conio.h>
void main()
{        int i=1,n;
	 clrscr();



	 printf("Enter a value :");
	 scanf("%d",&n);
	 while(i<=n)
	 {
	 if(i%2==0)
	 {
		printf("%d\t",i);
	 }
		i++;
	 }
	 getch();
}
