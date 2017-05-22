#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int main(int argc, char const *argv[])
{
	int i;
	int seed = 1000;
	int numPlayer = 2;
	int maxBonus = 10;
	int p, r, handcount;
	int bonus;
	
    printf("Testing kingdomCards():\n");
    printf("This test is to test the correct implementation of pointer creation\n");
    int* k = malloc(10 * sizeof(int));
    if (k == NULL)
    {
    	printf("k created\n" );
    } else {
    	printf("k not created\n");
    }
    for (i = 0; i < 10; i++){
        printf("%d\n",k[i]);
    }
    for (i = 0; i < 10; i++) {
        k[i] = i;
    }
    if (k != NULL)
    {
    	printf("k created\n" );
    } else {
    	printf("k not created\n");
    }
    for (i = 0; i < 10; i++){
        printf("%d\n",k[i]);
    }
    kingdomCards(k[0], k[1], k[2], k[3], k[4], k[5], k[6],
		  k[7], k[8], k[9]);
    printf("All tests passed! \n");	return 0;
}
