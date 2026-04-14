#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //(eu usaria struct para ficar mais facil de organizar , porém o professor ia achar que peguei do chat gpt)
  
  
  //VARIAVEIS DA CARTA 1
char estado1;
// pega informacoes do estado 
int cidade1;
// pega informacoes da cidade
int populacao1;
// pega informacoes da populaçao 
float pib1;
// pega informacoes do pib
float area1;
// pega informacoes da area
int pontoTuristicos1;
// pega informacoes do ponto turistico
float densidadePopulacional1;
// calcula a divisão entre a população e a area da cidade
float pibPercapita1;
// calcula a divisão entre o pib e a população

//VARIAVEIS DA CARTA 2

char estado2;
// pega informacoes do estado 
int cidade2;
// pega informacoes da cidade
int populacao2;
// pega informacoes da populaçao 
float pib2;
// pega informacoes do pib
float area2;
// pega informacoes da area
int pontoTuristicos2;
// pega informacoes do ponto turistico
float densidadePopulacional2;
// calcula a divisão entre a população e a area da cidade
float pibPercapita2;


  // Área para entrada de dados
  
 


  // Área para exibição dos dados da cidade
  
  //PEDINDO E RECEBENDO INFORMAÇOES DA CARTA 1
  printf("\n\n====BEM VINDO AO MOMENTO EM QUE VOCE\nVAI CRIAR SUAS CARTAS DO JOGO SUPER TRUNFO====\n\n");
 printf("\nAgora voce vai preencher os dados da sua primeira carta\n");
printf("\n\nDigite por favor o Estado da cidade:\n\n");
scanf(" %c",&estado1);
printf("Estado:%c\n",estado1);
printf("\n\nDigite por favor o numero da cidade:\n");
scanf("%d",&cidade1);
printf("\nCidade:%d",cidade1);
printf("\n\nDigite por favor o numero da populacao:\n");
scanf("%d",&populacao1);
printf("\nTamanho da populacao:%d\n",populacao1);
printf("\n\nDigite a Area da sua cidade por favor:\n");
scanf("%f",&area1);
printf("\nTamanho da Area da cidade:%f\n",area1);
printf("Digite o PIB da sua cidade:\n");
scanf("%f",&pib1);
printf("O pib da sua cidade é:%f",pib1);
printf("\n\nDigite o numero de pontos turisticos da sua cidade:\n");
scanf("%d",&pontoTuristicos1);
printf("\nA quantidade de pontos turisticos da sua cidade sao:%d\n",pontoTuristicos1);

//CALCULANDO A DENSIDADE POPULACIONAL E O PIB PERCAPITA

densidadePopulacional1 = (float) populacao1 / area1;
pibPercapita1 = pib1 / populacao1;

printf("A densidade é: %.2f\n",densidadePopulacional1);
printf("O Pib PerCapita é: %.2f\n",pibPercapita1);


//PEDINDO E RECEBENDO INFORMAÇOES DA CARTA 2
printf("\n\nAgora voce vai preencher os dados da sua segunda carta\n");
printf("\nDigite por favor o Estado da cidade:\n");
scanf(" %c",&estado2);
printf("Estado:%c\n",estado2);
printf("Digite por favor o numero da cidade:\n");
scanf("%d",&cidade2);
printf("Cidade:%d",cidade2);
printf("\nDigite por favor o numero da populacao:\n");
scanf("%d",&populacao2);
printf("\nTamanho da populacao:%d\n",populacao2);
printf("\nDigite a Area da sua cidade por favor:\n");
scanf("%f",&area2);
printf("\nTamanho da Area da cidade:%f\n",area2);
printf("Digite o PIB da sua cidade:\n");
scanf("%f",&pib2);
printf("O pib da sua cidade é:%f",pib2);
printf("\nDigite o numero de pontos turisticos da sua cidade:\n");
scanf("%d",&pontoTuristicos2);
printf("\nA quantidade de pontos turisticos da sua cidade sao:%d\n",pontoTuristicos2);

//CALCULANDO A DENSIDADE POPULACIONAL E O PIB PERCAPITA

densidadePopulacional2 = (float) populacao2 / area2;
pibPercapita2 = pib2 / populacao2;

printf("A densidade é: %.2f\n",densidadePopulacional2);
printf("O Pib PerCapita é: %.2f\n",pibPercapita2);

//AQUI ABAIXO VAI EXIBIR AS INFORMAÇÕES DE CADA CARTA 

printf("\n\n  ==== CARTA 1 ==== \n\n");
printf("Estado: %c\n",estado1);
printf("Cidade: %d\n",cidade1);
printf("População: %d\n",populacao1);
printf("Area: %f\n",area1);
printf("PIB: %f\n",pib1);
printf("Pontos Turisticos: %d\n",pontoTuristicos1);
printf("Densidade Populacional: %.2f\n",densidadePopulacional1);
printf("PIB Percapita: %.2f\n",pibPercapita1);


printf("\n\n  ==== CARTA 2 ====\n\n ");
printf("Estado: %c\n",estado2);
printf("Cidade: %d\n",cidade2);
printf("População: %d\n",populacao2);
printf("Area: %f\n",area2);
printf("PIB: %f\n",pib2);
printf("Pontos Turisticos: %d\n",pontoTuristicos2);
printf("Densidade Populacional: %.2f\n",densidadePopulacional2);
printf("PIB Percapita: %.2f\n",pibPercapita2);

 //Super poder da carta 1//
 float superpoder2;
 float superpoder1;

superpoder1 = (float)populacao1 + pib1 + area1 + pontoTuristicos1 + pibPercapita1 + (1.0 / densidadePopulacional1);

//SUPER PODER DA CARTA 2//
superpoder2 = (float)populacao2 + pib2 + area2 + pontoTuristicos2 + pibPercapita2 + (1.0 / densidadePopulacional2);



printf("População: Carta %d, venceu (%d)\n",(populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));

printf(" PIB : Carta %d venceu (%d)\n",(pib1 > pib2 ? 1 : 2),(pib1 > pib2));

printf(" Area: Carta %d venceu (%d)\n" ,(area1 > area2 ? 1 : 2),(area1 > area2));

printf("Pontos Turisticos: Carta: %d venceu (%d)\n",(pontoTuristicos1 > pontoTuristicos2 ? 1 : 2), (pontoTuristicos1 > pontoTuristicos2));

printf("PIB Percapita: Carta %d venceu (%d)\n",(pibPercapita1 > pibPercapita2 ? 1 : 2),(pibPercapita1 > pibPercapita2));

printf("Densidade Populacional: Carta: %d venceu: (%d)\n",(densidadePopulacional1 < densidadePopulacional2 ? 1 : 2), (densidadePopulacional1 < densidadePopulacional2));
printf("\n\n=====SuperPoder : Carta %d venceu: (%d)======\n\n",(superpoder1 > superpoder2 ? 1 : 2),(superpoder1 > superpoder2));


    return 0;
    
}
