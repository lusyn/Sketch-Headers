//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSBaseArchiver, MSBaseUnarchiver, NSString;

@protocol MSCoding
- (id)initWithUnarchiver:(MSBaseUnarchiver *)arg1;
- (void)encodeWithArchiver:(MSBaseArchiver *)arg1;

@optional
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
- (id)initWithUnarchiver:(MSBaseUnarchiver *)arg1 migratingFrom:(long long)arg2 toVersion:(long long)arg3;
@end

