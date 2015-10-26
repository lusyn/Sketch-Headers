#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ECLogManager : NSObject
{
    int _defaultContextFlags;
    NSMutableDictionary *_channels;
    NSMutableDictionary *_handlers;
    NSMutableArray *_defaultHandlers;
    NSMutableDictionary *_settings;
    id <ECLogManagerDelegate> _delegate;
    NSArray *_handlersSorted;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *handlersSorted; // @synthesize handlersSorted=_handlersSorted;
@property(nonatomic) __weak id <ECLogManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) int defaultContextFlags; // @synthesize defaultContextFlags=_defaultContextFlags;
@property(retain, nonatomic) NSMutableArray *defaultHandlers; // @synthesize defaultHandlers=_defaultHandlers;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableDictionary *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (void)handler:(id)arg1 setDefault:(BOOL)arg2;
- (BOOL)handlerIsDefault:(id)arg1;
- (id)handlersSortedByName;
- (unsigned long long)handlerCount;
- (id)handlerNameForIndex:(unsigned long long)arg1;
- (id)handlerForIndex:(unsigned long long)arg1;
- (unsigned long long)contextFlagCount;
- (int)contextFlagValueForIndex:(unsigned long long)arg1;
- (id)contextFlagNameForIndex:(unsigned long long)arg1;
- (id)channelsSortedByName;
- (void)resetAllSettings;
- (void)resetAllChannels;
- (void)resetChannel:(id)arg1;
- (void)disableAllChannels;
- (void)enableAllChannels;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (id)optionsSettings;
- (void)saveChannelSettings;
- (void)loadChannelSettings;
- (void)loadSettings;
- (id)defaultSettings;
- (id)settingsFromBundle:(id)arg1;
- (void)notifyDelegateOfStartup;
- (void)shutdown;
- (void)startup;
- (id)init;
- (void)registerHandlers;
- (id)registerChannel:(id)arg1;
- (void)applySettings:(id)arg1 toChannel:(id)arg2;
- (void)postUpdateNotification;
- (id)registerChannelWithName:(id)arg1 options:(id)arg2;
- (id)registerChannelWithRawName:(const char *)arg1 options:(id)arg2;

@end
