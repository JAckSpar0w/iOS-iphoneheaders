/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/NSCopying.h>

@class AVItemErrorLogInternal, NSArray;

@interface AVItemErrorLog : NSObject <NSCopying> {

	AVItemErrorLogInternal* _playerItemErrorLog;

}

@property (nonatomic,readonly) NSArray * events; 
-(id)initWithLogArray:(id)arg1 ;
-(NSArray *)events;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
@end
