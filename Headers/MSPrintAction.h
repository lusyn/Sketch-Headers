//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSPrintAction : MSDocumentAction
{
}

- (void)doPerformAction:(id)arg1;
- (void)makeArtboardBeforePrinting:(id)arg1;
- (BOOL)validate;
- (BOOL)hasDynamicTitle;
- (id)menuItemsForPage:(id)arg1;
- (void)addMenuItems:(id)arg1 toMenu:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;

@end

