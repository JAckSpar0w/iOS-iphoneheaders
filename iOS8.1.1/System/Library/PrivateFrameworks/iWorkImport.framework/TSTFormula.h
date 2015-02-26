/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class TSTExpressionNode, TSCECalculationEngine, TSTTableInfo, NSString;

@interface TSTFormula : NSObject <NSCopying> {

	TSTExpressionNode* mExpressionTree;
	TSCECalculationEngine* mCalculationEngine;
	TSTTableInfo* mHostInfo;
	NSString* mInitialWhitespace;
	SCD_Struct_TS272 mHostCell;
	BOOL mSyntaxError;
	BOOL mFixupFormulas;
	BOOL mFormulaWasFixable;
	BOOL mFormulaFixupsShouldStick;
	BOOL mEmpty;
	BOOL mRequireEqualsToken;

}

@property (nonatomic,readonly) TSCEFormula* formula; 
@property (nonatomic,copy) NSString * initialWhitespace; 
@property (assign,getter=isSyntaxError,nonatomic) BOOL syntaxError; 
@property (assign,nonatomic) BOOL fixupFormulas; 
@property (nonatomic,readonly) BOOL formulaWasFixable; 
@property (nonatomic,readonly) BOOL formulaFixupsShouldStick; 
@property (assign,nonatomic) BOOL requireEqualsToken; 
@property (nonatomic,retain) TSTExpressionNode * expressionTree; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty; 
@property (nonatomic,retain) TSCECalculationEngine * calculationEngine; 
+(id)formulaForCell:(id)arg1 atCellID:(SCD_Struct_TS272)arg2 inTable:(id)arg3 ;
+(id)singleQuoteCharacters;
+(id)doubleQuoteCharacters;
+(id)leftParenCharacters;
+(id)rightParenCharacters;
+(id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+(id)leadingSingleQuoteEscapeCharacters;
+(id)equalsCharacters;
+(int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2 ;
-(void)setCalculationEngine:(TSCECalculationEngine *)arg1 ;
-(BOOL)isSyntaxError;
-(TSCECalculationEngine *)calculationEngine;
-(id)formulaPlainText;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(SCD_Struct_TS272)arg3 TSCEFormula:(const TSCEFormula*)arg4 ownerID:(CFUUIDRef)arg5 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(SCD_Struct_TS272)arg3 hostTable:(id)arg4 ;
-(void)setExpressionTree:(TSTExpressionNode *)arg1 ;
-(void)setInitialWhitespace:(NSString *)arg1 ;
-(void)setSyntaxError:(BOOL)arg1 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/id)arg2 ;
-(id)p_fixFormula:(id)arg1 ;
-(TSTExpressionNode *)expressionTree;
-(id)p_formulaAsTextReturningTokenValues:(BOOL)arg1 ;
-(id)initWithCalculationEngine:(id)arg1 hostCell:(SCD_Struct_TS272)arg2 hostTable:(id)arg3 ;
-(BOOL)hasBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 ;
-(id)formulaDetokenizedText;
-(BOOL)fixupFormulas;
-(void)setFixupFormulas:(BOOL)arg1 ;
-(BOOL)formulaWasFixable;
-(BOOL)formulaFixupsShouldStick;
-(NSString *)initialWhitespace;
-(BOOL)requireEqualsToken;
-(void)setRequireEqualsToken:(BOOL)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)reset;
-(TSCEFormula*)formula;
@end
