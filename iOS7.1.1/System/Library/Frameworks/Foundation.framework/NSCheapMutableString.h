/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS44* contents;
	fields flags;
	unsigned long long numCharacters;
	void* _reserved;

}
-(const char*)cString;
-(unsigned long long)cStringLength;
-(unsigned long long)fastestEncoding;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3 isUnicode:(bool)arg4 ;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(void)finalize;
@end
