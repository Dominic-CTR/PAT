#include<cstdio>

using namespace std;

int a,da,b,db,pa = 0,pb= 0;

int main(){
	scanf("%d %d %d %d",&a,&da,&b,&db);
	for(int i = 1; i <= 10; i++){
		if(a % 10 == da)
			pa = pa * 10 + da ;
		a /= 10;  
	}
	for(int i = 1; i <= 10; i++){
		if(b % 10 == db)
			pb = pb * 10 + db ;
		b /= 10;  
	}
	printf("%d",pa + pb);
	return 0;
}
