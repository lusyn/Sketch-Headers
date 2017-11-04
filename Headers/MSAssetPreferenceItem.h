//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAssetLibrary, MSRemoteAssetLibrary, NSImage, NSString;

@interface MSAssetPreferenceItem : NSObject
{
    BOOL _currentlyDownloading;
    id <MSAssetPreferenceItemDelegate> _delegate;
    MSAssetLibrary *_library;
    NSImage *_preview;
    NSString *_secondaryTitle;
    unsigned long long _fileSize;
    unsigned long long _downloadedSoFar;
}

+ (id)preferenceItemForLibrary:(id)arg1;
@property(nonatomic) unsigned long long downloadedSoFar; // @synthesize downloadedSoFar=_downloadedSoFar;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) BOOL currentlyDownloading; // @synthesize currentlyDownloading=_currentlyDownloading;
@property(retain, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) MSAssetLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak id <MSAssetPreferenceItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSRemoteAssetLibrary *remoteLibrary;
- (void)evaluateSecondaryTitle;
- (id)secondaryTitleStringWhenUpdateAvailable;
- (id)downloadProgress;
@property(readonly, nonatomic) NSString *modificationDate;
- (id)infoText;
@property(readonly, nonatomic) BOOL hasAppcastURL;
@property(readonly, nonatomic) BOOL downloadAvailable;
@property(readonly, nonatomic) BOOL updateAvailable;
@property(readonly, nonatomic) BOOL validForSecondaryTextField;
- (BOOL)valid;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) NSString *name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setupObservers;
- (id)initWithLibrary:(id)arg1;

@end

