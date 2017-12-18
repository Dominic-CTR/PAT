#include<cstdio>
#include<map>
#include<cstring>
#include<iostream>



int main(){
	double a = 0, b = 0, c = 0,temp;
	char s[10];
	char num[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int k;
	scanf("%d",&k);
	for(int i = 0; i < k; i++){
		scanf("%s",&s);
		for(int j = 0; j < 10; j++){
			if(!strcmp(s,num[j])) {
				a = a*10 + j;
				break;
			} 
		}
	}
	scanf("%d",&k);
	for(int i = 0; i < k; i++){
		scanf("%s",&s);
		for(int j = 0; j < 10; j++){
			if(!strcmp(s,num[j])) {
				b = b*10 + j;
				break;
			} 
		}
	}
	scanf("%d",&k);
	for(int i = 0; i < k; i++){
		scanf("%s",&s);
		for(int j = 0; j < 10; j++){
			if(!strcmp(s,num[j])) {
				c = c*10 + j;
				break;
			} 
		}
	}
	
	if((a + b) > c && (b + c) > a && (a + c) > b) printf("YES");
	else printf("NO");
	return 0;
}


