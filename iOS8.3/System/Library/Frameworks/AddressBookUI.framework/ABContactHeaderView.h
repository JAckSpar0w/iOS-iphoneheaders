/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:35:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@protocol ABPresenterDelegate, ABContactHeaderViewDelegate;
@class NSDictionary, CNContactStyle, NSMutableArray, ABContactPhotoView, CNContact;

@interface ABContactHeaderView : UIView {

	char _needsReload;
	NSDictionary* _nameTextAttributes;
	id<ABPresenterDelegate> _delegate;
	id<ABContactHeaderViewDelegate> _headerDelegate;
	CNContactStyle* _contactStyle;
	NSMutableArray* _headerConstraints;
	ABContactPhotoView* _photoView;
	CNContact* _contact;
	UIEdgeInsets _contentMargins;

}

@property (assign,nonatomic) UIEdgeInsets contentMargins;                                 //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                             //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic) id<ABPresenterDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<ABContactHeaderViewDelegate> headerDelegate;              //@synthesize headerDelegate=_headerDelegate - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                               //@synthesize contactStyle=_contactStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerConstraints;                          //@synthesize headerConstraints=_headerConstraints - In the implementation block
@property (nonatomic,readonly) ABContactPhotoView * photoView;                            //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                       //@synthesize contact=_contact - In the implementation block
-(CNContact *)contact;
-(void)reloadDataPreservingChanges:(char)arg1 ;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(CNContactStyle *)contactStyle;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(void)reloadDataIfNeeded;
-(NSMutableArray *)headerConstraints;
-(void)setHeaderConstraints:(NSMutableArray *)arg1 ;
-(UIEdgeInsets)contentMargins;
-(NSDictionary *)nameTextAttributes;
-(void)updateWithNewContact:(id)arg1 ;
-(void)updateFontSizes;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(void)saveContactPhoto;
-(id<ABContactHeaderViewDelegate>)headerDelegate;
-(void)setHeaderDelegate:(id<ABContactHeaderViewDelegate>)arg1 ;
-(ABContactPhotoView *)photoView;
-(void)dealloc;
-(void)setDelegate:(id<ABPresenterDelegate>)arg1 ;
-(id<ABPresenterDelegate>)delegate;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)updateConstraints;
-(void)setNeedsReload;
@end
