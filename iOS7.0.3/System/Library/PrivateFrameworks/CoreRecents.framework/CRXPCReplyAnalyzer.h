/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSError;

@interface CRXPCReplyAnalyzer : NSObject {

	NSDictionary* _dictionaryValue;
	NSError* _error;

}

@property (retain) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
@property (retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)analyzer;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)analyzeMethod:(id)arg1 reply:(id)arg2 ;
-(id)dictionaryValue;
-(void)analyzeXPCError;
-(void)analyzeXPCDictionary:(id)arg1 method:(id)arg2 ;
-(id)errorFromServiceReply:(id)arg1 ;
-(void)setDictionaryValue:(id)arg1 ;
-(id)error;
@end
