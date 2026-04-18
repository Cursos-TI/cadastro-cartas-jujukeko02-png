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
printf("PIB Percapita: %.2f\n\n",pibPercapita2);

 int opcao;
 
 
 //Mostrando o menu para o usuario//
 
 printf("==== MENU DE OPÇÕES=====\n\n");
 printf("Escolha uma opção de ATRIBUTO:\n\n");
 printf("Opção 1: População \n");
 printf("Opção 2: Area \n");
 printf("Opção 3: PIB\n");
 printf("Opção 4: Pontos Turisticos\n");
 printf("Opção 5: Densidade Geografica\n");
 printf("Escolha:  ");
 scanf("%d",&opcao);
 
 
 
 switch (opcao) {
   
   
   case 1:
   
   printf("\n===Comparação de Populaçào===\n");
   if (populacao1 > populacao2) {
     
     printf("Carta 1 venceu. Cidade: %d - População: %d\n",cidade1, populacao1);
     
   }
   
   else if (populacao2 > populacao1) {
     
     printf("Carta 2 venceu. Cidade: %d - População: %d\n", cidade2, populacao2);
     
   }
   
   else if(populacao1 == populacao2) {
     
     
     printf("As duas cartas empataram");
     
   }
   
   break;
   
   case 2:
   
   printf("\n===Comparação de Areas===\n");
   
   if (area1 > area2) {
     
     
     printf("Carta 1 venceu. Cidade: %d - Area %d\n",area1,cidade1);
     
   }
   
   else if(area2 > area1) {
     
     
     printf("Carta 2 venceu. Cidade: %d - Area %d\n",cidade2, area2);
   }
   
   else if (area1 == area2) {
     
     printf("Empate");
   }
   
   case 3:
   
   printf("\n===Comparação de PIB===\n");
   if (pib1 > pib2) {
     
     printf("Carta 1 venceu. Cidade %d - PIB %d\n",cidade1,pib1);
   }
   
   else if (pib2 > pib1) {
     
     printf("Carta 2 venceu. Cidade %d - PIB %d\n",cidade2,pib2);
     
   }
   else if (pib1 == pib2) {
     
     
     printf("empate");
   }
   
   case 4: 
   printf("\n===Comparação de Pontos Turisticos===\n");
   
   if (pontoTuristicos1 > pontoTuristicos2) {
     
     printf("Carta 1 venceu. Cidade: %d - Pontos Turisticos: %d",cidade1, pontoTuristicos1);
     }
     
     else if  (pontoTuristicos2 > pontoTuristicos1) {
       
       
       printf("Carta 2 venceu. Cidade: %d - Pontos Turisticos: %d",cidade2, pontoTuristicos2);
     }
     
     else if (pontoTuristicos2 == pontoTuristicos1) {
       
       printf("empate");
     }
   
   case 5:
   
   printf("===Comparação de Densidade Geografica===");
   
   if (densidadePopulacional1 < densidadePopulacional2) {
     
     
     printf("Carta 1 venceu. Cidade: %d - Densidade Populacional: %d",cidade1,densidadePopulacional1);
     
   }
   
   else if (densidadePopulacional2 <densidadePopulacional1) {
     
     printf("Carta 2 venceu. Cidade: %d - Densidade Populacional: %d", densidadePopulacional2,cidade2);
     
     
   }
   
   else if (densidadePopulacional2 == densidadePopulacional1) {
     
     printf("empate");
     
   }
   
   case 6:
   
   printf("Saindo...");
   
   return 0;
   
   default: 
   
   printf("nada pra mostrar aqui querido");
   
   
   
 }


    return 0;
    
}
