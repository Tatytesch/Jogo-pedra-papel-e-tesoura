#include <stdio.h>
#include <stdlib.h>

int main()
{
   char player1 [256];
   char player2 [256];

   printf ("Player 1, sua vez...");
   scanf ("%s", &player1);

   printf ("\nPlayer 2, sua vez...");
   scanf ("%s", &player2);

   printf ("\nAguarde, estamos calculando o resultado...\n");
   if(strcmp(player1, "papel") ==0) {
               if(strcmp(player2, "papel") ==0) {
                   printf ("Empate!");
               }else if(strcmp(player2, "tesoura") ==0) {
                   printf ("Player 2 ganhou, por que tesoura corta papel e Player 1 perdeu!");
               }else if(strcmp(player2, "pedra") ==0) {
                   printf ("Player 2 perdeu, por que papel embrulha pedra e Player 1 ganhou!");
               }else{
                  printf("Player 2 jogou uma informcao invalida!");
               }

   }else if(strcmp(player1, "tesoura") ==0) {
               if(strcmp(player2, "papel") ==0) {
                   printf ("Player 2 perdeu, por que tesoura corta papel e Player 1 ganhou!");
               }else if(strcmp(player2, "tesoura") ==0) {
                   printf ("Empate!");
               }else if(strcmp(player2, "pedra") ==0) {
                   printf ("Player 2 ganhou, por que pedra quebra tesoura e Player 1 perdeu!");
               }else{
                  printf("Player 2 jogou uma informcao invalida!");
               }

      }else if(strcmp(player1, "pedra") ==0) {
                 if(strcmp(player2, "papel") ==0) {
                   printf ("Player 2 ganhou, por que papel embrulha pedra e Player 1 perdeu!");
               }else if(strcmp(player2, "tesoura") ==0) {
                   printf ("Player 2 perdeu, por que pedra quebra tesoura e Player 1 ganhou!");
               }else if(strcmp(player2, "pedra") ==0) {
                   printf ("Empate!");
               }else{
                  printf("Player 2 jogou uma informcao invalida!");
               }
   }else{
       printf("Voce jogou uma informcao invalida!");
   }
return 0;

}
