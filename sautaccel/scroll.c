#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "deplacement.h"

/*
brief To scroll the background to the right .
param b the background
return Nothing
*/

void scrollingright(SDL_Rect *rect , SDL_Rect *positionFond )
     {

  

  if ((( rect->x>=640 )||(rect->x>=1280))&&(positionFond->x<3840))
{
 positionFond->x+=640;
rect->x=0 ; 

}

}
/**
* @brief To scroll the background to the left .
* @param b the background
* @return Nothing
*/
void scrollingleft(SDL_Rect *rect , SDL_Rect *positionFond )
     {

  

if ( rect->x==0)
{
 positionFond->x-=640;
rect->x=640-rect->x ; 

}

}

