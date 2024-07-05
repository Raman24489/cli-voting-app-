#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define TOTAL_QUESTIONS 4
// these are bugs
/*full name 
invalid options
no special characters in name
after restaring code is not working */

typedef struct //structure to store questions data of the quiz.//
{
    char question[100];
    char answer_1[50];
    char answer_2[50];
    char answer_3[50];
    char answer_4[50];
    char correct_answer;
} quiz_question;// name for the defined struct.//


void displayInstructions(char name[]) // starting instruction for the quiz//.
{
    system("cls");
    printf("Welcome to Quiz about Computers.\n");
    printf("\nEnter your name : ");
    scanf("%s", name);
    system("cls");
    printf("\n%s, hit Space-Bar to start your quiz\n", name);
    while (getch() != ' ');
}

int main(void)
{   //declaring an array of quiz_question struct called quiz of length TOTAL_QUESTION=3.//
    quiz_question quiz[TOTAL_QUESTIONS];
    
    // creating quiz questions by using string copy(strcpy)function and answer members of this struct in the array//
    strcpy(quiz[0].question,"What does the ++ operator do?");
    strcpy(quiz[0].answer_1,"Add two to a number.");
    strcpy(quiz[0].answer_2,"Add one to a number.");
    strcpy(quiz[0].answer_3,"Substract one from a number.");
    strcpy(quiz[0].answer_4,"Substract two from a number.");
    quiz[0].correct_answer=2;

    strcpy(quiz[1].question,"What does a pointer varibale stores?");
    strcpy(quiz[1].answer_1,"A floating point number.");
    strcpy(quiz[1].answer_2,"A string.");
    strcpy(quiz[1].answer_3,"A memory address.");
    strcpy(quiz[1].answer_4,"An array.");
    quiz[1].correct_answer=3;

    strcpy(quiz[2].question,"How can we check if x does not equal y in C?");
    strcpy(quiz[2].answer_1,"x <> y.");
    strcpy(quiz[2].answer_2,"x != y.");
    strcpy(quiz[2].answer_3,"x===y.");
    strcpy(quiz[2].answer_4,"x DNE y.");
    quiz[2].correct_answer=2;

    strcpy(quiz[3].question,"what is the name of this corrent device?");
    strcpy(quiz[3].answer_1,"dell g 15");
    strcpy(quiz[3].answer_2,"lenovo h14.");
    strcpy(quiz[3].answer_3,"hp victus.");
    strcpy(quiz[3].answer_4,"mac book.");
    quiz[3].correct_answer=1;
   
    char name[50];
    int score=0;
    int answer;
    

    while(1)
    {
        displayInstructions(name);

          for(int i=0;i<TOTAL_QUESTIONS;i++)
        {
            system("cls");
            printf("question :: [%d/%d]    || Score :: %d\n",(i+1),TOTAL_QUESTIONS,score);
            printf("------------------------------------------\n\n");
            printf("%s\n",quiz[i].question);
            printf("1. %s\n",quiz[i].answer_1);
            printf("2. %s\n",quiz[i].answer_2);
            printf("3. %s\n",quiz[i].answer_3);
            printf("4. %s\n",quiz[i].answer_4);

            printf("choose your answer : ");
            scanf("%d",&answer);
            if(answer==quiz[i].correct_answer)
            {
                score++;
                
            }
            printf("\n\n\n");
        }
        printf("\n=================================================\n");
        printf("        %s you have scored '%d' out of %d",name,score,TOTAL_QUESTIONS);
        printf("\n==================================================\n");
        printf("[r] - Restart the quiz\n");
        printf("[q] - Quit the quiz\n");
        printf("choose your option :: ");
        while(1)
        {
            char option = getch();
            if(option=='r')
            {
                break;
                
            }
            else if(option=='q')
            {
                return 0;
            }
        }
    }
    return 0;
}


