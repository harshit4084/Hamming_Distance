#include <stdio.h >

int a[25][25]; //maxsize of G matrix will be 25x25
char sol1[25];
char sol2[25];
char c[25];
int m, d_star = 25, i, j; //in worst case d_star will be number of columns in G matrix

int min_dist() {
  int k, d;
  for (i = 0; i < m; i++) {
    for (k = 0; k < m; k++) {
      if (k != i) {
        d = 0;
        for (j = 0; c[j] != '\0'; j++) {
          if (a[k][j] != a[i][j])
            d = d + 1;
        }
      }
      if (d_star > d){
    for (j = 0; c[j] != '\0'; j++) {
      	sol1[j]=a[k][j];
      	sol2[j]=a[i][j];}
        d_star = d;
    }
    }
}
  return d_star;
}

int main() {

  printf("\n\nENTER NUMBER OF THE CODEWORDS\n");
  scanf("%d", & m);
  for (i = 0; i < m; i++) {
    printf("\n\nENTER CODEWORD %d :: ", i);
    scanf("%s", c);
    for (j = 0; c[j] != '\0'; j++) {
      a[i][j] = c[j];
    }
  }

  printf("\n\n************** THE GENERATOR MATRIX IS **************  \n");
  for (i = 0; i < m; i++) {
    printf("\n");
    for (j = 0; c[j] != '\0'; j++) {
      printf("\t%c", a[i][j]);
    }
  }
  d_star = min_dist();
  printf("\n\n ************** MINIMUM DISTANCE d*=%d **************\n", d_star);
  printf("\n\n ************** CODEWORD 1: %s **************\n",sol1);
  printf("\n\n ************** CODEWORD 2: %s **************\n",sol2);

  return 0;
}
