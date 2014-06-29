/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
-(SCD_Struct_NS7)_cfStreamError;
-(unsigned long long)_cfTypeID;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(bool)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(bool)hasBytesAvailable;
@end
