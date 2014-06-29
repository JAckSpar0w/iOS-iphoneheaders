/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@class DADClient, NSString;

@interface DADClientDelegate : DADisableableObject {

	DADClient* _client;
	NSString* _accountID;
	bool _finished;
	bool _consumerCancelled;
	NSString* _delegateID;

}

@property (readonly) NSString * delegateID;              //@synthesize delegateID=_delegateID - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)disable;
-(id)delegateID;
-(void)userRequestsCancel;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 ;
@end
