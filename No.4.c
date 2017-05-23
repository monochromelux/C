#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
 int q, w, e, r, t, y, u;
 scanf("%d%d%d%d%d", &q, &w, &e, &r, &t);
 e += t;
 r += t;
 y = e%q;
 u = r%w;
 if((e/q)&1) y = q-y;
 if((r/w)&1) u = w-u;
 printf("%d %d\n", y, u);
 
 return 0;
}
