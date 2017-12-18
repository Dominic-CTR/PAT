#include<cstdio>

using namespace std;

int n,equl = 0,win[3] = {0},lose[3] = {0};
char a,b;  
int main(){
	scanf("%d",&n);
	for(int i = 0 ; i < n ;i++){
		scanf("%s %s",&a,&b);
		if(a == b) equl++;
		if(a == 'J' && b == 'B') 
			win[0]++;
		else if(a == 'J' && b == 'C') 
			lose[1]++;
		if(a == 'C' && b == 'J') 
			win[1]++;
		else if(a == 'C' && b == 'B') 
			lose[2]++;
		if(a == 'B' && b == 'C') 
			win[2]++;		
		else if(a == 'B' && b == 'J') 
			lose[0]++;
	}
	printf("%d %d %d\n",(win[0] + win[1] + win[2]), equl , (n - equl - (win[0] + win[1] + win[2])));
	printf("%d %d %d\n",(n - equl - (win[0] + win[1] + win[2])), equl , (win[0] + win[1] + win[2]));
	if(win[0] > win[1] && win[0] > win[2])
		printf("J ");
	else if(win[1] > win[2])
		printf("C ");
	else
		printf("B ");
	if(lose[0] > lose[1] && lose[0] > lose[2])
		printf("J");
	else if(lose[1] > lose[2])
		printf("C");
	else 
		printf("B");
	return 0;
}
