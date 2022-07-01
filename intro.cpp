#include<SDL2/SDL.h>
#include<stdio.h>
//define the screen size
#define width 640
#define height 480
int main(int argc,char* args[]){
	SDL_Window* window=NULL;
	SDL_Surface* surface=NULL;
	if (SDL_Init(SDL_INIT_VIDEO)<0){
		printf("Failed %s\n",SDL_GetError());
	}else{
		window=SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width,height, SDL_WINDOW_SHOWN);
		if (window==NULL){
			printf("Cannot create window %s\n",SDL_GetError());
		}
		else{
			surface=SDL_GetWindowSurface(window);
			//fill it white
		  SDL_FillRect(surface,NULL,SDL_MapRGB(surface->format,0xFF, 0xFF, 0xFF));
			SDL_UpdateWindowSurface(window);
			SDL_Delay(2000);
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();


	return 0;
}
