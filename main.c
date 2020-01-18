#include <stdio.h>

int cm(int d) {
  return d*100;
}
int dm(int d) {
  return d*10;
}
float km(float d) {
  float wynik;
  wynik = d*0.001;
  return wynik;
}
int mm(int d) {
  return d*1000;
}



int main() {

  int n;
  int w;

  printf("Podaj wartosc (w metrach): ");
  scanf("%d", &n);
  printf("Jakiej zamiany chcesz dokonac?\n");
  printf("|1| - mm\n|2| - cm\n|3| - dm\n|4| - km\n\n");
  scanf("%d", &w);

  if(w==1)
    printf("%d mm\n",mm(n));

  if(w==2)
    printf("%d cm\n",cm(n));

  if(w==3)
    printf("%d dm\n",dm(n));

  if(w==4)
    printf("%f km\n",km(n));



}
