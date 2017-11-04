//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPreferencePane.h"

#import "MSAssetPreferenceItemDelegate.h"
#import "MSDropableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"

@class MSAssetLibraryController, NSArray, NSMenu, NSString, NSTableView;

@interface MSAssetLibrariesPreferencePane : MSPreferencePane <MSAssetPreferenceItemDelegate, MSDropableViewDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _hasAssets;
    BOOL _shouldEnableCogMenu;
    NSTableView *_tableView;
    NSArray *_items;
    NSMenu *_contextMenu;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(nonatomic) BOOL shouldEnableCogMenu; // @synthesize shouldEnableCogMenu=_shouldEnableCogMenu;
@property(nonatomic) BOOL hasAssets; // @synthesize hasAssets=_hasAssets;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)learnMoreAboutLibraries:(id)arg1;
- (void)updateQLPreview;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)toggleQLPreview:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateOpenInSketchMenuItem:(id)arg1;
- (void)openInSketchAction:(id)arg1;
- (BOOL)validateRemoveLibraryMenuItem:(id)arg1;
- (void)removeLibraryAction:(id)arg1;
- (BOOL)validateRevealInFinderMenuItem:(id)arg1;
- (void)revealInFinderAction:(id)arg1;
- (BOOL)validateToggleLibraryMenuItem:(id)arg1;
- (id)pluraliseMenuItemTitle:(id)arg1;
- (void)toggleLibraryEnabled:(id)arg1;
- (BOOL)hasDisabledLibrariesSelected;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)draggedURLsFromPasteboard:(id)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (id)draggedTypesForView:(id)arg1;
- (void)reloadSelectingLibrary:(id)arg1;
- (void)preferenceItemHasUpdated:(id)arg1;
- (void)showContextMenu:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedLibraries;
- (id)currentLibrary;
- (void)addLibrariesFromURLS:(id)arg1;
- (void)importLibraryAction:(id)arg1;
- (void)addNextLibraryFromURLs:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)syncLibraryItems;
@property(readonly, nonatomic) MSAssetLibraryController *assetLibraryController;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

