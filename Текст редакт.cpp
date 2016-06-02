#include <stdio.h>
#include <string.h>
#include <windows.h>
int main () 
{
	{
		char s[80], ch;
		int i=0, n=0, k=0;
		FILE *ishod, *gotov;
		ishod = fopen( "Pravilo.txt","r");
		gotov = fopen( "Pravilno.txt","w");
		if ((ishod==NULL)&&(gotov==NULL))
		{
			 printf("Can't open file!\n");
			 system("pause");
			 return 0;
		}
		while ((ch=getc (ishod)) !=EOF)
		{
			if (ch!='.')
			{
				s[i]=ch;
				i++;
			}
			if (ch=='.')
			{
				n=i;
				s[i]='.';
				i=0;
				while (i<=n)
				{
					if (((s[i]=='з')&&(s[i+1]=='м')&&(s[i+2]=='Є'))||((s[i]=='з')&&(s[i+1]=='м')&&(s[i+2]=='­'))||((s[i]=='­')&&(s[i+1]=='м')&&(s[i+2]=='й')))
					{
						putc(s[i], gotov);
						putc(s[i+2], gotov);
						//printf ("%c%c%c\n",s[i],s[i+1],s[i+2]);
						k++;i=i+3;
					}
					else
					{
						putc(s[i], gotov);i++;
					}
				}
				i=0;
			}
		}
        printf("Вывод\n", k);
	}
	system("pause");
}