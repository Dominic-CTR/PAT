#include<cstdio>

using namespace std;

char a[4][70];

char date[7][10] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
int main(){
	int i = 0,j = 0,day = 0,hours = 0,minutes = 0;
	scanf("%s%s%s%s",a[0],a[1],a[2],a[3]);
	while(i<60){
		if((a[0][i] >= 'A' && a[0][i] <= 'G' && a[0][i] == a[1][i])) break;
		i++;
	}
	day = a[0][i] - 'A';
	i++;
	while(i<60){
		if(a[0][i] == a[1][i]) break;
		i++;
	}
	if(a[0][i] >= '0' && a[0][i] <= '9')
		hours = a[0][i] - '0';
	else if(a[0][i] >= 'A' && a[0][i] <= 'N')
		hours = a[0][i] - 'A' + 10;
	
	while(j<60){
		if(a[2][j] == a[3][j] && ((a[2][j] >= 'a' && a[3][j] <= 'z') || a[2][j] >= 'A' && a[3][j] <= 'Z')) break;
		j++;
	}
	minutes = j;
	
	
	printf("%s %02d:%02d",date[day],hours ,minutes );
	return 0; 
}
