#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_EXPR_SIZE 100

int main() {
    char expr[MAX_EXPR_SIZE];
    char vars[MAX_EXPR_SIZE];
    char result[MAX_EXPR_SIZE];
    int i, j, k;
    int len, len_vars;
    int value = 0;
    int flag = 0;

    printf("Digite a expressão booleana: ");
    scanf("%[^\n]", expr);
    getchar();

    len = strlen(expr);
    len_vars = 0;

    for (i = 0; i < len; i++) {
        if (isalpha(expr[i])) {
            flag = 0;
            for (j = 0; j < len_vars; j++) {
                if (vars[j] == expr[i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                vars[len_vars] = expr[i];
                len_vars++;
            }
        }
    }

    for (i = 0; i < (1 << len_vars); i++) {
        for (j = 0; j < len_vars; j++) {
            value = (i >> j) & 1;
            for (k = 0; k < len; k++) {
                if (expr[k] == vars[j]) {
                    if (value == 0) {
                        result[k] = '0';
                    } else {
                        result[k] = '1';
                    }
                }
            }
        }
        printf("Valor %d:\t%s\n", i, result);
    }

    return 0;
}

