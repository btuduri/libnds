/*---------------------------------------------------------------------------------
  $Id: exceptions.c,v 1.4 2006-06-19 19:12:01 wntrmute Exp $

  Copyright (C) 2005
  	Dave Murphy (WinterMute)

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any
  damages arising from the use of this software.

  Permission is granted to anyone to use this software for any
  purpose, including commercial applications, and to alter it and
  redistribute it freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you
     must not claim that you wrote the original software. If you use
     this software in a product, an acknowledgment in the product
     documentation would be appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and
     must not be misrepresented as being the original software.
  3. This notice may not be removed or altered from any source
     distribution.

  $Log: not supported by cvs2svn $
  Revision 1.3  2006/06/19 18:21:39  wntrmute
  corrected prototypes

  Revision 1.2  2006/06/19 14:09:37  wntrmute
  split default exception handler into separate file
  correct prototypes

  Revision 1.1  2006/06/18 21:16:26  wntrmute
  added arm9 exception handler API


---------------------------------------------------------------------------------*/

#include <nds/jtypes.h>
#include <nds/arm9/exceptions.h>

//---------------------------------------------------------------------------------
void setExceptionHandler(VoidFunctionPointer handler) {
//---------------------------------------------------------------------------------
	exceptionStack = (u32)0x23EFFFC ;
	EXCEPTION_VECTOR = enterException ;
	*exceptionC = handler ;
}

