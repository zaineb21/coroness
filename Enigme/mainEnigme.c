#include <stdio.h>
#include <stdlib.h>
#include "Enigme.h"

#define LARGEURECRAN 640
#define HAUTEURECRAN 480
#define TITREECRAN "Ma fenetre SDL"
#define ICONE "icon.png"

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    char nomImage[] = "icon.png";
    SDL_Rect positionImage = {0,0};
    int continuer = 1;
    SDL_Event event;

    ecran = initEcran(TITREECRAN, ICONE,LARGEURECRAN , HAUTEURECRAN);

    while(continuer)
    {
        SDL_PollEvent(&event);
        continuer = attendreAvantDeQuitter(event.type);
        backgroundColorSurface(ecran, 0, 0, 0);
        blitImageSurSurface(ecran, nomImage, positionImage);
        SDL_Flip(ecran);
        SDL_Delay(30);
    }
    SDL_Quit();
    return 0;
}
