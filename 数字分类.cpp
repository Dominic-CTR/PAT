#include <iostream>

int main(){
	int t,num,a1=0,a2=0,a3=0,a5=0,flag=1,count=0;
	float a4;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d", &num);
		switch(num%5){	
			case 0:if(!(num%2)) a1+=num;break;
			case 1:a2+=flag*num;flag=-flag;break;
			case 2:a3++;break;
			case 3:a4+=num;count++;break;
			case 4:a5=(a5>num)?a5:num;break;
		}
		
	}
	if(a1)
		printf("%d ",a1);
	else
		printf("N ");
	if(a2)
		printf("%d ",a2);
	else
		printf("N ");
	if(a3)
		printf("%d ",a3);
	else
		printf("N ");
	if(a4>0)
		printf("%.1f ",(a4/count));
	else
		printf("N ");
	if(a5)
		printf("%d",a5);
	else
		printf("N");
	return 0;
}
