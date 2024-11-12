#include <stdio.h>
int main()
{
    int a;
    int b;
    int answer;
    char UserInput;
    
    printf("Puoi trovare la moltiplicazione di due numeri. Per favore digita S, se vuoi iniziare: ");
    scanf("%c", &UserInput);
    if (UserInput == 'S' || UserInput=='s') {
    
    printf("Sta iniziando...\n");
    printf("Inserisci il primo numero:");
    scanf("%d", &a);
    printf("Inserisci il numero successivo:");
    scanf("%d", &b);
    answer=a*b;
    printf("Il risultato è " "%d", answer);

    }

    else{
        {
    printf("Non hai premuto S. Uscita...\n");
  }
    }
    
    
    return 0;
}