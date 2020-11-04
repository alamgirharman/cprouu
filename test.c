#include <stdio.h>

int main() {

    // int ftMarks, stMarks, finalMarks;

    // double totalMarks;

    // ftMarks = 80;
    // stMarks = 74;
    // finalMarks = 97;

    // totalMarks = ftMarks / 4.0 + stMarks / 4.0 + finalMarks / 2.0;

    // printf("%0.0lf\n", totalMarks);

    // ...................................................

    // int myArr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // int myArr2[10];
    
    // int i, j;

    // for(i = 0, j = 9; i < 10; i++, j--) {
    //     myArr2[j] = myArr[i];
    // }

    // for(i = 0; i < 10; i++) {
    //     myArr[i] = myArr2[i];
    // }
    

    // for(i = 0; i < 10; i++) {
    //     printf("%d\n", myArr[i]);
    // }

    // ...................................................


        // int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},   
        // st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},   
        // final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};   
        // int i;  

        // double totalMarks[40];

        // for(i = 0; i < 40; i++) {
        //     totalMarks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
        // }
   
        // for(i = 1; i <= 40; i++) {
        //     if(i < 10) {
        //         printf("Roll No: 0%d Total marks: %0.0lf\n", i, totalMarks[i-1]);
        //     } else {
        //         printf("Roll No: %d Total marks: %0.0lf\n", i, totalMarks[i-1]);
        //     }
        // }

        // for(i = 1; i <= 40; i++) {
        //     if(i < 10) {
        //         printf("Roll No: 0%d Total marks: %0.0lf\n", i, totalMarks[i-1]);
        //     } else {
        //         printf("Roll No: %d Total marks: %0.0lf\n", i, totalMarks[i-1]);
        //     }
        // }

        
        // for(i = 1; i <= 40; i++) {
        //     printf("%0.0lf, ", totalMarks[i-1]);
        // }

        // int mark, count;
        // i = 0; 

        // int tMarks[] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 63, 66, 77, 71, 67, 65, 77, 63};

        // for(mark = 1; mark <= 100; mark++) {
        //     count = 0;

        //     for(i = 0; i < 40; i++) {
        //         if(tMarks[i] == mark) {
        //             count++;
        //         }
        //     }
        //     printf("Marks: %d Count: %d\n", mark, count);
        // }




        //unsolved problem .............................................


            // int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};    
            // int i, j, temp;   

            // for(i = 0, j = 9; i < 10; i++, j--) {  

            //     temp = ara[j];  
 
            //     ara[j] = ara[i];  

            //     ara[i] = temp;   

            //     printf("%d\n", ara[i]);
            // }  





            // int tMarks[] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 63, 66, 77, 71, 67, 65, 77, 63};

            // int marks_count[101], i;

            // for(i = 0; i < 101; i++) {
            //     marks_count[i] = 0;
            // }

            // for(i = 0; i < 40; i++) {
            //     marks_count[tMarks[i]]++;
            //     printf("%d\n", marks_count[tMarks[i]]);

            // }

            // // for(i = 50; i <= 100; i++) {
            // //     printf("Marks: %d Count: %d\n", i, marks_count[i]);
            // // }




            // int tMarks[] = {5, 6, 8, 5, 7, 8, 9, 5, 9, 10};

            // int marks_count[101], i;

            // for(i = 0; i < 101; i++) {
            //     marks_count[i] = 0;
            // }

            // for(i = 0; i < 10; i++) {
            //     marks_count[tMarks[i]]++;
            //     printf("%d\n", marks_count[tMarks[i]]);

            // }

            // for(i = 0; i <= 11; i++) {
            //     printf("Marks: %d Count: %d\n", i, marks_count[i]);
            // }


    char ch = "D";
    char result;
    //scanf("%s", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        result = 'a' + (ch - 'A');
    } else if(ch >= 'a' && ch <= 'z') {
        result = 'A' + (ch - 'a')
    }


    printf("%s\n", result);

            return 0;
}