/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface EKDayPainter : NSObject
{
    struct CGRect _frame;
    CDStruct_b0fa4487 _displayedDay;
    BOOL _isToday;
    BOOL _isInMonth;
    BOOL _isInspected;
    int _busyLevel;
}

@property int busyLevel; // @synthesize busyLevel=_busyLevel;
@property(readonly) BOOL isInMonth; // @synthesize isInMonth=_isInMonth;
@property BOOL isToday; // @synthesize isToday=_isToday;
@property BOOL isInspected; // @synthesize isInspected=_isInspected;
@property(readonly) CDStruct_b0fa4487 displayedDay; // @synthesize displayedDay=_displayedDay;
@property struct CGRect frame; // @synthesize frame=_frame;
- (int)todayTextStyle;
- (int)inMonthTextStyle;
- (int)outOfMonthTextStyle;
- (struct CGGradient *)gradientForBusyLevel:(int)arg1;
- (id)busyLevelTextColor:(int)arg1;
- (id)inspectedBackgroundImage;
- (id)todayBackgroundImage;
- (id)todayTextColor;
- (id)inspectedBorderColor;
- (id)engravedTextColor;
- (id)inMonthTextColor;
- (id)outOfMonthTextColor;
- (id)outOfMonthBackgroundColor;
- (id)dayNumberFont;
- (struct CGPoint)todayBackgroundInset;
- (float)heatmapFillInset;
- (float)digitHeight;
- (float)twoDigitWidth;
- (float)oneDigitWidth;
- (void)drawNumberIntoContext:(struct CGContext *)arg1 atZero:(BOOL)arg2;
- (void)getDayWidth:(float *)arg1 height:(float *)arg2 x:(float *)arg3 y:(float *)arg4;
- (void)drawBackground:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInspectedHighlight;
- (id)initWithDate:(CDStruct_b0fa4487)arg1 inMonth:(CDStruct_b0fa4487)arg2;

@end

