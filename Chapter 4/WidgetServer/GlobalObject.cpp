// GlobalObject.cpp : Implementation of CGlobalObject
#include "stdafx.h"
#include "WidgetServer.h"
#include "GlobalObject.h"

/////////////////////////////////////////////////////////////////////////////
// CGlobalObject


STDMETHODIMP CGlobalObject::SomeMethod()
{
	MessageBox(NULL, "SomeMethod() has been called", 
		"AppObject says:", MB_OK);
	return S_OK;
}
