/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <askpermissiond/RequestTransportProtocol.h>

@interface CloudTransport : NSObject <RequestTransportProtocol>
-(id)_database;
-(void)_queryForNewRequestsWithFamilyCircle:(id)arg1 lastPollDate:(id)arg2 recordCursor:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)propagateNewRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)propagateStatusUpdateForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pollForNewRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pollForNewResponses;
-(id)init;
@end
