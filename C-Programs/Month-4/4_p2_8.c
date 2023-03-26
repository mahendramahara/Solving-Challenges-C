//      In an election between two candidates, one got 55% of the total valid votes, 20% of the votes were invalid. If the total number of votes was 7500, the number of valid votes that the other candidate got, was?  Write a C program 

#include <stdio.h>

int main(){
	int totalVotes = 7500, invalidVotes=0.2*7500, votesForA = 0.55*totalVotes, votesForB;
	printf("\n ======================= EVALUATION OF VOTES FOR THE SECOND CANDIDATE ====================== \n"); 
	printf("\n Total Votes = %d\n Invalid Votes = %d\n Votes for Candidate A = %d\n Votes for Candidate B = %d", totalVotes, invalidVotes, votesForA, totalVotes - invalidVotes - votesForA);
	return 0;
}
