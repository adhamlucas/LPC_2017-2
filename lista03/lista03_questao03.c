#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 5, b = 6, c = 7;
  int v[10]  = {0,10,20,30,40,50,60,70,80,90};
  int *pt1, *pt2, *pt3;
  pt1 = &a;
  pt2 = &b;
  pt3 = &c;
  pt1 = pt3; //pt1 = endereço contido em pt3, pt1 = &c;
  pt2 = pt3; //pt2 = endereço contido em pt3; pt2 = &c;
  *pt1 = *pt2 + *pt3; //c = c + c;
  pt1 = &v[3];

  for(int k = 0; k < 3; k++){
    *pt1 = *pt1 + 1000; //V[3] = v[3] + 1000
    pt1 = pt1 + 2; // pt1 = &v[3] + 2, ou seja,o enreço é acrestando duas posições de int;
  }
}

/*
  valores: 
  a = 5; b = 6; c = 14;
  v[10] = {0,10,20,1030,40,1050,60,1070, 80, 90}
*/
