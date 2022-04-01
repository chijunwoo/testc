#include<stdio.h>
main(){
	int i;
	int j;
	float sum=0;
	float hap=0;
	for(j=6;j<=48;j=j+2){
	
		for(i=2;i<=j;i=i+2){
	
		sum=sum+i;
		}
	hap=hap+(j+2)/sum;
	printf("%f, %d\n", hap, j);
	}
}	
