#include<cstdio>

int main(){
	double p[1111] = {};
	int k, n, count = 0;
	double a;
	scanf("%d", &k);
	for(int i = 0;i < k; i++){
		scanf("%d %lf", &n, &a);
		p[n] += a; 
	}
	scanf("%d", &k);
	for(int i = 0;i < k; i++){
		scanf("%d %lf", &n, &a);
		p[n] += a; 
	}
	for(int i = 0;i < 1111; i++){
		if(p[i] != 0) count++;
	}
	printf("%d", count);
	for(int i = 1110; i >= 0; i--){
		if(p[i] != 0) printf(" %d %.1f", i, p[i]);
	}
	return 0;
}
