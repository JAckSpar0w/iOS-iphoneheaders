/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(void)dealloc;
-(id)description;
-(bool)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(id)folderID;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(void)setFolderID:(id)arg1 ;
-(id)_folderID;
@end
