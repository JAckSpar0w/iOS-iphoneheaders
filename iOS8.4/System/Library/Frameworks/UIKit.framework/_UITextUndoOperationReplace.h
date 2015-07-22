/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSUndoTextOperation.h>

@class NSAttributedString;

@interface _UITextUndoOperationReplace : NSUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(void)dealloc;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(void)undoRedo;
@end
