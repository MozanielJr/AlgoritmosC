/* Escreva um printf com as seguintes informações: nome da disciplina (Algoritmo e 
Programacao), nome do professor (Joyce Siqueira), nome completo do aluno, matrícula, curso, link do 
repositório do GitHub e qual software foi utilizado: DevC++ ou VSCode.
*/

#include <stdio.h>
#include <math.h>

int main(){


char questao;
char nome[10];
float catetoOposto, catetoAdjacente, hipotenusa, seno;
int ano;


printf("Disciplina : Algoritmo e Programacao \n" );
printf("Professor  : Joyce Siqueira \n" );
printf("Aluno      : Mozaniel Medeiros dos Santos Junior \n");
printf("Matricula  : UC22103112 \n");
printf("Curso      : Ciencia da Computacao \n");
printf("Repositorio: https://github.com/MozanielJr/Ucb.git \n");
printf("Software   : VSCode\n");

printf("Que bom que estamos aqui! Qual questao entre A, B e C voce deseja executar ? \n");
scanf("%c", &questao);

switch (questao)
{
case 'A': 
/*
A. Um Colégio está com um novo projeto, no qual deseja ensinar matemática aos alunos do 
ensino médio, por meio de algoritmos de resolução de formulas. Assim, você foi contratado para escrever 
um algoritmo que receba os valores de ‘a’ e ‘b’, ou seja, os valores dos catetos oposto e adjacente, 
respectivamente, de um triângulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de 
Pitágoras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da 
vírgula.
*/
printf("Entao vamos calcular a hipotenusa e o seno desse seu triangulo! Digite o valor do cateto oposto: ");
scanf("%f", &catetoOposto);
printf("Show de bola! Agora digite o valor do cateto adjacente: ");
scanf("%f", &catetoAdjacente);
printf("Calculando ...");
hipotenusa=sqrt(pow(catetoOposto,2)+pow(catetoAdjacente,2));
seno=catetoOposto/hipotenusa;
printf("Pronto!!! O triangulo de cateto oposto %0.3f e adjacente %0.3f tem os seguintes dimensoes:\n", catetoOposto, catetoAdjacente);
printf("Hipotenusa: %0.3f e seno: %0.3f", hipotenusa, seno);
    break;
case 'B':
/* B. O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é
preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre 
1900 e 2022. 
OBS. Para saber se um ano é bissexto, devemos verificar se ele se encaixa em um dos casos:
Caso 1) É um número divisível por 4, mas não é divisível por 100.
Caso 2) É um número divisível por 4, por 100 e por 400.
*/
printf("Que legal que deseja saber se nasceu em um ano bissexto! Digite seu primeiro nome: \n");
scanf("%s[10]", &nome);
printf("Agora me diga, %s, em que ano voce veio ao mundo com 4 digitos ? Ex.: 1982\n", nome);
scanf("%d", &ano);
printf("So um minuto enquanto procuramentos em nossos registros, %s.\n", nome);

/*dividir ano por 4 e restar 0 
dividir ano por 100 e resto diferente de 0

dividir ano por 4 e restar 0
dividir ano por 100 e restar 0
dividir ano por 400 e restar 0 
*/

if ( ano % 4 == 0 && ano % 4 != 0)
    {
    printf("Que top, %s! O ano %d eh bissexto!!!", nome, ano);
    }
    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
    {
    printf("Supinpa, %s!!! O ano %d eh bissexto!!!", nome, ano);
    }
else
    printf("Bom tambem, %s!!! Voce nasceu!!! So que o ano nao era bissexto :(");

    break;
case 'C':

printf("Essa questao ainda esta em construcao! Por favor, tente mais tarde. \n");

break;

default:

printf("Voce tinha apenas 3 opcoes e errou! :< Opcao Invalida!!!  \n");

}

}
