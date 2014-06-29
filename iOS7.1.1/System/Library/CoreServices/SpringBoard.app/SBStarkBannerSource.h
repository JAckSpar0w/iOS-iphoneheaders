/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>

@protocol SBUIBannerTarget;
@class NSMutableArray;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver> {

	id _allowedTargetIdentifier;
	<SBUIBannerTarget>* _target;
	NSMutableArray* _enqueuedItems;

}
-(id)newBannerViewForContext:(id)arg1 ;
-(id)initWithAllowedTargetIdentifier:(void*)arg1 ;
-(void)enqueueItem:(id)arg1 ;
-(unsigned)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)arg1 ;
-(void)removeEnqueuedItemsAtIndexes:(id)arg1 ;
-(id)currentItemFromTarget;
-(void)dismissCurrentItemFromTarget;
-(void)dealloc;
-(id)init;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
@end
