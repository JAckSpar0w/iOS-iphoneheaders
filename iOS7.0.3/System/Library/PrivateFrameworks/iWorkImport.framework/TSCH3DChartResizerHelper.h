/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCH3DChartBoundsLayout, TSCH3DVector;

@interface TSCH3DChartResizerHelper : NSObject {

	TSCHChartInfo* mChartInfo;
	tvec2<int> mContainingViewport;
	tvec2<int> mOriginalContainingViewport;
	TSCH3DChartBoundsLayout* mBoundsLayout;
	SCD_Struct_TS407 mLayoutSettings;

}

@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector; 
@property (nonatomic,readonly) tvec2<int> originalContainingViewport; 
@property (assign,nonatomic) SCD_Struct_TS407 layoutSettings; 
+(id)helperWithInfo:(id)arg1 ;
+(tvec2<int>)containingViewportForVector:(id)arg1 ;
+(id)vectorForContainingViewport:(const tvec2<int>*)arg1 ;
-(void)setLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(id)boundsLayoutForScene:(id)arg1 mode:(int)arg2 ;
-(id)boundsLayoutResizedForScene:(id)arg1 bounds:(const box<glm::detail::tvec2<float> >*)arg2 resizeStartingSize:(tvec2<float>*)arg3 mode:(int)arg4 returningResultSize:(tvec2<float>*)arg5 ;
-(id)containingViewportVector;
-(void)invalidateBounds;
-(tvec2<int>)containingViewport;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const ChartProjectedBoundsConverter*)arg1 ;
-(id)chartInfo;
-(SCD_Struct_TS407)layoutSettings;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2 ;
-(void)setContainingViewport:(tvec2<int>)arg1 ;
-(tvec2<int>)originalContainingViewport;
-(void)initializeOriginalContainingViewport;
-(tvec2<float>)chartBodySizeByResizingScene:(id)arg1 toLayoutSize:(const tvec2<float>*)arg2 resizeStartingSize:(tvec2<float>*)arg3 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(tvec2<float>*)arg4 resultLayoutSize:(tvec2<float>*)arg5 ;
-(tvec2<float>)layoutSizeByResizingScene:(id)arg1 toChartBodyLayoutSize:(const tvec2<float>*)arg2 resizeStartingSize:(tvec2<float>*)arg3 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(box<glm::detail::tvec2<float> >*)arg4 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
@end
