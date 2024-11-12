#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;
  int answer;
  int remainder;
  char UserInput;
  printf("Puoi trovare la moltiplicazione di due numeri. Per favore digita S, se vuoi iniziare: ");
  scanf("%c", &UserInput);
  if (UserInput == 'S' || UserInput=='s')
  {
    printf("Sta iniziando...\n");
     printf("Inserisci il primo numero:");
     scanf("%d", &a);
     printf("Inserisci il numero successivo:");
     scanf("%d", &b);
  
  
  
  c=a+b;
  answer=c/2;
  remainder=c%2;

  printf("Il risultato è " "%d", answer);
  printf(", il resto è " "%d", remainder);

  }

  else 
  {
    printf("Non hai premuto S. Uscita...\n");
  }

  return 0;
}