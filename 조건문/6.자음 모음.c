#include <stdio.h>

int main(){
  char sh;
  printf("영어 소문자를 입력하시요 : ");
  scanf("%c", &sh);
  switch (sh){
    case 'a' : printf("모음"); break; 
    case 'e' : printf("모음"); break; 
    case 'i' : printf("모음"); break; 
    case 'o' : printf("모음"); break; 
    case 'u' : printf("모음"); break; 
    default: printf("자음");
  }
}



#include <stdio.h>

int main(){
  char sh;
  printf("영어 소문자를 입력하시요 : ");
  scanf("%c", &sh);
  switch (sh){
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' : printf("모음"); break; 
    default: printf("자음");
  }
}
