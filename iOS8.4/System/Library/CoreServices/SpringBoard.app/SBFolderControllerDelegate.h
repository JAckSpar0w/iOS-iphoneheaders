/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBFolderControllerDelegate <NSObject>
@optional
-(void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;

@required
-(Class)controllerClassForFolder:(id)arg1;
-(BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3;
-(BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
-(BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
-(void)folderControllerShouldClose:(id)arg1;
-(void)folderControllerShouldBeginEditing:(id)arg1;
-(void)folderControllerDidEndScrolling:(id)arg1;

@end
