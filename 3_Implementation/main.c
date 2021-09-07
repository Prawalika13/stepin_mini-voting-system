#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Lakshmi mittal"
#define CANDIDATE2 "Georg W Bush"
#define CANDIDATE3 "Tony Blair"
#define CANDIDATE4 "Donald Truimph"
#define CANDIDATE5 " Gautam Adani"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, votesCount5=0, spoiledtvotes=0;

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", CANDIDATE5);
printf("\n 6. %s", "None of These");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: votesCount5++; break;
    case 6: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE1, votesCount2);
printf("\n %s - %d ", CANDIDATE1, votesCount3);
printf("\n %s - %d ", CANDIDATE1, votesCount4);
printf("\n %s - %d ", CANDIDATE1, votesCount5);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4 && votesCount1 >votesCount5)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1 && votesCount2 >votesCount5)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1 && votesCount3 >votesCount5)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3 && votesCount4 >votesCount5)
    printf("[%s]",CANDIDATE4);
    else if(votesCount5>votesCount1 && votesCount5>votesCount2 && votesCount5 >votesCount3 && votesCount5 >votesCount4)
    printf("[%s]",CANDIDATE5);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2020 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}