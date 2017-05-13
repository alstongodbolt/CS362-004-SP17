#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <math.h>

int testcouncil_room(struct gameState *post, int p){
    int i, r;
	struct gameState pre;
	memcpy(&pre, post, sizeof(struct gameState));
    int currentPlayer = whoseTurn(post);

	//r = council_room1(&pre, p);
	for(i = 1; i < 4; i++){
		drawCard(p, &pre);
	}
	pre.numBuys++;
	/*for(i = 0; i < pre.numPlayers; i++)
	{
		if( i == whoseTurn(&pre))
		{
			drawCard(p, &pre);
		}
	}*/
    return 0;
}
int main()
{
	SelectStream(2);
	int currentPlayer;
	PutSeed(3);
	int n, i, p;
	struct gameState G;
    for(n = 0; n < 1000; n++)
	{
		for(i = 0; i < sizeof(struct gameState); i++)
		{
			((char*)&G)[i] = floor(Random() * 256);
		}
        p = floor(Random() * 2);
        G.deckCount[p] = floor(Random() * MAX_DECK);
        G.discardCount[p] = floor(Random() * MAX_DECK);
        G.handCount[p] = floor(Random() * MAX_HAND);
		testcouncil_room(&G, p);
	}
    return 0;
}
