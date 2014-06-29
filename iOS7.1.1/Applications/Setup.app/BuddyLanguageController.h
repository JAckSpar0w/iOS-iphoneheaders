/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSDictionary, NSMutableArray, NSString, NSArray, NSMutableDictionary;

@interface BuddyLanguageController : BuddyTableViewController <BuddyController> {

	NSDictionary* _languageStrings;
	float _scrollOffset;
	<BuddyControllerDelegate>* _delegate;
	NSMutableArray* _fakeViews;
	NSString* _selectedLanguage;
	BOOL _startedInFakeMode;
	BOOL _builtTable;
	BOOL _willAppearCalled;
	NSArray* _languageCodes;
	NSMutableDictionary* _cellCache;

}

@property (nonatomic,copy) NSString * selectedLanguage;                    //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * languageCodes;                      //@synthesize languageCodes=_languageCodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellCache;              //@synthesize cellCache=_cellCache - In the implementation block
+(id)languageScreenshotCachePath:(BOOL)arg1 tag:(id)arg2 ;
-(void)startOver;
-(id)initInFakeMode:(BOOL)arg1 ;
-(void)buildTable;
-(BOOL)shouldAllowStartOver;
-(id)selectedLanguage;
-(void)takeScreenshots;
-(void)switchToRealMode;
-(void)setSelectedLanguage:(id)arg1 ;
-(void)setLanguageCodes:(id)arg1 ;
-(void)readyDisplay;
-(BOOL)restoreScreenshot:(id)arg1 ;
-(BOOL)takeScreenshot:(id)arg1 tag:(id)arg2 ;
-(id)languageCodes;
-(id)cellForLanguageCode:(id)arg1 ;
-(void)selectLanguage:(id)arg1 ;
-(float)scrollOffset;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)reset;
-(void)setCellCache:(id)arg1 ;
-(id)cellCache;
-(void)generateLanguageCellCache;
@end
