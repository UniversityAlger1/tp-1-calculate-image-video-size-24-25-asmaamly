#include <string.h>
#include "config/video.h"
#include <stdio.h>
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {

float TailleTot = ((3*(w*h*8))*fps*durationMovie)+((w*h*1)*fps*durationCredits);
 
printf("La taille Totale de la video en bits: %d\n", TailleTot);

 if (strcmp(unit, "bt") == 0) {
        return (float)TailleTot; 
    } else if (strcmp(unit, "ko") == 0) {
        return (float)TailleTot / 8 / 1024; 
    } else if (strcmp(unit, "mo") == 0) { 
        return (float)TailleTot / 8 / 1024 / 1024;
    } else if (strcmp(unit, "go") == 0) {
        return (float)TailleTot / 8 / 1024 / 1024 / 1024;
    }

   return 0 ;
}
