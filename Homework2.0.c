#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inverse(int T[],int i,int j){
	int x;
	while(i<j){
		x=T[i];
		T[i]=T[j];
		T[j]=x;
		i++;
		j--;
	}
}
int main(int argc, char *argv[]) {
	int T[100];
	int i,n,j,s,f,compteur1,compteur2;
	do {
		printf("enter the lenght of the array \n");
		scanf("%d", &n);
	}while((n<0)|| (n>=100));
	for(i=0;i<n;i++){
		printf("enter the element number %d of the array \n", i);
		scanf("%d", &T[i]);
	}
	compteur1=0;
	compteur2=0;
	s=0;
	f=0;
	i=0;
	while(s<n){
		while(T[i]<T[i+1] && i<n){
			compteur1++;
			i++;
		}
		if(compteur1>compteur2){
			compteur2=compteur1;
			f=s;
		}
		i++;
		s=i;
		compteur1=0;
	}
	j=f+compteur2;
	inverse(T,f,j);
	for(i=0;i<n;i++){
		printf("\n %d", T[i]);
	}
	return 0;
}

