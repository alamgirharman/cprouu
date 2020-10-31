#include <stdio.h>

int main() {

    // char myCh;

    // scanf("%c", &myCh);

    // if (myCh == 'a' || myCh == 'e' || myCh == 'i' || myCh == 'o' || myCh == 'u' || myCh == 'A' || myCh == 'E' || myCh == 'I' || myCh == 'O' || myCh == 'U') {
    //     printf("%c is vowel", myCh);
    // } else if(myCh >= 'a' && myCh <= 'z' || myCh >= 'A' && myCh <= 'Z') {
    //     printf("%c is consonant", myCh);
    // } else {
    //     printf("The character you input is unknown character");
    // }

    // int marks, i, count;   
    //  int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63};   
    //  for(marks = 50; marks <= 100; marks++) {   
    //      count = 0;   
    //      for(i = 0; i < 40; i++) {   
    //          if(total_marks[i] == marks) {   
    //              count++;   
    //          }   
    //      }   
    //      printf("Marks: %d Count: %d\n", marks, count);   
         
    //  }        

    int i, j;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63}; 
    
    int sortTotalMarks[40];


    for(i = 0; i < 40; i++) {
        
        for(j = 0; j < 40; j++) {
            if(total_marks[j] > total_marks[j+1]) {
            total_marks[j], total_marks[j+1] = total_marks[j+1], total_marks[j];    
            }
            
        }

        
    }
    
    printf("%d, ", total_marks[j]);

    return 0;
}