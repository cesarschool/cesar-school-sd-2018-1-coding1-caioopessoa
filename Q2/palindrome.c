#include <stdio.h>
#include <stdbool.h>


bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length); 
int checks=0 ,i ;
for(i = 0 ; i< length ; i++){
  if (sentence[i] == sentence[length-1-i]){
    checks++;
  
  }

}
  if(length == checks){
    printf("True");
  } 
  else{
    printf("False");
  }
    printf("\nisPalindrome::END\n");
    return false;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
