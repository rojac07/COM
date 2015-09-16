// Drawer.cpp : Implementation of CDrawer
#include "stdafx.h"
#include "WidgetServer.h"
#include "Drawer.h"

/////////////////////////////////////////////////////////////////////////////
// CDrawer


STDMETHODIMP CDrawer::DrawALine(MYPOINT *p1, MYPOINT *p2)
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Drawing a line...", "Drawer", MB_OK);
	return S_OK;
}
