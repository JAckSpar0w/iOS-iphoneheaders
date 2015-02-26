/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>
#import <TextInput/TIKeyboardCandidateCoding.h>

@class NSString;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {

	NSString* _alternativeText;

}

@property (nonatomic,readonly) NSString * candidate; 
@property (nonatomic,readonly) NSString * input; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,copy) NSString * alternativeText;                                                         //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,readonly) unsigned long long wordOriginFeedbackID; 
@property (nonatomic,readonly) unsigned long long deleteCount; 
@property (nonatomic,readonly) BOOL isForShortcutConversion; 
@property (nonatomic,readonly) BOOL isAutocorrection; 
@property (getter=isExtensionCandidate,nonatomic,readonly) BOOL extensionCandidate; 
@property (getter=isEmojiCandidate,nonatomic,readonly) BOOL emojiCandidate; 
@property (getter=isCompletionCandidate,nonatomic,readonly) BOOL completionCandidate; 
@property (getter=isInlineCompletionCandidate,nonatomic,readonly) BOOL inlineCompletionCandidate; 
@property (getter=isFullwidthCandidate,nonatomic,readonly) BOOL fullwidthCandidate; 
@property (nonatomic,readonly) unsigned usageTrackingMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)type;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)input;
-(unsigned long long)deleteCount;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(NSString *)candidate;
-(BOOL)isForShortcutConversion;
-(BOOL)isExtensionCandidate;
-(BOOL)isCompletionCandidate;
-(BOOL)isInlineCompletionCandidate;
-(BOOL)isFullwidthCandidate;
-(unsigned)usageTrackingMask;
-(unsigned long long)wordOriginFeedbackID;
-(BOOL)isAutocorrection;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isEmojiCandidate;
@end
