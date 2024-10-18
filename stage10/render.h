/*
Authours: Alexander Pham and Kushal Saini

Course: COMP 2659 - 001 

File name: render.h

Instructor: Paul Pospisil

*/
#ifndef RENDER_H
#define RENDER_H

#include <osbind.h>
#include <stdio.h>
#include "model.h"
#include "events.h"
#include "RASTER.H"
#include "sprites.h"
#include "font.h"
#include "menu.h"
#include "endGame.h"

/*

Name: renderRocketship

Purpose: render the rocketship to the screen

Details: calls plotBitmap32 to render the rocketship onto the screen, where it is centered
         on the screen and at the bottom of the screen. 

Parameters:

    const Rocketship *rocketship - rocketship to be rendered 

    UINT32 *base - start of the screen frame buffer

*/
void renderRocketship(const Rocketship *rocketship, UINT32 *base);

/*

Name: clearRocketship

Purpose: clear the rocketship after it moves on the screen

Parameters:

    const Rocketship *rocketship - rocketship to be cleared 

    UINT32 *base - start of the screen frame buffer

*/
void clearRocketship(const Rocketship *rocketship, UINT32 *base);

/*

Name: renderAsteroids

Purpose: render asteroids onto the screen

Details: there are 20 max asteroids to be rendered, goes through the array (size 20) to
         render each asteroid on their own row. 

Parameters:

    const Asteroid *asteroids - asteroids to be rendered
    
    UINT8 *base - start of the screen frame buffer

*/
void renderAsteroids(const Asteroid *asteroids, UINT8 *base);

/*

Name: clearAsteroids

Details: clear the asteroids after they are rendered so no duplicates appear 

Parameters: 

    const Asteroid *asteroids - asteroids to be cleared
    
    UINT8 *base - start of the screen frame buffer

*/
void clearAsteroids(const Asteroid *asteroids, UINT8 *base);

/*

Name: renderScoreBox

Purpose: render the scorebox to the screen

Details: calls printString to display "Score:" then printNumber to display the score of player

Parameters:

    const Model *model - render the scorebox from the model
    
    UINT16 *base - start of the screen frame buffer

*/
void renderScoreBox(const Model* model, UINT8 *base);

/*

/*

Name: renderCheckeredLine 

Purpose: render a checkered line at the top of the screen

Details: calls plotBitmap32 to render the checkered line at the top of the screen

Parameter:

    UINT32 *base - start of the screen frame buffer

*/
void renderCheckeredLine(UINT32 *base);

/*

Name: renderBackground

Purpose: render a black background of the game while in gameplay

Details: calls plotRectangle to fill in the background (all black)

Parameter:

     UINT8 *base - start of the screen frame buffer

*/
void renderBackground(UINT8 *base);

/*

Name: render

Purpose: render the entire model

Details: call all the members of the model to be rendered onto the screen

Parameters:

    Model *model - the model structure that is to be rendered

    void *base - the start of the frame buffer

*/
void render(Model *model, void *base);

/*

Name: renderNextRound

Purpose: render the entire model for the next round of the game

Details: call all the members of the model to be rendered after rocketship 
         hits the top of the screen and reset back to the start

Parameters:

    Model *model - the model structure that is to be rendered

    void *base - the start of the frame buffer

*/
void renderNextRound(Model *model, void *base);

/*

Name: disableCursor 

Purpose: disable the cursor when running the game using the terminal command

*/
void disableCursor();

/*

    Function: renderSplashScreen

    Purpose: to render the splash screen 

    Parameters:

        - UINT32* base - the start of the frame buffer

*/
void renderSplashscreen(UINT32* base);

/*

    Function: renderGameOver

    Purpose: render the game over screen

    Parameters:

        - void* base - the start of the frame buffer

        - UINT8 currScore - the score to display at the end of game

*/
void renderGameOver(void* base, UINT8 currScore);

/*

    Function: renderMouse

    Purpose: plot the mouse bitmap onto the screen at an x and y

    Parameters:

        - UINT16* base - start of the frame buffer

        - int x - top left corner x location

        - int y - top left corner y location

*/
void renderMouse(UINT16* base, int x, int y);

/*

    Function: saveMouseBackground

    Purpose: save the background of the mouse

    Parameters:

        - UINT16* base - start of the frame buffer

        - int x - top left corner x location

        - int y - top left corner y location

*/
void saveMouseBackground(UINT16* base, int x, int y);

/*

    Function: restoreMouseBackground

    Purpose: restore the background of the mouse that was saved

    Parameters:

        - UINT16* base - start of the frame buffer

        - int x - top left corner x location

        - int y - top left corner y location

*/
void restoreMouseBackground(UINT16* base, int x, int y);

#endif 