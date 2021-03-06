//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class MSForeignObjectMenuBuilder;
@protocol NSObject;

@interface MSInsertMenuAction : MSDocumentAction
{
    id <NSObject> _documentCloseObserver;
    MSForeignObjectMenuBuilder *_symbolMenuBuilder;
    MSForeignObjectMenuBuilder *_textStyleMenuBuilder;
}

@property(retain, nonatomic) MSForeignObjectMenuBuilder *textStyleMenuBuilder; // @synthesize textStyleMenuBuilder=_textStyleMenuBuilder;
@property(retain, nonatomic) MSForeignObjectMenuBuilder *symbolMenuBuilder; // @synthesize symbolMenuBuilder=_symbolMenuBuilder;
@property(retain, nonatomic) id <NSObject> documentCloseObserver; // @synthesize documentCloseObserver=_documentCloseObserver;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)addInsertMenuItemsFor:(id)arg1 usingMenuBuilder:(id)arg2 forMenu:(id)arg3;
- (void)addInsertSharedTextToMenu:(id)arg1;
- (void)addInsertSymbolsToMenu:(id)arg1;
- (void)addHeaderToMenu:(id)arg1 withTitle:(id)arg2;
- (BOOL)isSelectable;
- (id)label;
- (id)tooltip;
- (id)submenuActionIDs;

@end

