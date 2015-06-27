/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface GEOPhoneNumberMUIDMapper : NSObject {

	NSObject*<OS_dispatch_queue> _writeQ;
	NSMutableArray* _uniquePhoneNumbers;
	NSMutableDictionary* _phoneNumberMuidMapping;

}
-(void)dealloc;
-(void)_save;
-(id)initWithMappingFilePath:(id)arg1 ;
-(char)getMuid:(out unsigned long long*)arg1 providerId:(out int*)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)_pruneToSize:(unsigned)arg1 ;
@end
