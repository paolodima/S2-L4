#include <stdio.h>

void menu()
{
    printf("Scegliere tra le seguenti opzioni: \n A] Inizia una nuova partita\n B] Esci dal gioco\n   ");
}

void partita()
{
    int score = 0;
    char nome;
    int risposta1, risposta2, risposta3;
    printf("Inserisci il tuo nome :\n");
    scanf("%s", &nome);
    printf("La prima domanda del gioco è : Quanto fa 5*5? \n");
    printf("Scegliere tra le seguenti risposte: \n 1] 25\n 2] 34\n 3] 45\n");
    scanf("%d", &risposta1);

    if (risposta1 == 1)
    {
        printf("Risposta esatta !\n");
        score++;
    }
    else
        printf("Risposta errata !\n");
}
int main()
{

    menu();
    char scelta;
    scanf("%s", &scelta);
    while (scelta == 'A')
    {
        menu();
        partita();
        
    }

    if (scelta == 'B')
    {

        return 0;
    }
}