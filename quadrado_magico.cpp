#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int len, tmp = 0;
    scanf("%d", &len);
    int mat[len][len];
    
    for(int i = 0; i < len; ++i) {
        for (int k = 0; k < len; ++k) {
            scanf("%d", &mat[i][k]);
            tmp += mat[i][k];
        }
    }
    
    tmp /= len;
    
    
    int sumc = 0, suml = 0;
    for (int i = 0; i < len; ++i) {
        for (int k = 0; k < len; ++k) {
            sumc += mat[i][k];
            suml += mat[k][i];
        }
        
        if (sumc != tmp || suml != tmp) {
            printf("-1\n");
            exit(0);
        } else {
            sumc = 0;
            suml = 0;
        }
    }
    
    int sumd = 0, sumo = 0;
    for(int i = 0; i < len; ++i) {
        sumd += mat[i][i];
        sumo += mat[i][len-1-i];
    }
    
    if (sumd != tmp || sumo != tmp) {
        printf("-1\n");
        exit(0);
    }
    
    printf("%d\n", tmp);
    return 0;
}
