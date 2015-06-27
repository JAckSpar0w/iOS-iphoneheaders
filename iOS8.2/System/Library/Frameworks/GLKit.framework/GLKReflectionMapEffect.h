/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GLKit/GLKBaseEffect.h>
#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {

	GLKEffectPropertyTexture* _textureCubeMap;
	GLKMatrix3 _matrix;
	char _dirtyUniforms;
	int _matrixLoc;

}

@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (assign,nonatomic) _GLKMatrix3 matrix;                                       //@synthesize matrix=_matrix - In the implementation block
@property (assign,nonatomic) char dirtyUniforms;                                       //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) int matrixLoc;                                            //@synthesize matrixLoc=_matrixLoc - In the implementation block
-(void)prepareToDraw;
-(void)setDirtyUniforms:(char)arg1 ;
-(char)dirtyUniforms;
-(GLKEffectPropertyTexture *)textureCubeMap;
-(void)setMatrix:(_GLKMatrix3)arg1 ;
-(int)matrixLoc;
-(void)setMatrixLoc:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(_GLKMatrix3)matrix;
@end
