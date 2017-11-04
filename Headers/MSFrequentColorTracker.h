//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MSFrequentColorTracker : NSObject
{
    BOOL _shouldIgnoreAlpha;
    unsigned long long _colorUse;
    unsigned long long _maximumColorCount;
    NSMutableDictionary *_colorDict;
}

@property(retain, nonatomic) NSMutableDictionary *colorDict; // @synthesize colorDict=_colorDict;
@property(readonly, nonatomic) BOOL shouldIgnoreAlpha; // @synthesize shouldIgnoreAlpha=_shouldIgnoreAlpha;
@property(readonly, nonatomic) unsigned long long maximumColorCount; // @synthesize maximumColorCount=_maximumColorCount;
@property(readonly, nonatomic) unsigned long long colorUse; // @synthesize colorUse=_colorUse;
- (void).cxx_destruct;
- (id)frequentColors;
- (void)registerColors:(id)arg1 fromSource:(id)arg2;
- (void)registerColor:(id)arg1 fromSource:(id)arg2;
- (id)initWithColorUse:(unsigned long long)arg1 maximumColorCount:(unsigned long long)arg2 ignoringAlpha:(BOOL)arg3;

@end

