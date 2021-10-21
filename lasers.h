/** 
 * @file    lasers.h
 * @author  MENGHAO ZHAN (mzh99)      
 * @author  JOHN ELLIOTT (jel119)
 * @date    15 October 2021
 * 
 * @brief   This module defines the rows and columns of the led-mat in terms of the game.
 *          Also, it defines the bitmap system and functions for laser.c.
**/

#ifndef LASERS_H
#define LASERS_H

#include <stdint.h>
#include <stdbool.h>
#include "tinygl.h"
#include "ninja.h"


/*----------------------- | Defines | -----------------------*/

#define LASER_ROW_MIN 0
#define LASER_COL_MIN 0
#define LASER_ROW_MAX 6
#define LASER_COL_MAX 4
#define ON 1
#define OFF 0
#define MAX_COL 14
#define MAX_ROW 62

/*----------------------- | Structs | -----------------------*/

typedef struct {
    uint8_t rows;
    uint8_t cols;
} Laser_bitmap_t;


/*---------------------- | Functions | ----------------------*/

void lightup_boarders(void);

void change_laser_fire(Laser_bitmap_t);

void change_laser_flash(Laser_bitmap_t);

Laser_bitmap_t get_valid_bitmap(void);

bool laser_hit_ninja(Laser_bitmap_t, ninja_t*);


#endif
