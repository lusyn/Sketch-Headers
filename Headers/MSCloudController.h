//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCloudShareUploadControllerDelegate.h"

@class MSCloudShareUploadController, MSDocument, NSProgress, NSString;

@interface MSCloudController : NSObject <MSCloudShareUploadControllerDelegate>
{
    MSDocument *_document;
    NSProgress *_uploadProgress;
    double _uploadStartTime;
    MSCloudShareUploadController *_currentUploadController;
}

+ (void)openRemoteEndpoint:(id)arg1 parameters:(id)arg2;
+ (void)openRemoteSignUp;
+ (void)openRemoteSignIn;
+ (id)remoteAuthenticationURLParameters;
+ (void)openRemoteFileOverview;
+ (void)openRemoteAccountSettings;
+ (void)showPreferences;
@property(retain, nonatomic) MSCloudShareUploadController *currentUploadController; // @synthesize currentUploadController=_currentUploadController;
@property(nonatomic) double uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(nonatomic) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)openRemoteShareSettings;
- (void)cloudShareController:(id)arg1 willUploadShareAsNew:(BOOL)arg2;
- (void)cloudShareController:(id)arg1 didChangeProgress:(id)arg2;
- (void)cloudShareController:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)cloudShareController:(id)arg1 didUploadShare:(id)arg2;
@property(readonly, nonatomic, getter=isUploadCancelled) BOOL uploadCancelled;
- (void)cancelUpload;
- (void)startUploadUpdating:(id)arg1;
- (BOOL)uploadIncludesDocumentData;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
- (void)updateShareWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL uploadedByCurrentUser;
@property(readonly, nonatomic) BOOL uploaded;
- (void)resetCloudShare;
@property(readonly, nonatomic) BOOL canUpload;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

