/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKCollectionViewController.h>
#import <Game Center/GKMasterDetailViewControllerDelegate.h>

@class GKTurnsDataSource, NSIndexPath, GKGameTurnInfo, NSString;

@interface GKTurnsViewController : GKCollectionViewController <GKMasterDetailViewControllerDelegate> {

	GKTurnsDataSource* _turnsDataSource;
	NSIndexPath* _selectedIndexPath;
	GKGameTurnInfo* _selectedTurnInfo;

}

@property (nonatomic,retain) GKTurnsDataSource * turnsDataSource;              //@synthesize turnsDataSource=_turnsDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                  //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) GKGameTurnInfo * selectedTurnInfo;                //@synthesize selectedTurnInfo=_selectedTurnInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTurnsDataSource:(GKTurnsDataSource *)arg1 ;
-(GKGameTurnInfo *)selectedTurnInfo;
-(void)setSelectedTurnInfo:(GKGameTurnInfo *)arg1 ;
-(void)showSubcontroller:(id)arg1 ;
-(void)showMatchesViewControllerForTurnInfo:(id)arg1 ;
-(id)turnInfoToSelect;
-(id)matchesViewControllerForTurnInfo:(id)arg1 ;
-(GKTurnsDataSource *)turnsDataSource;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)dealloc;
-(id)init;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg1 ;
-(void)configureDataSource;
-(id)preservedIndexPathForSelectedItem;
-(void)didEnterNoContentState;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end
