
#include "Player.h"
#include "UnixBOARD.h"
#include <stdint.h>
// Define how big the player's inventory is.
#define INVENTORY_SIZE 4

//Player Struct

static struct PlayerItems {
    uint8_t item1;
    uint8_t item2;
    uint8_t item3;
    uint8_t item4;
}PlayerItems;

//static Vars
static struct PlayerItems *pitems;

/**
 * Adds the specified item to the player's inventory if the inventory isn't full.
 * @param item The item number to be stored: valid values are 0-255.
 * @return SUCCESS if the item was added, STANDARD_ERRROR if the item couldn't be added.
 */
int AddToInventory(uint8_t item)
{
    if (pitems->item1 == 0) {
        pitems->item1 = item;
        return SUCCESS;
    } else if (pitems->item2 == 0) {
        pitems->item2 = item;
        return SUCCESS;
    } else if (pitems->item3 == 0) {
        pitems->item3 = item;
        return SUCCESS;
    } else if (pitems->item4 == 0) {
        pitems->item4 = item;
        return SUCCESS;
    } else {
        return STANDARD_ERROR;
    }
}

/**
 * Check if the given item exists in the player's inventory.
 * @param item The number of the item to be searched for: valid values are 0-255.
 * @return SUCCESS if it was found or STANDARD_ERROR if it wasn't.
 */
int FindInInventory(uint8_t item)
{
    if (pitems->item1 == item) {
        return SUCCESS;
    } else if (pitems->item2 == item) {
        return SUCCESS;
    } else if (pitems->item3 == item) {
        return SUCCESS;
    } else if (pitems->item4 == item) {
        return SUCCESS;
    } else {
        return STANDARD_ERROR;
    }
}

/*
 * Sets the item values in the player's inventory to 0.
 */
void PlayerInit()
{
    pitems->item1 = 0;
    pitems->item2 = 0;
    pitems->item3 = 0;
    pitems->item4 = 0;
}


