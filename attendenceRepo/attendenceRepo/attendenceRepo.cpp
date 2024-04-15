// attendenceRepo.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "attendenceRepo.h"


// This is an example of an exported variable
ATTENDENCEREPO_API int nattendenceRepo=0;

// This is an example of an exported function.
ATTENDENCEREPO_API int fnattendenceRepo(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CattendenceRepo::CattendenceRepo()
{
    return;
}

ATTENDENCEREPO_API int testMe(int i) {
    return i + i;
}
