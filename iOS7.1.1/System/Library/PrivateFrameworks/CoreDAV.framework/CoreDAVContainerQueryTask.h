/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSString;

@interface CoreDAVContainerQueryTask : CoreDAVTask {

	NSSet* _searchTerms;
	unsigned long long _searchLimit;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificQueryCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;

}

@property (assign,nonatomic,@dynamic) <CoreDAVContainerQueryTaskDelegate> * delegate; 
+(id)_copySearchTermsFromSearchString:(id)arg1 ;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(void)addFiltersToXMLData:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(id)requestBody;
-(id)httpMethod;
@end
