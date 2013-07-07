/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SASportsMatchup.h>

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup
{
}

+ (id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseballMatchup;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSNumber *strikes;
@property(copy, nonatomic) NSNumber *outs;
@property(copy, nonatomic) NSNumber *onThird;
@property(copy, nonatomic) NSNumber *onSecond;
@property(copy, nonatomic) NSNumber *onFirst;
@property(copy, nonatomic) NSString *inningStatus;
@property(copy, nonatomic) NSNumber *homeHits;
@property(copy, nonatomic) NSNumber *homeErrors;
@property(copy, nonatomic) NSNumber *balls;
@property(copy, nonatomic) NSNumber *awayHits;
@property(copy, nonatomic) NSNumber *awayErrors;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
