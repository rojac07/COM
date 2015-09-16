// CoTruck.cpp : Implementation of CCoTruck
#include "stdafx.h"
#include "AnotherAtlCarServer.h"
#include "CoTruck.h"

/////////////////////////////////////////////////////////////////////////////
// CCoTruck


STDMETHODIMP CCoTruck::Start()
{
	MessageBox(NULL, "The truck as started.", 
		"CoTruck::Start() Says:", MB_OK);
	return S_OK;
}

STDMETHODIMP CCoTruck::Break()
{
	MessageBox(NULL, "The truck as stopped.", 
		"CoTruck::Start() Says:", MB_OK);
	return S_OK;
}