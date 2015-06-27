/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSystemServiceDelegate <NSObject>
@optional
-(void)systemServicePrepareForShutdown:(id)arg1 andReboot:(char)arg2;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(char)arg2;
-(void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4;

@required
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5;
-(void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6;

@end
