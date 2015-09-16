// JetPlane.cpp : Implementation of CJetPlane
#include "stdafx.h"
#include "AtlCarServer.h"
#include "JetPlane.h"

/////////////////////////////////////////////////////////////////////////////
// CJetPlane


STDMETHODIMP CJetPlane::TakeOff()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Taking off!", "IJet", MB_OK);
	return S_OK;
}
