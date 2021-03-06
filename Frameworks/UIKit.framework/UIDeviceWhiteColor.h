/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIColor.h>

__attribute__((visibility("hidden")))
@interface UIDeviceWhiteColor : UIColor
{
    float whiteComponent;
    float alphaComponent;
    struct CGColor *cachedColor;
    long cachedColorOnceToken;
}

- (BOOL)_getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (BOOL)getWhite:(float *)arg1 alpha:(float *)arg2;
- (float)alphaComponent;
- (struct CGColor *)CGColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorSpaceName;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(float)arg1;
- (struct CGColor *)_createCGColorWithAlpha:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;

@end

