int main() {
//Создали массив
  int massiv[10];
//Заполняем массив элементами
  for(int i = 0; i<10; i++){
     if(i % 2 == 0){
       massiv[i]= 0;
     }else{
       massiv[i] = 1;
    }
  }
  int x = 0;
//Выводим массив
  while(x<10){
    printf("%d", massiv[x]);
    x += 1;
  }
return 0;

}