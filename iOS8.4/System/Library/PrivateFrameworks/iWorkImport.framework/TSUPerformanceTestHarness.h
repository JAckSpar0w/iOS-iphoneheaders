/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	BOOL mQuiet;
	long long mPassingTests;
	long long mTotalTests;
	BOOL mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) long long passingTestCount; 
@property (nonatomic,readonly) long long testCount; 
@property (nonatomic,readonly) BOOL passed; 
+(id)harness;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)setQuiet:(BOOL)arg1 ;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)setup;
-(void)testSuite;
-(BOOL)passed;
-(void)report;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(BOOL)runTests;
-(BOOL)quiet;
-(long long)passingTestCount;
-(long long)testCount;
@end
