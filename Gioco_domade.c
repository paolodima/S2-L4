#include <stdio.h>
#include <string.h>

void menu()
{
    printf("Scegliere tra le seguenti opzioni: \n A] Inizia una nuova partita\n B] Esci dal gioco\n   ");
}

void partita()
{
    int score =0;
    char nome[10] = {'\0'};
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
    
    printf("La seconda domanda del gioco è : come si stampa a video una stringa in C\n");
    printf("Scegliere tra le seguenti risposte: \n 1] Scanf\n 2]Printf \n 3] If\n");
    scanf("%d", &risposta2);

    if (risposta2 == 2)
    {
        printf("Risposta esatta !\n");
        score++;
    }
    else
        printf("Risposta errata !\n");

    printf("La terza domanda del gioco è : Qual è il carattere per inserire un numero intero C\n");
    printf("Scegliere tra le seguenti risposte: \n 1] S\n 2] D\n 3] C\n");
    scanf("%d", &risposta3);

    if (risposta3 == 2)
    {
        printf("Risposta esatta !\n");
        score++;
    }
    else
        printf("Risposta errata !\n");

    printf("Le domande sono finte %s, hai totalizzato uno score pari a: %d\n", nome ,score);
        
    menu();
}
int main()
{
    
    menu();
    partita();
    
    
    char scelta;
    scanf("%s", &scelta);
    while (scelta == 'A')
    {
        
        main();
        
        
        
        
        
    }

    if (scelta == 'B')
    {

        return 0;
    }
    
    
}