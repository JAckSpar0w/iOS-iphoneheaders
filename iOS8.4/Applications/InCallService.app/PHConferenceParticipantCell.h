/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol PHConferenceParticipantCellProtocol;
@class UILabel, UIButton, PHConferenceParticipantCellRingButton;

@interface PHConferenceParticipantCell : UITableViewCell {

	char _shouldShowPrivateButton;
	id<PHConferenceParticipantCellProtocol> _delegate;
	UILabel* _nameLabel;
	UIButton* _endCallButton;
	PHConferenceParticipantCellRingButton* _privateButton;

}

@property (assign) id<PHConferenceParticipantCellProtocol> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) UILabel * nameLabel;                                              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) char shouldShowPrivateButton;                             //@synthesize shouldShowPrivateButton=_shouldShowPrivateButton - In the implementation block
@property (retain) UIButton * endCallButton;                                           //@synthesize endCallButton=_endCallButton - In the implementation block
@property (retain) PHConferenceParticipantCellRingButton * privateButton;              //@synthesize privateButton=_privateButton - In the implementation block
-(UIButton *)endCallButton;
-(PHConferenceParticipantCellRingButton *)privateButton;
-(void)setRepresentedCall:(id)arg1 ;
-(void)makeHeld;
-(void)setShouldShowPrivateButton:(char)arg1 ;
-(char)shouldShowPrivateButton;
-(void)setEndCallButton:(UIButton *)arg1 ;
-(void)setPrivateButton:(PHConferenceParticipantCellRingButton *)arg1 ;
-(void)setDelegate:(id<PHConferenceParticipantCellProtocol>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<PHConferenceParticipantCellProtocol>)delegate;
-(void)buttonTapped:(id)arg1 ;
-(UILabel *)nameLabel;
@end
