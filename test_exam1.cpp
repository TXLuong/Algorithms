#include <string.h>
#include <stdlib.h>
char *reverse(char *input) {
int len = strlen(input);
char output[len];
for (int i = 0; i < len; i++) {
output[len - i - 1] = input[i];
}
return output;
}

