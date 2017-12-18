#include<cstdio>
#include<algorithm>
using namespace std;

int Hash[1005];

int main(){
	int n, m,a;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		++Hash[a];
	}
	for(int i = 0; i < 1005; i++){
		if(Hash[i] && Hash[m - i]){
			if(i == m - i && Hash[i] <= 1) continue;
			printf("%d %d\n", i ,(m - i));
			return 0;
		}		
	}
	printf("No Solution\n");
	return 0;
}
