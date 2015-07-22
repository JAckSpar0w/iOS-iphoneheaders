/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/SiriUISnippetPlugin.h>

@class ABAssistantDisambiguationProvider, NSString;

@interface ABAssistantSnippetFactory : NSObject <SiriUISnippetPlugin> {

	void* _addressBook;
	ABAssistantDisambiguationProvider* _disambiguationProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(BOOL)listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(BOOL)listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
@end
