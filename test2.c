#include <stdio.h>

int main() {

int i, j;

char text[] = {'a', 'b'};


for(i = 5; i > 0; i--) {
    int k = 6;
    char result[k];
    
    
    for(j = 0; j < i; j++) {

        result[j] = text[0];
        
        
    }

    
  printf("%s", result);
  
  printf("\n");
    

}






  
    
    return 0;
}