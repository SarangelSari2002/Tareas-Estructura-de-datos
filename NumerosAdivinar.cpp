#include <stdio.h>  
#include <stdlib.h> 
#include <unistd.h> 
#define Intentos 5
#define limInferior 1 
#define limSuperior 100

int aleatorio(int minimo, int maximo);
int main() {
  srand(getpid());
  int numsecreto = aleatorio(limInferior, limSuperior);
  int respuesta, numintentos = 0;
  printf("He seleccionado un número al azar entre %d y %d, tu tarea es "
         "adivinarlo en máximo %d intentos\n",
         limInferior, limSuperior, Intentos);
  while (1) {
    numintentos++;
    printf("Adivina el numero que elegi: ");
    scanf("%d", &respuesta);
    if (respuesta == numsecreto) {
      printf("Adivinaste!. El número que elegi fue %d , lo adivinaste en %d "
             "intentos",
             numsecreto, numintentos);
      break;
    } else if (respuesta < numsecreto) {
      printf(
          "No es!, pero una pista te dare: el número que elegi es mayor que %d\n",
          respuesta);
    } else {
      printf(
          "No es!, pero una pista te dare: el número que elegi es menor que %d\n",
          respuesta);
    }
    if (numintentos >= Intentos) {
      printf("Perdiste! :(. El número elegido fue %d", numsecreto);
      break;
    }
  }
}
int aleatorio(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
