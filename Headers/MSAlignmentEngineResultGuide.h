//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MSAlignmentEngineResultGuide : NSObject <NSCopying>
{
    struct BCLineSegment _lineSegment;
}

@property(readonly, nonatomic) struct BCLineSegment lineSegment; // @synthesize lineSegment=_lineSegment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawWithLineWidth:(double)arg1;
- (id)bezierPath;
- (id)initWithLineSegment:(struct BCLineSegment)arg1;

@end
