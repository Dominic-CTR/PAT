#include<stdio.h>
 
int main(){
    int t;
    double a,b,c;
    scanf("%d" , &t );
    for(int i=1 ;i<=t ;i++ ){
        scanf("%lf %lf %lf" ,&a,&b,&c );
        if(a+b>c)
            printf("Case #%d: true\n",i);
        else
            printf("Case #%d: false\n",i);
    }
    return 0;
}
