//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSSharedStyleContainer.h>

@interface MSSharedStyleContainer : _MSSharedStyleContainer
{
}

- (id)sharedStyles;
- (unsigned long long)numberOfSharedStyles;
- (long long)indexOfSharedStyle:(id)arg1;
- (id)sharedStyleAtIndex:(unsigned long long)arg1;
- (id)sharedStyleWithID:(id)arg1;
- (void)removeSharedStyle:(id)arg1;
- (void)removeSharedObjects:(id)arg1;
- (id)objectsReferencing:(id)arg1 inContainer:(id)arg2;
- (unsigned long long)validStyleType;
- (Class)sharedObjectClass;

@end

