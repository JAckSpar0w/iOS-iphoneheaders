/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDLinkReference : NSObject {

	unsigned long long mLinkIndex;
	unsigned long long mFirstSheetIndex;
	unsigned long long mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)firstSheetIndex;
-(unsigned long long)lastSheetIndex;
-(unsigned long long)linkIndex;
-(id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(bool)isEqualToLinkReference:(id)arg1 ;
-(void)setFirstSheetIndex:(unsigned long long)arg1 ;
-(void)setLastSheetIndex:(unsigned long long)arg1 ;
-(void)setLinkIndex:(unsigned long long)arg1 ;
-(bool)isWorkbookLevelReference;
@end
