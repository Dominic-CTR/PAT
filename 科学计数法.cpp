#include <cstdio>
#include <cstring>

int main() {
    char str[10010];
	int num = 0;
    int exp = 0;
	gets(str);
    int len = strlen(str);
    if(str[0] == '-') printf("-");    
    while(str[num] != 'E') {
        num++;
    }    
    for(int i = num + 2; i < len; i++) {
        exp = exp * 10 + (str[i] - '0');
    }
    if(exp == 0) {
        for(int i = 1; i < num ; i++) {
            printf("%c", str[i]);
        }
    }
    if(str[num + 1] == '-') {
        printf("0.");
        for(int i = 0; i < exp - 1; i++) {
            printf("0");
        }
        printf("%c", str[1]);
        for(int i = 3; i < num; i++) {
            printf("%c", str[i]);
        }
    } else {
        for(int i = 1; i < num; i++) {
            if(str[i] == '.') continue;
            printf("%c", str[i]);
            if(i == exp + 2 && num - 3 != exp) {
                printf(".");
            }
        }
        for(int i = 0; i < exp - (num - 3); i++) {
            printf("0");
        }
    }
    return 0;
}
