//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAllRenderers.h"

@class NSString;

@interface MSNullRenderer : NSObject <MSAllRenderers>
{
}

- (void)renderGrid:(id)arg1 in:(struct CGRect)arg2 origin:(struct CGPoint)arg3 context:(id)arg4;
- (void)renderOverlayForPage:(id)arg1 selectedArtboard:(id)arg2 options:(unsigned long long)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderBackgroundForPage:(id)arg1 rect:(struct CGRect)arg2 origin:(struct CGPoint)arg3 zoom:(double)arg4 context:(struct CGContext *)arg5;
- (void)renderInnerShadow:(id)arg1 path:(id)arg2 windingRule:(unsigned long long)arg3 context:(id)arg4;
- (void)renderShadow:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)renderShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 windingRule:(unsigned long long)arg4 options:(id)arg5 type:(unsigned long long)arg6 strokeType:(long long)arg7 fillShouldClip:(BOOL)arg8 lineWidth:(double)arg9 context:(id)arg10;
- (void)renderBackgroundBlurBehindShape:(id)arg1 context:(id)arg2 clippedToPath:(id)arg3;
- (void)renderFill:(id)arg1 path:(id)arg2 layer:(id)arg3 index:(long long)arg4 rect:(struct CGRect)arg5 hasInnerStroke:(BOOL)arg6 context:(id)arg7;
- (void)renderBordersForPath:(id)arg1 style:(id)arg2 rect:(struct CGRect)arg3 context:(id)arg4;
- (void)renderFillsForPath:(id)arg1 style:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderPath:(id)arg1 layer:(id)arg2 inRect:(struct CGRect)arg3 fallbackColor:(id)arg4 context:(id)arg5;
- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;
- (void)renderLayer:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

