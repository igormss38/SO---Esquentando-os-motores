#include <stdio.h>
#include <stdlib.h>

typedef struct listNames
 {

 char name;

 struct listNames * next;


 }s_listNames;

 static void reverse(struct listNames** ini_nome){
 struct listNames* prev = NULL;
 struct listNames* actual = *ini_nome;
 struct listNames* prox = NULL;
 while (actual != NULL) {

 prox = actual->next;


 actual->next = prev;


 prev = actual;

 actual = prox;
 }
 *ini_nome = prev;
 }

int main(int argc, char const *argv[])
{

 int total;

 int verify = 0;

 s_listNames * ini_nome;

 s_listNames * proximo_nome;

 ini_nome = (s_listNames *) malloc(sizeof(s_listNames));

 proximo_nome = ini_nome;

 printf("quantos nomes: \n");

 scanf("%d",&total);

 while (verify < total)
 {
 printf("nome: ");
 scanf("%s", &proximo_nome->name);

 proximo_nome->next = (s_listNames *) malloc(sizeof(s_listNames));
 proximo_nome = proximo_nome->next;

 verify++;
 }

 proximo_nome->next = NULL;

 reverse(&ini_nome);

 while (proximo_nome != NULL)
 {
 printf("%s \n", &proximo_nome->name);

 proximo_nome = proximo_nome->next;
 }

 return 0;


}
