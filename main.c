#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char  *argv[]){
  setlocale (LC_ALL, "Portuguese");
  int x, y;

  printf ("Digite o valor de X, sendo que deverá indicar a cordenada x e y : ");
  scanf("%d, &x");

  printf ("Digite o valor de Y, sendo que deverá indicar a cordenada x e y   ");
  scanf ("%d &y" );

  if ((x > 10 || x < -10) || (y >10 || y < -10)) {
    printf ("ERRRRROOOOUUU");
  }
  else if (( x>= -1 && x <=1) && (y >= -1 && y <=1)) {
    printf ("10 PONTOS ESSE AI É BÃO");
  }
    else if (( x>= -5 && x <=5) && (y >= -5 && y <=5)) {
    printf ("5 PONTOS DA PRA MELHORAR JOVEM");
  }
    else if (( x>= -10 && x <=10) && (y >= -10 && y <=10)) {
    printf ("1 PONTINHO IIIIIIIIIIIIIIII");
  }

    return 0;
}
