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

float TailleCI = ((3*w*h)*fps*durationMovie);
printf("La taille : %f\n", TailleCI);

float TailleBW =((w*h*1)*fps*durationCredits);
printf("La taille : %f\n", TailleBW);

float TailleTot = TailleBW + TailleCI ;
 
printf("La taille Totale de la video %f\n", TailleTot);

 if (strcmp(unit, "byte") == 0) {
        return (float)TailleTot; 
    } else if (strcmp(unit, "ko") == 0) {
        return (float)TailleTot / 1024; 
    } else if (strcmp(unit, "mo") == 0) { 
        return (float)TailleTot / 1024 / 1024;
    } else if (strcmp(unit, "go") == 0) {
        return (float)TailleTot / 1024 / 1024 / 1024;
    }

   return TailleTot ;
}
