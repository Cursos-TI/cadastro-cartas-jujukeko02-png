#include <stdio.h>
     
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
// pega informacoes do estado 
int cidade;
// pega informacoes da cidade
int populacao;
// pega informacoes da populaçao 
float pib;
// pega informacoes do pib
float area;
// pega informacoes da area
int pontoTuristicos;
// pega informacoes do ponto turistico
  
  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  printf("BEM VINDO AO MOMENTO EM QUE VOCE\nVAI CRIAR SUAS CARTAS DO JOGO SUPER TRUNFO\n");
printf("\nDigite por favor o Estado da cidade:\n");
scanf(" %c",&estado);
printf("Estado:%c\n",estado);
printf("Digite por favor o numero da cidade:\n");
scanf("%d",&cidade);
printf("Cidade:%d",cidade);
printf("\nDigite por favor o numero da populacao:\n");
scanf("%d",&populacao);
printf("\nTamanho da populacao:%d\n",populacao);
printf("\nDigite a Area da sua cidade por favor:\n");
scanf("%f",&area);
printf("\nTamanho da Area da cidade:%f\n",area);
printf("Digite o PIB da sua cidade:\n");
scanf("%f",&pib);
printf("O pib da sua cidade é:%f",pib);
printf("\nDigite o numero de pontos turisticos da sua cidade:\n");
scanf("%d",&pontoTuristicos);
printf("\nA quantidade de pontos turisticos da sua cidade sao:%d",pontoTuristicos);
    return 0;
}

return 0;
} 
