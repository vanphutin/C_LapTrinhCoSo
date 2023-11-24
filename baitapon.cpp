// tinh tong chan tu 1 den n

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int tinh(int n);
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int sum=tinh(n);
	printf("tong chan la: %d",sum);
} 
int tinh(int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		if(i%2==0){
			sum+=i;
		}
	}return sum;
}
