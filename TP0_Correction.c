/*
 ============================================================================
 Name        : TP0_Correction.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
long factorielle_boucle(long n);
long factorielle(long n);
long factorielle_terminale(long n, long  res);
int main(void) {
	long x;
	do {
		printf("Entrer un nombre positif : ");
		scanf("%ld", &x);

	} while (x < 0);
	double deb=clock();
	printf("%ld! = %ld",x,factorielle_terminale(x, 1));
	double fin = clock();
	double temps = (fin-deb);
	printf("temps : %d",temps);
	return EXIT_SUCCESS;
}
long factorielle_boucle(long n){
	long res=1,i;
	for(i=n;i>0;i--)
		res*=i;
	return res;
}
long factorielle(long i){
	if(i==0 || i==1)
		return 1;
	else
		return i*factorielle(i-1);
}

long factorielle_terminale(long i, long res){
	if(i==0 || i==1)
		return res;
	else
		return factorielle_terminale(i-1, res*i);
}
