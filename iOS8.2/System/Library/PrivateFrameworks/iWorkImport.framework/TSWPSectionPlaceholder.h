/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSWPSection.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection> {

	TPDocumentRoot* _documentRoot;
	TSWPStorage* _parentStorage;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithContext:(id)arg1 ;
@end
