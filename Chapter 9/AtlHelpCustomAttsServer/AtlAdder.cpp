// AtlAdder.cpp : Implementation of CAtlAdder
#include "stdafx.h"
#include "AtlHelpCustomAttsServer.h"
#include "AtlAdder.h"

/////////////////////////////////////////////////////////////////////////////
// CAtlAdder


STDMETHODIMP CAtlAdder::Add(int x, int y, int *answer)
{
	// TODO: Add your implementation code here
	*answer = x + y;
	return S_OK;
}
