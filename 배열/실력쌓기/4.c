#include <stdio.h>
int main(){
  int n=0;
  long long int dna;
  printf("용의자의 DNA 정보를 입력하세요 : ");
  scanf("%lld", &dna);
  while (dna>0){
    n += dna%10;
    dna /= 10;
  }
  
  if (n%7 == 4){
    printf("범인");
  }
  else{
    printf("일반인");
  }  
}



#include <stdio.h>
int main(){
  int i, n=0 , x=0;
  char dna[10];
  printf("용의자의 DNA 정보를 입력하세요 : ");
  scanf("%s", dna);
  for (i=0;i<10;i++){
    n += dna[i]-48;
  }
  
  if (n%7 == 4){
    printf("범인");
  }
  else{
    printf("일반인");
  }  
}
