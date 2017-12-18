#include <cstdio>
#include <cstring>

int main() {
    char str1[100], str2[100];
    bool Table[128] = {false};
    gets(str1);
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len1; i++) {
        int j;
        char c1, c2;
        for(j = 0; j < len2; j++) {
            //c1 = str1[i];
            //c2 = str2[j];
            if(str1[i] >= 'a' && str1[i] <= 'z') str1[i] -= 32;
            if(str2[j] >= 'a' && str2[j] <= 'z') str2[j] -= 32;
            if(str1[i] == str2[j]) break;
        }
        if(j == len2 && Table[str1[i]] == false) {
            printf("%c", str1[i]);
            Table[str1[i]] = true;
        }
    }
    return 0;
}
