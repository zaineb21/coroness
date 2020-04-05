
#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
typedef struct{
int duree;
int reponse;
SDL_Rect image;
}enigme;

void enigmestat_resolution(int rep);

#endif // FUNCTIONS_H
