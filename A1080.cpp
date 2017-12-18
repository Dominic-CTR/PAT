#include<cstdio>
#include<algorithm>
using namespace std;

struct stu{
	int Ge,Gi,sum;
	int rank,stuID;
	int cho[6];
}st[40010];

struct sch{
	int quota;
	int stunum;
	int id[40010];
	int laststu;
}sc[110];

bool cmpstu(stu a, stu b){
	if(a.sum != b.sum) return a.sum > b.sum;
	else return a.Ge > b.Ge;
}
bool cmpID(int a, int b){
	return st[a].stuID < st[b].stuID;
}

int main(){
	int n,m,k;
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 0; i < m; i++){
		scanf("%d", &sc[i].quota);
		sc[i].stunum = 0;
		sc[i].laststu = -1; 
	}
	for(int i = 0; i < n; i++){
		st[i].stuID = i;
		scanf("%d%d", &st[i].Ge, &st[i].Gi);
		st[i].sum = st[i].Ge + st[i].Gi;
		for(int j = 0; j < k; j++) scanf("%d", &st[i].cho[j]);
	}
	sort(st, st + n, cmpstu);
	for(int i = 0; i < n; i++){
		if(i > 0 && st[i].sum == st[i - 1].sum && st[i].Ge == st[i - 1].Ge) st[i].rank = st[i -1].rank;
		else st[i].rank = i;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			int choice = st[i].cho[j];
			int num = sc[choice].stunum;
			int last = sc[choice].laststu;
			if(num < sc[choice].quota || (last != -1 && st[i].rank == st[last].rank)){
				sc[choice].id[num] = i;
				sc[choice].laststu = i;
				sc[choice].stunum++;
				break;
			}
		}
	}
	for(int i = 0; i < m; i++){
		if(sc[i].stunum > 0){
			sort(sc[i].id, sc[i].id + sc[i].stunum, cmpID);
			for(int j = 0; j < sc[i].stunum; j++){
				printf("%d", st[sc[i].id[j]].stuID);
				if(j < sc[i].stunum - 1) printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
