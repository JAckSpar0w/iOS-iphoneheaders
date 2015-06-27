/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBBulletinDateLabelFactory : NSObject {

	NSMutableDictionary* _recycledLabelsByStyle;

}
+(id)sharedInstance;
-(void)recycleLabel:(id)arg1 ;
-(void)_purgeRecycledLabels;
-(id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(char)arg4 forStyle:(int)arg5 forType:(int)arg6 ;
-(int)styleForLabel:(id)arg1 ;
-(id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(char)arg4 forStyle:(int)arg5 ;
-(id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(char)arg4 forStyle:(int)arg5 ;
-(id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(char)arg4 forStyle:(int)arg5 ;
-(void)dealloc;
-(id)init;
@end
