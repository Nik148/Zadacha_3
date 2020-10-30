#include <stdio.h>

int main() {
//Создали массив
  int massiv[10];
//Заполняем массив элементами
  for(int i = 0; i<10; i++){
    massiv[i] = 1;
    }
  int x = 0;
//Выводим массив
  while(x<10){
   printf("%d", massiv[x]);
   x += 1;
  }
return 0;

}