#include "FemTech.h"

void FreeArrays()
{
    if (coordinates != NULL){
        free(coordinates);
        coordinates = NULL;
    }
    
    if (connectivity != NULL){
        free(connectivity);
        connectivity = NULL;
    }
    
    //free(mid);
    
    if (pid != NULL){
        free(pid);
        pid = NULL;
    }
    
    if (eptr != NULL){
        free(eptr);
        eptr = NULL;
    }
	
	if (shp != NULL){
		free(shp);
		shp = NULL;
	}
	
	if (dshp != NULL){
		free(dshp);
		dshp = NULL;
	}
	if (dsptr != NULL) {
		free(dsptr);
		dsptr = NULL;
	}
	if (gptr != NULL) {
		free(gptr);
		gptr = NULL;
	}
    
    if (ElementType != NULL){
        for (int i = 0; i < nelements; i++){
            free(ElementType[i]);
        }
        free(ElementType);
        ElementType = NULL;
    }
}
