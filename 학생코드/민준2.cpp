#include<stdio.h>
int a[13][13] = { 0 };
int sum(int x, int y, int cnt, int i) {
if (a[x + 4 - i][y+4] == 1) {
if (i == 4) {
cnt++;
return 1;
}
i++;
sum(x, y, cnt, i);
}
else return 1;
}
int sum2(int x, int y, int cnt, int i) {
if (a[x + 4][y + 4 - i] == 1) {
if (i == 4) {
cnt++;
return 1;
}
i++;
sum2(x, y, cnt, i);
}
else return 1;
}
int sum3(int x, int y, int cnt, int i) {
if (a[x + 4 - i][y + 4 - i] == 1) {
if (i == 4) {
cnt++;
return 1;
}
i++;
sum3(x, y, cnt, i);
}
else return 1;
}
int sum4(int x, int y, int cnt, int i) {
if (a[x + 4 - i][y + 4 + i] == 1) {
if (i == 4) {
cnt++;
return 1;
}
i++;
sum4(x, y, cnt, i);
}
else return 1;
}
int main() {
int i, j, k, bingo[10][10], arr[30], tmp, cnt=0, p=1, m=1;
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
scanf("%d", &bingo[i][j]);
}
}
for (i = 0; i < 25; i++) {
scanf("%d", &arr[i]);
}
tmp = arr[0];
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {

if (tmp == bingo[i][j]) {

a[i+4][j+4] = 1;
sum(i, j, cnt, m);
m = 0;
sum2(i, j, cnt, m);
m = 0;
sum3(i, j, cnt, m);
m = 0;
sum4(i, j, cnt, m);
m = 0;
if (cnt == 3) {
printf("%d", p + 1);
return 0;
}
}
}
tmp = arr[p];
p++;
}
}
