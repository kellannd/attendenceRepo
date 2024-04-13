// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ATTENDENCEREPO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ATTENDENCEREPO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ATTENDENCEREPO_EXPORTS
#define ATTENDENCEREPO_API __declspec(dllexport)
#else
#define ATTENDENCEREPO_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ATTENDENCEREPO_API CattendenceRepo {
public:
	CattendenceRepo(void);
	// TODO: add your methods here.
};

extern ATTENDENCEREPO_API int nattendenceRepo;

ATTENDENCEREPO_API int fnattendenceRepo(void);
