/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITableViewDataSource <NSObject>
@optional
-(long long)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@required
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
