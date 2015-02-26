/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/__SBIconScrollViewAccessibility_super.h>

@interface SBIconScrollViewAccessibility : __SBIconScrollViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityScrollStatus:(BOOL)arg1 ;
-(id)_accessibilityUpdateCurrentPage:(long long)arg1 post:(BOOL)arg2 direction:(BOOL)arg3 ;
-(id)_accessibilityScrollStatus;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(double)_accessibilityAllowedGeometryOverlap;
-(BOOL)accessibilityScrollDownPage;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(CGRect)_accessibilityContentFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityScrollToTopSupported;
@end
