//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface _TtC17SketchControllers35MSCollectionOverlayLayoutAttributes : NSObject
{
    // Error parsing type: , name: indexPath
    // Error parsing type: , name: representedElementCategory
    // Error parsing type: , name: representedElementKind
    // Error parsing type: , name: bounds
    // Error parsing type: , name: center
    // Error parsing type: , name: isHidden
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden;
@property(nonatomic) struct CGPoint center; // @synthesize center;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, copy) NSIndexPath *indexPath; // @synthesize indexPath;
- (id)initForSupplementaryOfKind:(id)arg1 at:(id)arg2;
- (id)initForItemAt:(id)arg1;

@end
