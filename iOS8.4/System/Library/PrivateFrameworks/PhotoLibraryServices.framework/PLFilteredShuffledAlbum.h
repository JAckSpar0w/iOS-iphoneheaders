/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLShuffledAlbum.h>

@class NSPredicate;

@interface PLFilteredShuffledAlbum : PLShuffledAlbum {

	int _filter;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) int filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
+(NSObject*)_shuffledAlbumWithAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(void)createShuffledIndexesMaps;
-(void)dealloc;
-(unsigned long long)count;
-(int)filter;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(NSObject*)unshuffledAlbum;
-(NSPredicate *)filterPredicate;
@end
