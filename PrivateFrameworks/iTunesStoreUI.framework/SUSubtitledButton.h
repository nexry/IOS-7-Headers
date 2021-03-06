/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton
{
    struct __CFDictionary *_subtitleContentLookup;
    UILabel *_subtitleView;
}

- (int)_subtitleLineBreakMode;
- (id)_subtitleFont;
- (id)_subtitledContentForState:(unsigned int)arg1;
- (void)_setupSubtitleView;
- (id)subtitleShadowColorForState:(unsigned int)arg1;
- (struct CGRect)subtitleRectForContentRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *subtitleLabel;
- (id)subtitleForState:(unsigned int)arg1;
- (id)subtitleColorForState:(unsigned int)arg1;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitle:(id)arg1 forState:(unsigned int)arg2;
@property(readonly, nonatomic) UIColor *currentSubtitleShadowColor;
@property(readonly, nonatomic) UIColor *currentSubtitleColor;
@property(readonly, nonatomic) NSString *currentSubtitle;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

