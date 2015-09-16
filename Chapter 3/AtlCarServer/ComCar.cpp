// ComCar.cpp : Implementation of CComCar
#include "stdafx.h"
#include "AtlCarServer.h"
#include "ComCar.h"

/////////////////////////////////////////////////////////////////////////////
// CComCar


STDMETHODIMP CComCar::SpeedUp(long delta)
{
	// Speed up.
	m_currSpeed = m_currSpeed + delta;	 
	MessageBox(NULL,"Speeding Up", "ATL ComCar", MB_OK);
	return S_OK;
}

STDMETHODIMP CComCar::TurboBlast()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Turbo blast!!", "ATL ComCar", MB_OK);
	return S_OK;
}

STDMETHODIMP CComCar::TurnOnRadio(RADIOTYPE make)
{
	// Play tunes.
	switch(make)
	{
	case EIGHT_TRACK:
		MessageBox(NULL, "Upgrade your system!", "ATL ComCar", MB_OK);
	break;

	case CD:
		MessageBox(NULL, "Good choice...", "ATL ComCar", MB_OK);
	break;

	case AM_RADIO:
		MessageBox(NULL, "Talk / sports radio on!", "ATL ComCar", MB_OK);
	break;

	case FM_RADIO:
		MessageBox(NULL, "Top 40 crap on...", "ATL ComCar", MB_OK);
	break;
	}

	return S_OK;
}
