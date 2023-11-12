#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World");

    for(int i = 0; i < 11; i++){
        printf("%d\n", i);
    }


    
            }
        }if (!validSpell) { 
            printf("%s loses! Spell not found in the list.\n", (currentPlayer == 1) ? player1Name : player2Name);
            gameOver = true;
        } else if (!isSpellRepeated(spell, usedSpells, numUsedSpells)) {
            if (numUsedSpells > 0 && !doSpellsMatch(usedSpells[numUsedSpells - 1], spell)) {
                printf("%s wins! Spells do not match.\n", (currentPlayer == 1) ? player2Name : player1Name);
                gameOver = true;
            } else {
                usedSpells[numUsedSpells] = strdup(spell);
                numUsedSpells++;

                if (numUsedSpells == numSpells) {
                    printf("%s wins! All spells used.\n", (currentPlayer == 1) ? player1Name : player2Name);
                    gameOver = true;
                }
            }
        } else {
            printf("%s wins! 

    return 0;
}