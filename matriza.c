#include <stdio.h>
//Функция вывода двумерного массива
// x - количество строк
// y - количество столбцов
// name - название матрицы
// symbol - элемент, заполняющий массив
void init_array(int x, int y, int name[][y], int symbol){
  int i, j;
  for(i = 0; i < x; i++){
    for(j = 0; j < y; j++){
      name[i][j] = symbol;
      printf("%d", name[i][j]);
      }
    printf("\n");
    }
  }
int main(){
  int array[5][5];
  init_array(5, 5, array, 1);
  printf("\n");
  init_array(5, 5, array, 0);
return 0;
}