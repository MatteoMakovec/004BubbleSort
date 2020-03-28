#include <stdio.h>

// Dichiarazione funzioni presenti dopo il main
void output(int * array_set, int length);
void swap(int *a, int *b);
void bubble_sort(int * array_set, int length);

int main(int argc, char *argv[]) {
  // Random Integer Set generato da:
  // https://www.random.org/integer-sets/?sets=1&num=100&min=-2000&max=2000&seqnos=on&commas=on&order=index&format=html&rnd=new
  int array_set[] = {-866, 1056, -1522, -340, 1279, -1966, 1348, 1763, -815, -1693, -446, 31, 1130, -1830, -639, 564, 44, 1837, 82, -276, 1679, 576, 652, -1298, 1963, 682, 286, -37, -1872, 457, -1166, 1057, -1152, -977, -1584, -1453, 1014, -1159, 295, -1405, 1981, 1618, 222, 1268, -842, -1423, -774, -436, 936, 1205, -1695, -760, -97, 963, 1407, 1583, 1266, -312, -278, -1727, -1806, -1026, -1894, -895, 1873, 1722, -1511, -7, -359, -673, -1982, 307, 1338, 1970, 1758, 1824, 795, -1497, -797, -1175, 1038, -1408, 798, 234, -1011, 1027, 1138, 1372, -1315, -109, -957, 1969, -821, 1703, -130, 345, 939, 428, 57, -787};
  int length = sizeof(array_set) / sizeof(int);

  bubble_sort(array_set, length);

  return 0;
}

void swap(int *a, int *b){
  int change = *a;
  *a = *b;
  *b = change;
}

void output(int * array_set, int length){
  for (int i = 0 ; i < length; i++){
    printf("%d ", array_set [i]);
  }
}

void bubble_sort(int * array_set, int length){
  int control = 1;

  printf("Array da ordinare: \n");
  output(array_set, length);
  while(control){
    control = 0;
    for(int i = 1; i < length; i++){
      if(array_set[i-1] > array_set[i]){
        swap(&array_set[i-1], &array_set[i]);
        control = 1;
      }
    }
  }

  printf("\n\nArray ordinato: \n");
  output(array_set, length);
}