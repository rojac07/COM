#include <windows.h>

void main()
{
 
    CoInitialize(NULL);
    IDispatch* pDisp = NULL;
    CLSID clsid;
    DISPID dispid;

    // Go look up the CLSID from the ProgID.
    CLSIDFromProgID(OLESTR("RawComCar.ScriptableCar"),&clsid);
    LPOLESTR str = OLESTR("CrankTunes");

    // Create object and get IDispatch 
    CoCreateInstance(clsid, NULL, CLSCTX_SERVER, IID_IDispatch, 
                                 (void**)&pDisp);

    // Get DISPID from object 
    pDisp->GetIDsOfNames(IID_NULL, &str,1, LOCALE_SYSTEM_DEFAULT, &dispid);

    // Build dispatch parameters.
    DISPPARAMS myParams = { 0, 0, 0, 0};

    // Call CrankTunes() using Invoke().
    pDisp->Invoke(dispid, IID_NULL, LOCALE_SYSTEM_DEFAULT,    
        DISPATCH_METHOD, &myParams, NULL, NULL, NULL);

    // Clean up.
    pDisp->Release();
    CoUninitialize();
}
