/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:13:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFileCopierDelegate.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)compressPath:(id)arg1 toPath:(id)arg2 ;
@end
