#ifndef _SCANNER_H_
#define _SCANNER_H_

#include "inc.h"

/*
 * EXAMPLE OF USAGE
 *
	
	Scanner *scan = new Scanner(); // create new scanner
	scan->searchPattern("00 00 00 00 00 00 ? 00 00 00"); // accepts wild cards ?
	DWORD address = scan->result;

 */

#define INRANGE(x,a,b)    (x >= a && x <= b) 
#define getBits( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define getByte( x )    (getBits(x[0]) << 4 | getBits(x[1]))

class Scanner {

public:
	DWORD result;

private:
	VOID CodeSectionInfo(IMAGE_DOS_HEADER* THIS_IMAGE_DOS_HEADER, DWORD* outCodeSectionStart, DWORD* outCodeSectionSize);

	BOOL dwVALID(DWORD dwAddy, MEMORY_BASIC_INFORMATION &mbi);
	BOOL dwREAD(DWORD dwAddy);
	BOOL isREGION(DWORD dwAddy);

	BOOL CHECK(const BYTE* pData, const BYTE* bMask, const char* szMask);

public:

	BOOL searchPattern( DWORD rangeStart, DWORD rangeEnd, const char* pattern );
};

#endif // _SCANNER_H_