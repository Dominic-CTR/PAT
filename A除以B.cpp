#include<cstdio>
#include<cstring>
using namespace std;

char a[1001],q[1001];
int b,temp,Q = 0,R = 0;
int main(){
	scanf("%s %d",a,&b);
	for(int i = 0;i < strlen(a); i++){
		Q = (R + (a[i] - '0')) / b;
		R = 10 * ((R + (a[i] - '0')) % b);
		if(i == 0 && Q == 0 );
		else
			printf("%d",Q);
	}
	printf(" %d",R/10);
	return 0;
	
} 
