#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
 int q, w, e, r, t, y, u;
 scanf("%d%d%d%d%d", &q, &w, &e, &r, &t);
 
 e += t;
 r += t;
 y = e % q;
 u = r % w;
 if((e/q) & 1) y = q-y; //벽에 부딛혔을 때 좌표 변경 (수평 방향) 
 if((r/w) & 1) u = w-u; // (수직 방향) 
 
 printf("%d %d\n", y, u);
 
 return 0;
}
