/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSDictionary;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {

	struct {
		unsigned delegateSizeForItem : 1;
		unsigned delegateReferenceSizeForHeader : 1;
		unsigned delegateReferenceSizeForFooter : 1;
		unsigned delegateInsetForSection : 1;
		unsigned delegateInteritemSpacingForSection : 1;
		unsigned delegateLineSpacingForSection : 1;
		unsigned delegateAlignmentOptions : 1;
		unsigned layoutDataIsValid : 1;
		unsigned delegateInfoIsValid : 1;
	}  _gridLayoutFlags;
	double _interitemSpacing;
	double _lineSpacing;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	CGSize _footerReferenceSize;
	UIEdgeInsets _sectionInset;
	id _data;
	CGSize _currentLayoutSize;
	NSMutableDictionary* _insertedItemsAttributesDict;
	NSMutableDictionary* _insertedSectionHeadersAttributesDict;
	NSMutableDictionary* _insertedSectionFootersAttributesDict;
	NSMutableDictionary* _deletedItemsAttributesDict;
	NSMutableDictionary* _deletedSectionHeadersAttributesDict;
	NSMutableDictionary* _deletedSectionFootersAttributesDict;
	long long _scrollDirection;
	NSDictionary* _rowAlignmentsOptionsDictionary;
	CGRect _visibleBounds;

}

@property (setter=_setRowAlignmentsOptions:,nonatomic,retain) NSDictionary * _rowAlignmentOptions; 
@property (assign,nonatomic) double minimumLineSpacing;                                                         //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                                                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                                   //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection; 
@property (assign,nonatomic) CGSize headerReferenceSize;                                                        //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize footerReferenceSize;                                                        //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                                         //@synthesize sectionInset=_sectionInset - In the implementation block
+(Class)invalidationContextClass;
-(void)_setRowAlignmentsOptions:(id)arg1 ;
-(id)_rowAlignmentOptions;
-(void)finalizeCollectionViewUpdates;
-(void)_fetchItemsInfo;
-(CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForItemAtSection:(long long)arg1 andRow:(long long)arg2 usingData:(id)arg3 ;
-(void)_updateDelegateFlags;
-(void)_getSizingInfos;
-(void)_updateItemsLayout;
-(id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1 ;
-(id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1 ;
-(CGSize)synchronizeLayout;
-(void)_invalidateButKeepDelegateInfo;
-(void)_invalidateButKeepAllInfo;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)prepareLayout;
-(bool)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2 ;
-(CGSize)itemSize;
-(id)_layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(CGSize)headerReferenceSize;
-(CGSize)footerReferenceSize;
-(UIEdgeInsets)sectionInset;
@end
