void enigmestat_resolution(int rep)
{SDL_RWops*  fichier=NULL;
 char reponse;
 fichier=SDL_RWFromFile("reponses.txt","r");
if(fichier==NULL)
{ printf( "Warning: Unable to open file! SDL Error: %s\n", SDL_GetError() );
}
 else if(fichier!=NULL)
 { do{ reponse=fgets(fichier);}
   while((reponse!=EOF)&&(reponse!=rep));
   if(reponse==rep)
    return(1);
  else return(0);
SDL_RWclose(fichier);
}


