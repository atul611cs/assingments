#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int a_triplet[3], b_triplet[3];
int alice_points = 0;
int bob_points = 0;
int main() {
for (int i = 0; i < 3; i++) {
scanf("%d", &a_triplet[i]);
}
for (int i = 0; i < 3; i++) {
scanf("%d", &b_triplet[i]);
}
for(int i = 0; i < 3; i++) {
if (a_triplet[i] > b_triplet[i]) alice_points++;
if (a_triplet[i] < b_triplet[i]) bob_points++;
}
printf("%d %d\n", alice_points, bob_points);
return 0;
}
