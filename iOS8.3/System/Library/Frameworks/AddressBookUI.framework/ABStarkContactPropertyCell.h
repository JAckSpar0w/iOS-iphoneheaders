/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:35:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPropertyPhoneNumberCell.h>

@interface ABStarkContactPropertyCell : ABPropertyPhoneNumberCell {

	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(char)wantsHorizontalLayout;
-(void)performDefaultAction;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)transportButtonClicked:(id)arg1 ;
-(float)bottomBaselineConstant;
-(id)standardTransportIcon;
-(id)standardStarView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
@end
