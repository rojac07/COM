// Foo.cpp : Implementation of CFoo
#include "stdafx.h"
#include "ATLVersionedInterfaceServer.h"
#include "Foo.h"

/////////////////////////////////////////////////////////////////////////////
// CFoo


STDMETHODIMP CFoo::A()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Method A!", "Foo Class", MB_OK);
	return S_OK;
}

STDMETHODIMP CFoo::B()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Method B!", "Foo Class", MB_OK);
	return S_OK;
}

STDMETHODIMP CFoo::C()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "Method C!", "Foo Class", MB_OK);
	return S_OK;
}
