/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "IBMouseMovedObservingView-Protocol.h"

@class NSArray, NSCursor, NSEvent, NSMutableDictionary, NSString;

@interface IBImageButton : NSView <IBMouseMovedObservingView>
{
    unsigned long long state;
    NSMutableDictionary *images;
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *imageOpacities;
    NSMutableDictionary *backgroundImageOpacities;
    SEL action;
    SEL dragAction;
    BOOL continuous;
    double actionRepeatRate;
    BOOL togglesSelectionOnClick;
    NSCursor *cursor;
    NSString *accessibilityTitle;
    unsigned long long imageLayoutMode;
    NSArray *buttonsToShareRolloverWith;
    CDStruct_c519178c hitTestInset;
    id target;
    NSEvent *trackedEvent;
    id <IBImageButtonDelegate> _delegate;
    id _representedObject;
    long long _tag;
}

+ (id)makeButtonsStartSharingRolloverState:(id)arg1;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak id <IBImageButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSEvent *trackedEvent; // @synthesize trackedEvent;
@property(nonatomic) CDStruct_c519178c hitTestInset; // @synthesize hitTestInset;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle;
@property(nonatomic) unsigned long long imageLayoutMode; // @synthesize imageLayoutMode;
@property(nonatomic) BOOL togglesSelectionOnClick; // @synthesize togglesSelectionOnClick;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) BOOL continuous; // @synthesize continuous;
@property(nonatomic) __weak id target; // @synthesize target;
@property(nonatomic) double actionRepeatRate; // @synthesize actionRepeatRate;
@property(nonatomic) SEL dragAction; // @synthesize dragAction;
@property(nonatomic) unsigned long long state; // @synthesize state;
@property(retain, nonatomic) NSCursor *cursor; // @synthesize cursor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawImage:(id)arg1 withOpacity:(double)arg2;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)observeMouseMoved:(struct CGPoint)arg1 buttonState:(unsigned long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)beginTrackingClickWithMouseDown:(id)arg1 validMouseUpArea:(struct CGRect)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)hitTestVisibleRect;
- (struct CGRect)hitTestBounds;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)backgroundImageOpacityForState:(unsigned long long)arg1;
- (void)setBackgroundImageOpacity:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveBackgroundImageOpacityForState:(unsigned long long)arg1;
- (id)imageOpacityForState:(unsigned long long)arg1;
- (void)setImageOpacity:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveImageOpacityForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveBackgroundImageForState:(unsigned long long)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveImageForState:(unsigned long long)arg1;
@property(nonatomic, getter=isSelected) BOOL selected;
- (BOOL)isDisabled;
- (void)setDisabled:(BOOL)arg1;
@property(nonatomic, getter=isRolledOver) BOOL rolledOver;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (id)initWithFrame:(struct CGRect)arg1;

@end

