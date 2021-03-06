//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAssetLibrary.h>

@class MSAssetLibraryUpdatingInfo, NSString, NSURL;

@interface MSRemoteAssetLibrary : MSAssetLibrary
{
    BOOL _newUpdatingInfo;
    BOOL _updatesRestricted;
    BOOL _isEditable;
    BOOL _isCloudLibrary;
    NSURL *_appcastURL;
    NSString *_libraryVersion;
    NSString *_originalName;
    NSString *_infoText;
    MSAssetLibraryUpdatingInfo *_updatingInfo;
    NSString *_teamName;
    NSString *_displayName;
}

+ (id)URLForApplicationSupportLibraryNamed:(id)arg1;
+ (id)assetLibraryFolder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(nonatomic) BOOL isCloudLibrary; // @synthesize isCloudLibrary=_isCloudLibrary;
@property(nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) BOOL updatesRestricted; // @synthesize updatesRestricted=_updatesRestricted;
@property(retain, nonatomic) MSAssetLibraryUpdatingInfo *updatingInfo; // @synthesize updatingInfo=_updatingInfo;
@property(nonatomic) BOOL newUpdatingInfo; // @synthesize newUpdatingInfo=_newUpdatingInfo;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(retain, nonatomic) NSURL *appcastURL; // @synthesize appcastURL=_appcastURL;
- (void).cxx_destruct;
- (void)updateLibraryID:(id)arg1;
- (void)assetLibraryUpdated;
- (id)name;
@property(readonly, nonatomic) NSString *fileName;
- (id)previewURL;
- (void)resolveLocationOnDisk;
@property(readonly, nonatomic) BOOL downloadAvailable;
@property(readonly, nonatomic) BOOL updateAvailable;
- (BOOL)canLibraryBeRemoved;
- (BOOL)isRemote;
- (unsigned long long)libraryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 appcastURL:(id)arg2 version:(id)arg3 infoText:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAtURL:(id)arg1;

@end

