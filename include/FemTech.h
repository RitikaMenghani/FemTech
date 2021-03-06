#ifndef FEMTECH_H
#define FEMTECH_H

#include <stdio.h>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <math.h>
#include <limits.h>

//#include <thread>
//#include <mutex>
//#include <cmath>

#include "GlobalVariables.h"

#include "mpi.h"
#include "parmetis.h"

//-------------------------------------------------------------------------------------------
#define MAX_FILE_LINE 260
#define MAX_ELEMENT_TYPE_SIZE  10

int LineToArray(
    const bool IntOrFloat,
    const bool CheckLastVal,
    const int ColumnToStart,
    const int ColumnCount,
    const char *ConstLine,
    const char *Delim = " \t",
    void **Array = NULL);
bool ReadInputFile(const char *FileName);
bool PartitionMesh();
void GaussQuadrature3D(int element, int nGaussPoint, double *Chi,double *GaussWeights);
void ShapeFunctions();
void ShapeFunction_C3D8(int e, int gp, double *Chi);
void ShapeFunction_C3D4(int element, int intpt, int nGaussPoints, double *Chi);
void Assembly(char *operation);
void Mass3D();
void WriteVTU(const char* FileName);
void FreeArrays();

#endif
