// Random test 1
// Runs wonky.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "dominion.h"
#include "rngs.h"

#define TOTAL_TESTS 1000

int main(){

	// Used from test draw examples
	int i, seed, p, discardCount, handCount, position;
 	int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};

	struct gameState G;
	srand(time(NULL));


	printf("Start the test for council_room\n");

	for (i = 0; i < TOTAL_TESTS; i++)
		{
			seed = rand();
			p = (rand() % 2) +2;
			handCount = (rand() % MAX_DECK);
			discardCount = (rand() % MAX_DECK);
			handCount = (rand() % MAX_HAND);
			position = (rand() % MAX_HAND); // pick a random position in

			initializeGame(p, k, seed, &G);

			G.hand[0][position] = council_room;

			playCard(position, 1, 1, 1, &G);
			shuffle(p, &G);
			supplyCount(2, &G);
			if(p < 2){
				printf("Need more players!");
				badPlayers++;
			}
			printf("Position: %d\n", position);
			printf("handCount: %d\n", handCount);
			printf("Discard: %d\n", discardCount);


		}

	printf("Test Completed\n");
	printf("Unsupported players: %d\n", badPlayers);

}