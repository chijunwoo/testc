#include <stdio.h>
main(){
	int i;
	float sum=0;
	for(i=2;i<=10;i=i+1) {
		sum=sum+(i+3.0)/(i*(i+1));
		printf("%f %d\n",sum,i);
	}

}

