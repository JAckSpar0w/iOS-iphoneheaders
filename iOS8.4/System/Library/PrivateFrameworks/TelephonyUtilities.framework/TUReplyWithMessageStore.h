/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TUReplyWithMessageStore : NSObject
-(void)dealloc;
-(int)count;
-(id)init;
-(id)_defaultRepliesForSending:(BOOL)arg1 ;
-(id)customReplies;
-(id)_cannedRepliesForSending:(BOOL)arg1 ;
-(id)cannedReplies;
-(id)defaultReplies;
-(id)cannedReplyActionSheetOptions;
-(id)cannedRepliesForSending;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
@end
