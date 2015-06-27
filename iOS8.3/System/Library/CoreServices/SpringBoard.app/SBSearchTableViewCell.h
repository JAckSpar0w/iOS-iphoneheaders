/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSArray, UIView;

@interface SBSearchTableViewCell : UITableViewCell {

	NSLayoutConstraint* _clippingConstraint;
	char _addedConstantsConstraints;
	NSArray* _variableConstraints;
	char _aboveSelectedCell;
	UIView* _background;
	UIView* _clippingContainer;
	UIView* _separatorView;
	float _leftSeparatorMargin;

}

@property (assign,getter=isAboveSelectedCell,nonatomic) char aboveSelectedCell;              //@synthesize aboveSelectedCell=_aboveSelectedCell - In the implementation block
@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) UIView * background;                                          //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) UIView * clippingContainer;                                   //@synthesize clippingContainer=_clippingContainer - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) float leftMargin; 
@property (nonatomic,readonly) float rightMargin; 
@property (nonatomic,readonly) float verticalImageMargin; 
@property (assign) float leftSeparatorMargin;                                                //@synthesize leftSeparatorMargin=_leftSeparatorMargin - In the implementation block
+(id)attributedString:(id)arg1 withLineBreakMode:(int)arg2 defaultParagraphStyle:(id)arg3 ;
+(char)supportsSection:(id)arg1 result:(id)arg2 ;
+(void)configureViewForDisplay:(id)arg1 viewType:(int)arg2 ;
+(id)attributedStringForImage:(id)arg1 baselineOffset:(float)arg2 ;
+(id)unmaskedSelectedBackgroundColor;
+(char)shouldDisplayImagesForDomain:(unsigned)arg1 ;
+(id)tableViewCellClasses;
+(id)cellIdentifierForSection:(id)arg1 result:(id)arg2 ;
+(id)maskedSelectedBackgroundColor;
+(void)registerClass:(Class)arg1 ;
+(id)backgroundColor;
+(void)initialize;
+(id)textColor;
+(id)selectedTextColor;
+(id)lineColor;
-(float)verticalImageMargin;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(UIView *)clippingContainer;
-(void)updateBottomLine;
-(void)setLeftSeparatorMargin:(float)arg1 ;
-(void)updateSelectedState;
-(void)setAboveSelectedCell:(char)arg1 ;
-(char)aboveSelectedCell;
-(void)clipToTopHeaderWithHeight:(float)arg1 inTableView:(id)arg2 ;
-(char)isAboveSelectedCell;
-(float)leftSeparatorMargin;
-(NSArray *)variableConstraints;
-(NSArray *)constantConstraints;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)separatorView;
-(UIView *)background;
-(float)rightMargin;
-(float)leftMargin;
@end
