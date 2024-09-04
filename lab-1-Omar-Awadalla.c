//Omar Awadalla
#include <stdio.h>

int main(void) {
  int age;
  float height;
  char grade;

  printf("Enter your age: ");
  scanf("%d",&age);
  
  printf("Enter your height: ");
  scanf("%f", &height);

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  printf("You entered - Age: %d, Height: %.1f, Grade: %c", age, height, grade);
  
  return 0;
}
