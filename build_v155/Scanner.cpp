#include "Scanner.h"

VOID Scanner::CodeSectionInfo(IMAGE_DOS_HEADER* THIS_IMAGE_DOS_HEADER, DWORD* outCodeSectionStart, DWORD* outCodeSectionSize) {
	IMAGE_NT_HEADERS* e_lfanewPtr = (IMAGE_NT_HEADERS*)((DWORD)THIS_IMAGE_DOS_HEADER + THIS_IMAGE_DOS_HEADER->e_lfanew);
	*outCodeSectionStart = (DWORD)THIS_IMAGE_DOS_HEADER + e_lfanewPtr->OptionalHeader.BaseOfCode;
	*outCodeSectionSize = e_lfanewPtr->OptionalHeader.SizeOfCode;
}

BOOL Scanner::CHECK(const BYTE* pData, const BYTE* bMask, const char* szMask)
{ // credits to Kitterz
	for(; *szMask; ++szMask, ++pData, ++bMask)
		if(*szMask != '?' && *pData != *bMask )
			return false;

	return (*szMask) == NULL;
}

BOOL Scanner::searchPattern( DWORD rangeStart, DWORD rangeEnd, const char* pattern )
{ // accepts IDA style signatures - credits to learn_more of UKC
	const char* pat = pattern;
	DWORD firstMatch = 0;
	for( DWORD pCur = rangeStart; pCur < rangeEnd; pCur++ )
	{
		_try {
			if( !*pat ) return firstMatch;
			if( *(PBYTE)pat == '\?' || *(BYTE*)pCur == getByte( pat ) ) {
				if( !firstMatch )
					firstMatch = pCur;
				if( !pat[2] ) {
					this->result = firstMatch;
					return TRUE;
				}
				if( *(PWORD)pat == '\?\?' || *(PBYTE)pat != '\?' )
					pat += 3;
				else
					pat += 2;    //one ?
			} else {
				pat = pattern;
				firstMatch = 0;
			}
		}
		_except(EXCEPTION_EXECUTE_HANDLER) {


		}
	}
	return FALSE;
}