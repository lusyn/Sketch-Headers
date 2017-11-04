//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerSection.h"

#import "MSColorInspectorDelegate.h"
#import "MSColorPreviewButtonDelegate.h"
#import "NSComboBoxDataSource.h"
#import "NSMenuDelegate.h"

@class BCPopover, MSColorPreviewButton, MSUpDownTextField, NSButton, NSComboBox, NSPopUpButton, NSSegmentedControl, NSSet, NSString, NSTextField, NSView;

@interface MSTextLayerSection : MSLayerSection <NSMenuDelegate, MSColorInspectorDelegate, NSComboBoxDataSource, MSColorPreviewButtonDelegate>
{
    NSView *_basicView;
    NSView *_missingFontsView;
    NSTextField *_missingFontsLabel;
    NSButton *_fontFamilyButton;
    NSButton *_missingFontFamilyButton;
    NSPopUpButton *_fontWeightPopUpButton;
    NSComboBox *_fontSizeField;
    MSColorPreviewButton *_colorPickerButton;
    NSTextField *_kerningField;
    MSUpDownTextField *_lineHeightField;
    NSTextField *_paragraphHeightField;
    NSSegmentedControl *_alignmentButton;
    NSSegmentedControl *_verticalAlignmentButton;
    BCPopover *_popover;
    NSSet *_fontPostscriptNames;
    NSSet *_fontFamilyNames;
    NSSet *_fontPointSizes;
}

+ (void)initialize;
@property(copy, nonatomic) NSSet *fontPointSizes; // @synthesize fontPointSizes=_fontPointSizes;
@property(copy, nonatomic) NSSet *fontFamilyNames; // @synthesize fontFamilyNames=_fontFamilyNames;
@property(copy, nonatomic) NSSet *fontPostscriptNames; // @synthesize fontPostscriptNames=_fontPostscriptNames;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSSegmentedControl *verticalAlignmentButton; // @synthesize verticalAlignmentButton=_verticalAlignmentButton;
@property(retain, nonatomic) NSSegmentedControl *alignmentButton; // @synthesize alignmentButton=_alignmentButton;
@property(retain, nonatomic) NSTextField *paragraphHeightField; // @synthesize paragraphHeightField=_paragraphHeightField;
@property(retain, nonatomic) MSUpDownTextField *lineHeightField; // @synthesize lineHeightField=_lineHeightField;
@property(retain, nonatomic) NSTextField *kerningField; // @synthesize kerningField=_kerningField;
@property(retain, nonatomic) MSColorPreviewButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(retain, nonatomic) NSComboBox *fontSizeField; // @synthesize fontSizeField=_fontSizeField;
@property(retain, nonatomic) NSPopUpButton *fontWeightPopUpButton; // @synthesize fontWeightPopUpButton=_fontWeightPopUpButton;
@property(retain, nonatomic) NSButton *missingFontFamilyButton; // @synthesize missingFontFamilyButton=_missingFontFamilyButton;
@property(retain, nonatomic) NSButton *fontFamilyButton; // @synthesize fontFamilyButton=_fontFamilyButton;
@property(retain, nonatomic) NSTextField *missingFontsLabel; // @synthesize missingFontsLabel=_missingFontsLabel;
@property(retain, nonatomic) NSView *missingFontsView; // @synthesize missingFontsView=_missingFontsView;
@property(retain, nonatomic) NSView *basicView; // @synthesize basicView=_basicView;
- (void).cxx_destruct;
- (id)colorPreviewButtonPreviewColorSpace:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (BOOL)hasMoreThanOneMissingFont;
- (BOOL)hasMissingFonts;
- (id)views;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)updateKerningForFontChangeTo:(id)arg1 string:(id)arg2 range:(struct _NSRange)arg3 effectiveRange:(struct _NSRange)arg4 oldPointSize:(double)arg5;
- (void)changeFontPropertiesInBlock:(CDUnknownBlockType)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (void)applyFontPropertyChanges:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)colorInspectorUndoManager:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)reloadFontWeightPopUp;
- (void)reloadFontFamilyButton;
- (void)reloadPointSizesTextField;
- (id)firstColor;
- (void)changeFontFamilyTo:(id)arg1;
- (void)changeParagraphStyleInBlock:(CDUnknownBlockType)arg1;
- (id)textEventHandler;
- (id)textView;
- (void)verticalAlignmentAction:(id)arg1;
- (void)textBehaviourButtonAction:(id)arg1;
- (void)alignmentButtonAction:(id)arg1;
- (id)contentDrawView;
- (void)paragraphHeightAction:(id)arg1;
- (double)valueForUpDownTextField:(id)arg1;
- (void)lineHeightAction:(id)arg1;
- (void)maintainTextLayerBaselinesInBlock:(CDUnknownBlockType)arg1;
- (void)kerningAction:(id)arg1;
- (void)putFocusOnTextView;
- (void)colorInspectorWillClose:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (id)documentColorSpace;
- (id)canvasColorSpace;
- (void)changeTextLayerFont:(id)arg1;
- (void)showColorPickerAction:(id)arg1;
- (void)showParagraphStylingAction:(id)arg1;
- (void)fontSizeAction:(id)arg1;
- (void)fontWeightAction:(id)arg1;
- (void)fontFamilyAction:(id)arg1;
- (void)commitHistory;
- (void)closeExistingPopoverOrShowNewOneWithContentClass:(Class)arg1 sender:(id)arg2 viewCreatorBlock:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear;
- (void)dealloc;
- (double)defaultLineHeight;
- (double)lineHeight;
- (void)reloadLineHeightField;
- (void)reloadKerningField;
- (void)reloadVerticalAlignmentButton;
- (void)reloadData;
- (void)storeCurrentFontNamesAndSizes;
- (id)fontDescriptorsForSelection;
- (id)missingFontTitle;
- (void)textViewDidChange:(id)arg1;
- (void)updateControlFormatterNativeDecimal:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

