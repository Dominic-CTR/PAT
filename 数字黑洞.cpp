#include<cstdio>

using namespace std;

int N,Nre,temp,num[4];

int main(){
	scanf("%d",&N);
	while(1){
		for(int i = 0; i < 4; i++){
			num[i] = N % 10;
			N /= 10;
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3 -i; j++){
				if(num[j] < num[j +1]){
					temp = num[j];
					num[j] = num[j +1];
					num[j +1] = temp;
				}		
			}
		}
		N = num[0] * 1000 + num[1] * 100 + num[2] * 10 + num[3];
		Nre = num[3] * 1000 + num[2] * 100 + num[1] * 10 + num[0];
		if(N == Nre){
			printf("%04d - %04d = %04d",N,Nre,N-Nre);
			break;
		}		
		else if((N-Nre) == 6174){
			printf("%04d - %04d = %04d",N,Nre,N-Nre);
			break;
		}			
		else
			printf("%04d - %04d = %04d\n",N,Nre,N-Nre);
		N = N - Nre;
	}
	return 0;
}


