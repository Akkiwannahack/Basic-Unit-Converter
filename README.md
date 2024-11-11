#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int massChoice;
  int userinputF;
  int userinputC; 
  int userinputgram;
  int userinputkilogram;
  int fahrenheitToCelcius;
  int celciusToFahrenheit; 
  float gramTokilogram;
  float kilogramsTogram; 
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }

  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for gram to kilogram. \n");
      printf("Enter 2 for kilogram to gram. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Enter the gram amount: \n");
          scanf("%d",&userinputgram);
          gramTokilogram = userinputgram / 1000;
          printf("kilogram: %.2f",gramTokilogram);
      }
      else if(massChoice == 2) {
          printf("Please enter the kilogram amount: \n");
          scanf("%d",&userinputkilogram);
          kilogramsTogram = userinputkilogram * 1000;
          printf("Grams: %.2f",kilogramsTogram);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
