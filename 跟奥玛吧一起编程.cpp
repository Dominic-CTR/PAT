#include <cstdio>
#include<cstring>
int main(){
	int n;
	char a;
	scanf("%d %c",&n,&a);
	for(int i = 0; i < n; i++) printf("%c",a);
	printf("\n");
	int row;
	if(n % 2)
		row = n /2 + 1;
	else
		row = n /2;
	for(int i = 0; i < row -2; i++) {
		for(int j = 0; j < n; j++){
			if(j == 0 || j == n -1) printf("%c",a);
			else printf(" ");
		}
		printf("\n");
	}
	for(int i = 0; i < n; i++) printf("%c",a);
	return 0;
}
