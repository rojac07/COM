
// The helper macros.
#ifdef MYCUSTOMDLL_EXPORTS
#define MYCUSTOMDLL_API __declspec(dllexport)
#else
#define MYCUSTOMDLL_API __declspec(dllimport)
#endif

// ***** Internal symbols. ***** //

// A basic structure.
typedef struct _CAR
{
	char* make;
	char* color; 
} CAR;

// A structure containing another structure.
typedef struct _CAR2
{
	CAR theCar;
	char* petName; 
} CAR2;


// A class to be exported.
class MYCUSTOMDLL_API CMiniVan
{
public:
	CMiniVan(){m_numbKids = 52;}
	int DisplayNumberOfKids() 
	{ return m_numbKids;}

private:
	int m_numbKids;
};

//////////////////////////////////////

// Prototypes for basic functions.
extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y);
extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size);

// Prototypes for struct marshaling.
extern "C" MYCUSTOMDLL_API void DisplayBetterCar(CAR2* theCar);
extern "C" MYCUSTOMDLL_API void GiveMeThreeBasicCars(CAR** theCars);

// Prototypes for class marshaling.
extern "C" MYCUSTOMDLL_API CMiniVan* CreateMiniVan();
extern "C" MYCUSTOMDLL_API void DeleteMiniVan(CMiniVan* obj);