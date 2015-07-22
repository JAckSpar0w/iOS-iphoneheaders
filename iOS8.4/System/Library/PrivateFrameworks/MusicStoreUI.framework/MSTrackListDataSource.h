/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
-(id)headerViewForSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canShowPreviewForItem:(id)arg1 ;
-(id)_stylesheetString;
-(id)cellForIndexPath:(id)arg1 ;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(double)heightForPlaceholderCells;
-(void)reloadCellContexts;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2 ;
-(BOOL)canShowItemOfferButtonForItem:(id)arg1 ;
@end
