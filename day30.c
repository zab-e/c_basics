#include <stdio.h>

int main () {
    int voters = 0;
    int votes[3] = {0};
    int candidate_no = 0;
    printf("How many voters are Voting today?: ");
    scanf("%d", &voters);
    
    for (int i = 1; i <= voters; i++)
    {
        
        
        printf("Candidates:\n");
        printf("1. = Charlie\n");
        printf("2. = Bob\n");
        printf("3. = Alice\n");
        printf("Choose Candidate number: ");
        scanf("%d", &candidate_no);
        if (candidate_no > 3 || candidate_no < 1) 
        {
        printf("Invalid candidate number\n");
        continue;

        }
        if (candidate_no == 1)
        {
            votes[0]++;
            
            
        }
        if (candidate_no == 2)
        {
            votes[1]++;
            
        }
        if (candidate_no == 3)
        {
            votes[2]++;
            
        }
      
        
        
    }
    printf("Here are the results:\n");
    printf("Charlie scored %d\n", votes[0]);
    printf("Bob scored %d\n", votes[1]);
    printf("Alice scored %d\n", votes[2]);

    
    return 0;
}