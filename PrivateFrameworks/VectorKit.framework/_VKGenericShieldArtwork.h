/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKShieldArtwork.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _VKGenericShieldArtwork : VKShieldArtwork
{
    float _leftCap;
    float _rightCap;
    float _baseline;
    float _leftPadding;
    float _rightPadding;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct CGSize _shadowOffset;
    float _shadowSize;
    unsigned int _maxLineCount;
    float _lineSpacing;
}

- (id).cxx_construct;
- (struct CGImage *)newImageWithShieldText:(id)arg1 centerPoint:(struct CGPoint *)arg2;
- (struct CGSize)size;
- (struct CGSize)sizeWithTextWidth:(float)arg1;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 scale:(float)arg2 leftPadding:(float)arg3 rightPadding:(float)arg4 textColor:(struct _VGLColor)arg5 baseline:(float)arg6 leftCap:(float)arg7 rightCap:(float)arg8 shouldStroke:(BOOL)arg9 strokeWidth:(float)arg10 strokeColor:(struct _VGLColor)arg11 shouldShadow:(BOOL)arg12 shadowOffset:(struct CGSize)arg13 shadowSize:(float)arg14 shadowColor:(struct _VGLColor)arg15 fontName:(id)arg16 fontSize:(float)arg17 maxLineCount:(unsigned int)arg18 lineSpacing:(float)arg19;

@end

