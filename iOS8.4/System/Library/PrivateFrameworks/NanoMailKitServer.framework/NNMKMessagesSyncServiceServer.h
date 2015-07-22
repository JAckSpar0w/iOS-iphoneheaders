/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;
@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKMessagesSyncServiceServerDelegate>)arg1 ;
-(id<NNMKMessagesSyncServiceServerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)sendInitialMessagesSync:(id)arg1 ;
-(id)sendMoreMessages:(id)arg1 ;
-(id)sendMoreMessagesForConversation:(id)arg1 ;
@end
