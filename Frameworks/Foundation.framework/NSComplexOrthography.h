/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSOrthography.h>

@class NSDictionary, NSString;

@interface NSComplexOrthography : NSOrthography
{
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;
- (unsigned int)orthographyFlags;
- (id)languageMap;
- (id)dominantScript;
- (void)dealloc;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;

@end
