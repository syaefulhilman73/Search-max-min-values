#include<stdio.h>

int b(int max, int bil)
{int y=bil>max;
return(y);
}
void main()
{
int n,i,max,min,bil;
printf(" Program Mencari Nilai Maksimum dan Minimum\n");
printf("\n Masukkan Banyak Data =  ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("\n Masukkan Bilangan Ke-%d = ",i);
scanf("%d",&bil);
if(b(max,bil))
max=bil;
}
printf("\n Nilai Maksimum nya adalah %d\n",max);
getch();
}
