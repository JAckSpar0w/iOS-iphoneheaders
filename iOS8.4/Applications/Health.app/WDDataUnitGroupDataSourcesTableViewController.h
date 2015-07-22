/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Health/HKSwitchTableViewCellDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class HKDataCategory, HKDataUnitGroup, WDControllerManager, HKHealthStore, WDDataProviderOrderController, NSMutableArray, NSArray, NSMutableDictionary, WDTitledIconView;

@interface WDDataUnitGroupDataSourcesTableViewController : UITableViewController <HKSwitchTableViewCellDelegate, UIViewControllerRestoration> {

	HKDataCategory* _dataCategory;
	HKDataUnitGroup* _dataUnitGroup;
	WDControllerManager* _controllerManager;
	HKHealthStore* _healthStore;
	WDDataProviderOrderController* _dataProviderOrderController;
	NSMutableArray* _dataProviderSources;
	NSMutableArray* _dataProviderSourcesOrdered;
	NSArray* _preEditSourcesOrdered;
	NSMutableArray* _sharingSources;
	NSMutableDictionary* _authorizationRecordsBySource;
	WDTitledIconView* _headerView;

}
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithDataUnitGroup:(id)arg1 dataCategory:(id)arg2 dataProviderOrderController:(id)arg3 controllerManager:(id)arg4 ;
-(void)_gatherDataAndRefreshUI;
-(void)_reloadAuthorizationRecords;
-(void)_updateDataProviderSourcesFromArray:(id)arg1 ;
-(void)_sortDataProviderSources;
-(void)_updateSharingSourcesFromArray:(id)arg1 ;
-(char)_sourceIsEnabled:(id)arg1 ;
-(void)_updateOrderedSources;
-(id)_noneTableViewCell;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)switchCellValueChanged:(id)arg1 value:(char)arg2 ;
@end
