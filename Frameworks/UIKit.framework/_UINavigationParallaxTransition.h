/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioningEx.h"
#import "_UIBasicAnimationFactory.h"

@class UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    BOOL _interactionAborted;
    BOOL _clipUnderlapWhileTransitioning;
    int _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    int _transitionStyle;
    float _transitionGap;
}

@property(nonatomic) float transitionGap; // @synthesize transitionGap=_transitionGap;
@property(nonatomic) int transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) BOOL clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property(retain, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) BOOL interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) int operation; // @synthesize operation=_operation;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)animateTransition:(id)arg1;
- (void)_revealTransitionWithContext:(id)arg1;
- (void)_revealTransitionWithContext:(id)arg1 withPop:(BOOL)arg2;
- (void)animationEnded:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (id)initWithCurrentOperation:(int)arg1;

@end
