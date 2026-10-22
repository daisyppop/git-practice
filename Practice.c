#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int score[5] = {85, 92, 68, 77, 55};
    int sum = 0;
    int max = score[0];
    int min = score[0];
    int pass = 0;
    int i;

     for (i = 0; i < 5; i++) {
        char grade;

        // 학점 판정
        if (score[i] >= 90) {
            grade = 'A';
        } else if (score[i] >= 80) {
            grade = 'B';
        } else if (score[i] >= 70) {
            grade = 'C';
        } else if (score[i] >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("student %d: Score: %d, Grade: %c\n", i + 1, score[i], grade);

        sum += score[i];

        if (score[i] > max) {
            max = score[i];
        }   
        if (score[i] < min) {
            min = score[i];
        }

        if (score[i] >= 60) {
            pass++;
        }


     }
        printf("Average: %.1f\n", sum / 5.0);
        printf("Max: %d\n", max);
        printf("Min: %d\n", min);
        printf("Number of Students who passed: %d\n", pass);
}
    