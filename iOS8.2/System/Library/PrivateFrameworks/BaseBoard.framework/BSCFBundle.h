/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(void)dealloc;
-(id)description;
-(id)infoDictionary;
-(id)bundleIdentifier;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)bundlePath;
-(id)executablePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)initWithPath:(id)arg1 ;
-(id)localizedInfoDictionary;
-(id)initWithCFBundle:(CFBundleRef)arg1 ;
-(id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(CFBundleRef)cfBundle;
@end
