/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {

	CGPathRef _path;
	double* _lineDashPattern;
	unsigned long long _lineDashPatternCount;
	double _lineWidth;
	double _miterLimit;
	double _flatness;
	double _lineDashPhase;
	int _lineCapStyle;
	int _lineJoinStyle;
	bool _usesEvenOddFillRule;
	CGPathRef _immutablePath;
	bool _immutablePathIsValid;

}

@property (assign,setter=_gaxSetSimpleRectangle:,getter=_gaxIsSimpleRectangle,nonatomic) bool _gaxSimpleRectangle; 
@property (nonatomic,readonly) CGPoint boundsCenter; 
@property (nonatomic,readonly) unsigned long long numberOfElements; 
@property (nonatomic,readonly) CGPoint topLeftPoint; 
@property (nonatomic,readonly) CGPoint topRightPoint; 
@property (nonatomic,readonly) CGPoint bottomRightPoint; 
@property (nonatomic,readonly) CGPoint bottomLeftPoint; 
@property (nonatomic,readonly) CGPoint topLeftPointOnPath; 
@property (nonatomic,readonly) CGPoint topRightPointOnPath; 
@property (nonatomic,readonly) CGPoint bottomRightPointOnPath; 
@property (nonatomic,readonly) CGPoint bottomLeftPointOnPath; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) int direction; 
@property (assign,nonatomic) CGPathRef CGPath; 
@property (getter=isEmpty,readonly) bool empty; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGPoint currentPoint; 
@property (assign,nonatomic) double lineWidth;                                                                                  //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                                                                                  //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) int lineJoinStyle;                                                                                 //@synthesize lineJoinStyle=_lineJoinStyle - In the implementation block
@property (assign,nonatomic) double miterLimit;                                                                                 //@synthesize miterLimit=_miterLimit - In the implementation block
@property (assign,nonatomic) double flatness;                                                                                   //@synthesize flatness=_flatness - In the implementation block
@property (assign,nonatomic) bool usesEvenOddFillRule;                                                                          //@synthesize usesEvenOddFillRule=_usesEvenOddFillRule - In the implementation block
+(id)bezierPathWithPoints:(id)arg1 ;
+(id)smoothPathForFingerPath:(id)arg1 ;
+(void)_enumerateShapeSimplifiersUsingBlock:(/*^block*/ id)arg1 ;
+(void)_enumerateShapeRecognizersUsingBlock:(/*^block*/ id)arg1 ;
+(void)_enumerateShapeSmoothersUsingBlock:(/*^block*/ id)arg1 ;
+(id)shadowBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
+(id)bezierPath;
+(id)_bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(bool)arg5 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(CGSize)arg3 segments:(int)arg4 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(bool)arg5 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)_bezierPathWithArcRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(CGSize)arg3 ;
+(id)bezierPathWithArcCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadius:(double)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4 ;
+(id)_bezierPathWithPillRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(void)ax_enumerateElementsUsingBlock:(/*^block*/ id)arg1 ;
-(id)ax_descriptionForPathElement:(const CGPathElement*)arg1 ;
-(id)ax_description;
-(id)_gaxPathContext;
-(CGPoint)_pointOnPathAtIntersectionOfCenterAndPoint:(CGPoint)arg1 ;
-(bool)_gaxIsSimpleRectangle;
-(void)_gaxSetSimpleRectangle:(bool)arg1 ;
-(CGPoint)topRightPoint;
-(id)bezierPathByApplyingTransformation:(/*^block*/ id)arg1 ;
-(bool)containsPath:(id)arg1 ;
-(CGPoint)boundsCenter;
-(CGPoint)topLeftPoint;
-(CGPoint)bottomLeftPoint;
-(bool)intersectsPath:(id)arg1 ;
-(CGPoint)topLeftPointOnPath;
-(CGPoint)topRightPointOnPath;
-(CGPoint)bottomRightPointOnPath;
-(CGPoint)bottomLeftPointOnPath;
-(id)equivalentPathForDirection:(int)arg1 ;
-(bool)containsPath:(id)arg1 withMarginOfError:(double)arg2 ;
-(CGPoint)bottomRightPoint;
-(void)enumerateLinePointsContextsUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateLineSegmentContextsUsingBlock:(/*^block*/ id)arg1 ;
-(id)equivalentPathStartingWithElementAtIndex:(unsigned long long)arg1 ;
-(double)distanceFromStartingPointForPointWithElementIndex:(unsigned long long)arg1 ;
-(void)appendElementOfType:(int)arg1 withSinglePoint:(CGPoint)arg2 ;
-(void*)copyBezierPathPointsExcludingControlPoints;
-(id)bezierPathConstrainedToFrame:(CGRect)arg1 ;
-(id)equivalentPathStartingWithFirstElementMatchingCondition:(/*^block*/ id)arg1 ;
-(bool)isEqualPoints:(id)arg1 ;
-(id)bezierPathWithUniformInset:(double)arg1 ;
-(id)description;
-(double)length;
-(int)direction;
-(unsigned long long)numberOfElements;
-(void)enumerateElementsUsingBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)_initWithCGMutablePath:(CGPathRef)arg1 ;
-(CGPathRef)_createMutablePathByDecodingData:(id)arg1 ;
-(CGPathRef)_mutablePath;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(CGPathRef)CGPath;
-(void)addClip;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 ;
-(void)appendPath:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(void)setCGPath:(CGPathRef)arg1 ;
-(bool)isEmpty;
-(CGPoint)currentPoint;
-(bool)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)fillWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)_addRoundedCornerWithTrueCorner:(CGPoint)arg1 radius:(CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(bool)arg4 ;
-(CGPathRef)_pathRef;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)clip;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(int)lineCapStyle;
-(void)setLineCapStyle:(int)arg1 ;
-(int)lineJoinStyle;
-(void)setLineJoinStyle:(int)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(bool)usesEvenOddFillRule;
-(void)setUsesEvenOddFillRule:(bool)arg1 ;
@end
