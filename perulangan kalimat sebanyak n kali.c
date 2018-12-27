/* Oleh Muhammad Dicky Garcia
STT PELITA BANGSA */
#include<stdio.h>

int perulangan (int n);
int main (void)
{
int n;
printf("PROGRAM PERULANGAN KALIMAT SEBANYAK (n) KALI\n\n");
printf("Masukan Nilai (n) : ");
scanf("%d",&n);
perulangan(n);
getchar ();
}
int perulangan(int n)
{
int i;
for(i=1;i<=n;i++)
printf("Algoritma dan Pemrograman\n");
return (i);
}
