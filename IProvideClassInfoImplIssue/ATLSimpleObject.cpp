// ATLSimpleObject.cpp : Implementation of CATLSimpleObject

#include "pch.h"
#include "ATLSimpleObject.h"

#include <comdef.h>

// CATLSimpleObject



STDMETHODIMP CATLSimpleObject::Method1(BSTR str, BSTR* ret)
{
    _bstr_t bstrt = str;
    _bstr_t s = L"Hello " + bstrt;
    *ret = s.Detach();
    return S_OK;
}
