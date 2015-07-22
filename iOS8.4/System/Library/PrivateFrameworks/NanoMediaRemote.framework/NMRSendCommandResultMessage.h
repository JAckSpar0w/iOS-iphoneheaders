/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandResultMessageProtobuf, NSArray, NSDate, NSString;

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandResultMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned errorCode; 
@property (nonatomic,readonly) NSArray * handlerReturnStatuses; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 ;
-(unsigned)errorCode;
-(id)initWithProtobufData:(id)arg1 ;
-(id)protobufData;
-(id)_initWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 ;
-(NSArray *)handlerReturnStatuses;
-(NSDate *)serializationDate;
@end
