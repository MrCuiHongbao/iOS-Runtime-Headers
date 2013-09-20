/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, KNBuildCrumbleSystem, KNBuildSmokeSystem, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLTextureInfo;

@interface KNBuildCrumble : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _animationRect;
    TSDGLDataBuffer *_blurDataBuffer;
    TSDGLShader *_blurShader;
    } _drawableFrame;
    TSDGLDataBuffer *_fboDataBuffer;
    TSDGLShader *_fboShader;
    KNAnimParameterGroup *_parameterGroup;
    } _projectionMatrix;
    } _shadowFBOProjectionMatrix;
    TSDGLFrameBuffer *_shadowFramebuffer;
    KNBuildCrumbleSystem *_shatterSystem;
    TSDGLShader *_shatterSystemShader;
    KNBuildSmokeSystem *_smokeSystem;
    TSDGLShader *_smokeSystemShader;
    TSDGLTextureInfo *_smokeTextureInfo;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_setupMVPMatrices;
- (void)p_setupParticleSystemsWithImage:(id)arg1 animatedBuild:(id)arg2 context:(id)arg3;
- (void)p_setupShaders;
- (void)renderFrameWithContext:(id)arg1;
- (void)teardown;

@end