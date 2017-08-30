/*Faça um programa utilizando ponteiros que obedeça ao teste de mesa abaixo.
 a) p1 = [?];
    p2 = [?];
    v  = [3];
 b) p1 -> [ ];
    p2 -> v = [3] ;
    v = [3];
 c) p1 = [42];
    p2 -> v = [3];

 d) p1 = [ ];
    p2 = [ ];
    p3 = [?];
    p1 -> [42];
    p2 -> v = [3];
    p3 -> v = [3];

 e) p1 = [ ];
    p2 = [ ];
    p3 = [ ];
    p1 -> [42];
    p2 -> v = [3]
    p3 = [?];

 d) p1 = [ ];
    p2 = [ ];
    p3 = [ ];
    p1 -> v = [3];
    p2 -> v = [3];
    p3 -> v = [3];
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

  int *p1, *p2, v=3;

  p1 = malloc(sizeof(int));
  p2 = &v;

  *p1 = 42;

  printf("\n\n%d",*p1);
  printf("\n%d",*p2);

  int *p3;
  p3 = p2;

  *p3 = 88;
  printf("\n\n%d",*p1);
  printf("\n%d",*p2);
  printf("\n%d",*p3);

  p1 = p3;
  printf("\n\n%d",*p1);
  printf("\n%d",*p2);
  printf("\n%d",*p3);

  return 0;
}

