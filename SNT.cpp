//KIEM TRA SO NGUYEN TO

#include <stdio.h>
#include <math.h>

int snt(int n);
int main(){
	int n;
	printf("nhap n de liet ke cac snt ");
	scanf("%d",&n);
	printf("cac so nguyen to la: ");
	for(int i=2;i<=n-1;i++){
		if(snt(i)==1){
			printf("%d  ",i);
		}
	}
}

int snt(int n){
	if(n<2){
		return 0;
	} if(n==2){
		return 1;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return 1;
}
