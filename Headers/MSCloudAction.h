//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "MSCloudUploadProviderDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, NSViewController, SCKAPIOperation, SCKProject;
@protocol MSCloudExportableDocument, MSCloudUploadProvider;

@interface MSCloudAction : MSPopoverAction <MSCloudUploadProviderDelegate>
{
    NSViewController *_popoverViewController;
    NSArray *_progressImages;
    id <MSCloudUploadProvider> _upload;
    SCKAPIOperation *_refreshOperation;
    SCKProject *_projectToAssign;
    long long _numberOfUploadAttemptsSinceLastSuccessfulUpload;
    CDUnknownBlockType _closeAlertUploadDidFinishHandler;
    NSTimer *_displayErrorSheetTimer;
}

+ (long long)numberOfFailedUploadsForDocumentURL:(id)arg1;
+ (id)numberOfFailedUploadsFileURLFromDocumentURL:(id)arg1;
+ (void)openCloudDocumentWithApplicationURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)openCloudShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)requestCloudUser;
+ (void)signIn;
+ (BOOL)cloudEnabled;
+ (id)userController;
+ (void)attemptRecoveryFromCloudError:(id)arg1 optionIndex:(unsigned long long)arg2;
+ (id)cloudError:(id)arg1 addingRecoveryOptionsWithAttempter:(id)arg2;
+ (BOOL)isErrorRecoverable:(id)arg1;
@property(retain, nonatomic) NSTimer *displayErrorSheetTimer; // @synthesize displayErrorSheetTimer=_displayErrorSheetTimer;
@property(copy, nonatomic) CDUnknownBlockType closeAlertUploadDidFinishHandler; // @synthesize closeAlertUploadDidFinishHandler=_closeAlertUploadDidFinishHandler;
@property(nonatomic) long long numberOfUploadAttemptsSinceLastSuccessfulUpload; // @synthesize numberOfUploadAttemptsSinceLastSuccessfulUpload=_numberOfUploadAttemptsSinceLastSuccessfulUpload;
@property(retain, nonatomic) SCKProject *projectToAssign; // @synthesize projectToAssign=_projectToAssign;
@property(retain, nonatomic) SCKAPIOperation *refreshOperation; // @synthesize refreshOperation=_refreshOperation;
@property(readonly, nonatomic) id <MSCloudUploadProvider> upload; // @synthesize upload=_upload;
@property(retain, nonatomic) NSViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)menu;
- (void)doPerformAction:(id)arg1;
- (void)setCloudPlatform:(id)arg1;
- (BOOL)validate;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) NSArray *progressImages; // @synthesize progressImages=_progressImages;
- (void)updateProgressImage;
- (id)image;
- (id)submenuActionIDs;
- (BOOL)isSelectable;
- (BOOL)hasSubMenu;
- (BOOL)popoverShouldAnimateOnContentFrameDidChange:(id)arg1;
- (id)label;
- (id)tooltip;
- (BOOL)mayShowInToolbar;
@property(readonly, nonatomic) BOOL isCloudDocument;
- (void)progressDidChangeNotification:(id)arg1;
- (id)initWithDocument:(id)arg1;
@property(readonly, nonatomic) BOOL needsUploading;
- (void)authenticationDidChangeNotification:(id)arg1;
- (void)setUpload:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)willPresentError:(id)arg1;
- (void)uploadProvider:(id)arg1 didChangeProgress:(id)arg2;
- (void)uploadProvider:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)uploadProvider:(id)arg1 uploadStartedWithStatus:(id)arg2;
- (void)uploadProviderDidCancelUploading:(id)arg1;
- (void)uploadProvider:(id)arg1 didUploadShare:(id)arg2;
- (void)displayUploadFailedError:(id)arg1;
- (double)displayErrorSheetPeriod;
- (void)clearErrorSheetTimer:(id)arg1;
- (void)setupDisplayErrorSheetTimer;
- (void)refreshShareWithHandler:(CDUnknownBlockType)arg1;
- (void)startUploadUpdating:(id)arg1 ownedByOrganization:(id)arg2 project:(id)arg3;
- (id)uploadProviderUpdating:(id)arg1 ownedByOrganization:(id)arg2 project:(id)arg3;
@property(readonly, nonatomic) id <MSCloudExportableDocument> exportedDocument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

