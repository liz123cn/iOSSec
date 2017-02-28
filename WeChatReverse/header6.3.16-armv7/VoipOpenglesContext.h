//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CAEAGLLayer, EAGLContext;

@interface VoipOpenglesContext : MMObject
{
    char *m_pData[3];
    int srcWidth;
    int srcHeight;
    int dstWidth;
    int dstHeight;
    _Bool sizeChanged;
    unsigned int _colorRenderBuffer;
    unsigned int _YPlanarTexture;
    unsigned int _UPlanarTexture;
    unsigned int _VPlanarTexture;
    unsigned int _UVPlanarTexture;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformUV;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int rotateUniform;
    unsigned int framebuffer;
    unsigned int vertexBuffer;
    unsigned int indexBuffer;
    float _degrees;
    BOOL _full;
    float _viewWidth;
    float _viewHeight;
    BOOL _hasInit;
    BOOL _isNV12;
    BOOL _isMirrored;
    BOOL needUpdateParam;
    BOOL m_deleteFlag;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    id <VoipOpenglesContextDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAGLContext *_context; // @synthesize _context;
@property(retain, nonatomic) CAEAGLLayer *_eaglLayer; // @synthesize _eaglLayer;
- (void)applyRotation:(float)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)compileShaders;
- (void)dealloc;
- (void)deleteELGS;
- (void)drawFrame:(BOOL)arg1;
- (float)getDegrees;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalSetupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
@property(nonatomic) __weak id <VoipOpenglesContextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_deleteFlag; // @synthesize m_deleteFlag;
- (void)renderImage2:(char **)arg1 Swidth:(unsigned long)arg2 Sheight:(unsigned long)arg3 Dwidth:(unsigned long)arg4 Dheight:(unsigned long)arg5;
- (void)renderImage:(char *)arg1 Swidth:(unsigned long)arg2 Sheight:(unsigned long)arg3 Dwidth:(unsigned long)arg4 Dheight:(unsigned long)arg5;
- (void)renderImage:(char *)arg1 Width:(unsigned long)arg2 Height:(unsigned long)arg3;
- (void)resetMirrored:(BOOL)arg1;
- (void)setDegrees:(float)arg1;
- (void)setupContext;
- (void)setupELGS:(id)arg1;
- (void)setupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)setupFrameBuffer;
- (void)setupIndices;
- (void)setupLayer:(id)arg1;
- (void)setupRenderBuffer;
- (unsigned int)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (unsigned int)textureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)updateRenderParam:(BOOL)arg1;
- (void)updateTextureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (void)updateTextureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;

@end
